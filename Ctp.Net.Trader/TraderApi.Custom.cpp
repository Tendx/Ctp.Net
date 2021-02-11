#include "TraderApi.h"

using namespace System::IO;

namespace Ctp
{
    namespace Net
    {
        TraderApi^ TraderApi::CreateTraderApi(String^ FlowPath)
        {
            if (String::IsNullOrWhiteSpace(FlowPath))
                FlowPath = "";
            if (FlowPath->Length > 0)
                Directory::CreateDirectory(Path::GetDirectoryName(FlowPath));
            TraderApi^ api = gcnew TraderApi();
            IntPtr ptr = Marshal::StringToHGlobalAnsi(FlowPath);
            try
            {
                api->_api = CThostFtdcTraderApi::CreateFtdcTraderApi(static_cast<char*>(ptr.ToPointer()));
                api->_api->RegisterSpi(api->_spi);
                return api;
            }
            finally
            {
                Marshal::FreeHGlobal(ptr);
            }
        }

        void TraderApi::Release()
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
        }
    }
}