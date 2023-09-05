#pragma once
#include "TraderApi.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

typedef CThostFtdcTraderApi* (*CreateFtdcTdApi)(const char*);
typedef char* (*GetFtdcVersion)();

namespace Ctp
{
    namespace Net
    {
        TraderApi^ TraderApi::CreateApi(String^ dllPath, String^ flowPath)
        {
            if (String::IsNullOrWhiteSpace(flowPath))
                flowPath = "";
            if (flowPath->Length > 0)
                Directory::CreateDirectory(Path::GetDirectoryName(flowPath));

            TraderApi^ traderApi = gcnew TraderApi();
            IntPtr dllPathPtr = Marshal::StringToHGlobalUni(dllPath);
            IntPtr flowPathPtr = Marshal::StringToHGlobalAnsi(flowPath);
            try
            {
                traderApi->_hmodule = LoadLibrary(static_cast<LPCWSTR>(dllPathPtr.ToPointer()));
                if (traderApi->_hmodule)
                {
                    CreateFtdcTdApi create = (CreateFtdcTdApi)*GetProcAddress(traderApi->_hmodule, "?CreateFtdcTraderApi@CThostFtdcTraderApi@@SAPEAV1@PEBD@Z");
                    traderApi->_spi = new TraderSpi();
                    traderApi->_api = create(static_cast<char*>(flowPathPtr.ToPointer()));
                    traderApi->_api->RegisterSpi(traderApi->_spi);
                    return traderApi;
                }
                else
                {
                    return nullptr;
                }
            }
            finally
            {
                Marshal::FreeHGlobal(dllPathPtr);
                Marshal::FreeHGlobal(flowPathPtr);
            }
        }

        String^ TraderApi::GetApiVersion()
        {
            GetFtdcVersion getVersion = (GetFtdcVersion)*GetProcAddress(_hmodule, "?GetApiVersion@CThostFtdcMdApi@@SAPEBDXZ");
            return gcnew String(getVersion());
        }

        void TraderApi::Release()
        {
            if (_api != __nullptr)
            {
                _api->RegisterSpi(__nullptr);
                _api->Release();
                _api = __nullptr;
            }
            if (_spi != __nullptr)
            {
                delete _spi;
                _spi = __nullptr;
            }
            for each (GCHandle handle in _gchandles)
                handle.Free();
            FreeLibrary(_hmodule);
        }

    }
}
