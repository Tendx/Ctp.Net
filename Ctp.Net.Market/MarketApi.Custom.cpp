#include "MarketApi.h"

using namespace System::IO;

namespace Ctp
{
    namespace Net
    {
        MarketApi^ MarketApi::CreateMarketApi(String^ FlowPath, bool IsUsingUdp, bool IsMulticast)
        {
            if (String::IsNullOrWhiteSpace(FlowPath))
                FlowPath = "";
            if (FlowPath->Length > 0)
                Directory::CreateDirectory(Path::GetDirectoryName(FlowPath));
            MarketApi^ api = gcnew MarketApi();
            IntPtr ptr = Marshal::StringToHGlobalAnsi(FlowPath);
            try
            {
                api->_api = CThostFtdcMdApi::CreateFtdcMdApi(static_cast<char*>(ptr.ToPointer()), IsUsingUdp, IsMulticast);
                api->_api->RegisterSpi(api->_spi);
                return api;
            }
            finally
            {
                Marshal::FreeHGlobal(ptr);
            }
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
        }

        int MarketApi::SubscribeMarketData(IList<String^>^ InstrumentID, int Count)
        {
            if (InstrumentID == nullptr || InstrumentID->Count < Count || Count == 0)
                return -1;
            char** pp = new char* [Count];
            for (int i = 0; i < Count; i++)
            {
                pp[i++] = static_cast<char*>(Marshal::StringToHGlobalAnsi(InstrumentID[i]).ToPointer());
            }
            try
            {
                return _api->SubscribeMarketData(pp, Count);
            }
            finally
            {
                delete[] pp;
            }
        }

        int MarketApi::UnSubscribeMarketData(IList<String^>^ InstrumentID, int Count)
        {
            if (InstrumentID == nullptr || InstrumentID->Count < Count || Count == 0)
                return -1;
            char** pp = new char* [Count];
            for (int i = 0; i < Count; i++)
            {
                pp[i++] = static_cast<char*>(Marshal::StringToHGlobalAnsi(InstrumentID[i]).ToPointer());
            }
            try
            {
                return _api->UnSubscribeMarketData(pp, Count);
            }
            finally
            {
                delete[] pp;
            }
        }

        int MarketApi::SubscribeForQuoteRsp(IList<String^>^ InstrumentID, int Count)
        {
            if (InstrumentID == nullptr || InstrumentID->Count < Count || Count == 0)
                return -1;
            char** pp = new char* [Count];
            for (int i = 0; i < Count; i++)
            {
                pp[i++] = static_cast<char*>(Marshal::StringToHGlobalAnsi(InstrumentID[i]).ToPointer());
            }
            try
            {
                return _api->SubscribeForQuoteRsp(pp, Count);
            }
            finally
            {
                delete[] pp;
            }
        }

        int MarketApi::UnSubscribeForQuoteRsp(IList<String^>^ InstrumentID, int Count)
        {
            if (InstrumentID == nullptr || InstrumentID->Count < Count || Count == 0)
                return -1;
            char** pp = new char* [Count];
            for (int i = 0; i < Count; i++)
            {
                pp[i++] = static_cast<char*>(Marshal::StringToHGlobalAnsi(InstrumentID[i]).ToPointer());
            }
            try
            {
                return _api->UnSubscribeForQuoteRsp(pp, Count);
            }
            finally
            {
                delete[] pp;
            }
        }

    }
}