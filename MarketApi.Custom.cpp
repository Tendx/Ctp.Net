#pragma once
#include "MarketApi.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

typedef CThostFtdcMdApi* (*CreateFtdcMdApi)(const char*, const bool, const bool);
typedef char* (*GetFtdcVersion)();

namespace Ctp
{
    namespace Net
    {
        MarketApi^ MarketApi::CreateApi(String^ dllPath, String^ flowPath, bool isUsingUdp, bool isMulticast)
        {
            if (String::IsNullOrWhiteSpace(flowPath))
                flowPath = "";
            if (flowPath->Length > 0)
                Directory::CreateDirectory(Path::GetDirectoryName(flowPath));

            MarketApi^ marketApi = gcnew MarketApi();
            IntPtr dllPathPtr = Marshal::StringToHGlobalUni(dllPath);
            IntPtr flowPathPtr = Marshal::StringToHGlobalAnsi(flowPath);
            try
            {
                marketApi->_hmodule = LoadLibrary(static_cast<LPCWSTR>(dllPathPtr.ToPointer()));
                if (marketApi->_hmodule)
                {
                    CreateFtdcMdApi create = (CreateFtdcMdApi)*GetProcAddress(marketApi->_hmodule, "?CreateFtdcMdApi@CThostFtdcMdApi@@SAPEAV1@PEBD_N1@Z");
                    marketApi->_spi = new MarketSpi();
                    marketApi->_api = create(static_cast<char*>(flowPathPtr.ToPointer()), isUsingUdp, isMulticast);
                    marketApi->_api->RegisterSpi(marketApi->_spi);
                    return marketApi;
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

        String^ MarketApi::GetApiVersion()
        {
            GetFtdcVersion getVersion = (GetFtdcVersion)*GetProcAddress(_hmodule, "?GetApiVersion@CThostFtdcMdApi@@SAPEBDXZ");
            return gcnew String(getVersion());
        }

        void MarketApi::Release()
        {
            if (_api != nullptr)
            {
                _api->RegisterSpi(nullptr);
                _api->Release();
                _api = nullptr;
            }
            if (_spi != nullptr)
            {
                delete _spi;
                _spi = nullptr;
            }
            for each (GCHandle handle in _gchandles)
                handle.Free();
            FreeLibrary(_hmodule);
        }

        int MarketApi::SubscribeMarketData(List<String^>^ instrumentIds)
        {
            if (instrumentIds == nullptr || instrumentIds->Count == 0)
                return -1;
            System::Collections::Generic::List<IntPtr>^ ps = gcnew System::Collections::Generic::List<IntPtr>();
            int length = instrumentIds->Count;
            char** pp = new char*[length];
            for (int i = 0; i < length; i++)
            {
                IntPtr p = Marshal::StringToHGlobalAnsi(instrumentIds[i]);
                ps->Add(p);
                pp[i] = static_cast<char*>(p.ToPointer());
            }
            try
            {
                return _api->SubscribeMarketData(pp, instrumentIds->Count);
            }
            finally
            {
                for each (IntPtr p in ps)
                {
                    Marshal::FreeHGlobal(p);
                }
                delete[] pp;
            }
        }

        int MarketApi::UnSubscribeMarketData(List<String^>^ instrumentIds)
        {
            if (instrumentIds == nullptr || instrumentIds->Count == 0)
                return -1;
            System::Collections::Generic::List<IntPtr>^ ps = gcnew System::Collections::Generic::List<IntPtr>();
            int length = instrumentIds->Count;
            char** pp = new char* [length];
            for (int i = 0; i < length; i++)
            {
                IntPtr p = Marshal::StringToHGlobalAnsi(instrumentIds[i]);
                ps->Add(p);
                pp[i] = static_cast<char*>(p.ToPointer());
            }
            try
            {
                return _api->UnSubscribeMarketData(pp, instrumentIds->Count);
            }
            finally
            {
                for each (IntPtr p in ps)
                {
                    Marshal::FreeHGlobal(p);
                }
                delete[] pp;
            }
        }

        int MarketApi::SubscribeForQuoteRsp(List<String^>^ instrumentIds)
        {
            if (instrumentIds == nullptr || instrumentIds->Count == 0)
                return -1;
            System::Collections::Generic::List<IntPtr>^ ps = gcnew System::Collections::Generic::List<IntPtr>();
            int length = instrumentIds->Count;
            char** pp = new char* [length];
            for (int i = 0; i < length; i++)
            {
                IntPtr p = Marshal::StringToHGlobalAnsi(instrumentIds[i]);
                ps->Add(p);
                pp[i] = static_cast<char*>(p.ToPointer());
            }
            try
            {
                return _api->SubscribeForQuoteRsp(pp, instrumentIds->Count);
            }
            finally
            {
                for each (IntPtr p in ps)
                {
                    Marshal::FreeHGlobal(p);
                }
                delete[] pp;
            }
        }

        int MarketApi::UnSubscribeForQuoteRsp(List<String^>^ instrumentIds)
        {
            if (instrumentIds == nullptr || instrumentIds->Count == 0)
                return -1;
            System::Collections::Generic::List<IntPtr>^ ps = gcnew System::Collections::Generic::List<IntPtr>();
            int length = instrumentIds->Count;
            char** pp = new char* [length];
            for (int i = 0; i < length; i++)
            {
                IntPtr p = Marshal::StringToHGlobalAnsi(instrumentIds[i]);
                ps->Add(p);
                pp[i] = static_cast<char*>(p.ToPointer());
            }
            try
            {
                return _api->UnSubscribeForQuoteRsp(pp, instrumentIds->Count);
            }
            finally
            {
                for each (IntPtr p in ps)
                {
                    Marshal::FreeHGlobal(p);
                }
                delete[] pp;
            }
        }

    }
}
