#include "MarketApi.g.h"
#include "_delegates.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace Ctp
{
    namespace Net
    {
#pragma region
        void MarketApi::Init()
        {
            _delegates::OnFrontConnected^ dOnFrontConnected = gcnew _delegates::OnFrontConnected(this, &MarketApi::OnFrontConnectedCallback);
            GCHandle hOnFrontConnected = GCHandle::Alloc(dOnFrontConnected);
            _gchandles->Add(hOnFrontConnected);
            _spi->OnFrontConnectedCallback = static_cast<_typedefs::OnFrontConnected>(Marshal::GetFunctionPointerForDelegate(dOnFrontConnected).ToPointer());

            _delegates::OnFrontDisconnected^ dOnFrontDisconnected = gcnew _delegates::OnFrontDisconnected(this, &MarketApi::OnFrontDisconnectedCallback);
            GCHandle hOnFrontDisconnected = GCHandle::Alloc(dOnFrontDisconnected);
            _gchandles->Add(hOnFrontDisconnected);
            _spi->OnFrontDisconnectedCallback = static_cast<_typedefs::OnFrontDisconnected>(Marshal::GetFunctionPointerForDelegate(dOnFrontDisconnected).ToPointer());

            _delegates::OnHeartBeatWarning^ dOnHeartBeatWarning = gcnew _delegates::OnHeartBeatWarning(this, &MarketApi::OnHeartBeatWarningCallback);
            GCHandle hOnHeartBeatWarning = GCHandle::Alloc(dOnHeartBeatWarning);
            _gchandles->Add(hOnHeartBeatWarning);
            _spi->OnHeartBeatWarningCallback = static_cast<_typedefs::OnHeartBeatWarning>(Marshal::GetFunctionPointerForDelegate(dOnHeartBeatWarning).ToPointer());

            _delegates::OnRspUserLogin^ dOnRspUserLogin = gcnew _delegates::OnRspUserLogin(this, &MarketApi::OnRspUserLoginCallback);
            GCHandle hOnRspUserLogin = GCHandle::Alloc(dOnRspUserLogin);
            _gchandles->Add(hOnRspUserLogin);
            _spi->OnRspUserLoginCallback = static_cast<_typedefs::OnRspUserLogin>(Marshal::GetFunctionPointerForDelegate(dOnRspUserLogin).ToPointer());

            _delegates::OnRspUserLogout^ dOnRspUserLogout = gcnew _delegates::OnRspUserLogout(this, &MarketApi::OnRspUserLogoutCallback);
            GCHandle hOnRspUserLogout = GCHandle::Alloc(dOnRspUserLogout);
            _gchandles->Add(hOnRspUserLogout);
            _spi->OnRspUserLogoutCallback = static_cast<_typedefs::OnRspUserLogout>(Marshal::GetFunctionPointerForDelegate(dOnRspUserLogout).ToPointer());

            _delegates::OnRspQryMulticastInstrument^ dOnRspQryMulticastInstrument = gcnew _delegates::OnRspQryMulticastInstrument(this, &MarketApi::OnRspQryMulticastInstrumentCallback);
            GCHandle hOnRspQryMulticastInstrument = GCHandle::Alloc(dOnRspQryMulticastInstrument);
            _gchandles->Add(hOnRspQryMulticastInstrument);
            _spi->OnRspQryMulticastInstrumentCallback = static_cast<_typedefs::OnRspQryMulticastInstrument>(Marshal::GetFunctionPointerForDelegate(dOnRspQryMulticastInstrument).ToPointer());

            _delegates::OnRspError^ dOnRspError = gcnew _delegates::OnRspError(this, &MarketApi::OnRspErrorCallback);
            GCHandle hOnRspError = GCHandle::Alloc(dOnRspError);
            _gchandles->Add(hOnRspError);
            _spi->OnRspErrorCallback = static_cast<_typedefs::OnRspError>(Marshal::GetFunctionPointerForDelegate(dOnRspError).ToPointer());

            _delegates::OnRspSubMarketData^ dOnRspSubMarketData = gcnew _delegates::OnRspSubMarketData(this, &MarketApi::OnRspSubMarketDataCallback);
            GCHandle hOnRspSubMarketData = GCHandle::Alloc(dOnRspSubMarketData);
            _gchandles->Add(hOnRspSubMarketData);
            _spi->OnRspSubMarketDataCallback = static_cast<_typedefs::OnRspSubMarketData>(Marshal::GetFunctionPointerForDelegate(dOnRspSubMarketData).ToPointer());

            _delegates::OnRspUnSubMarketData^ dOnRspUnSubMarketData = gcnew _delegates::OnRspUnSubMarketData(this, &MarketApi::OnRspUnSubMarketDataCallback);
            GCHandle hOnRspUnSubMarketData = GCHandle::Alloc(dOnRspUnSubMarketData);
            _gchandles->Add(hOnRspUnSubMarketData);
            _spi->OnRspUnSubMarketDataCallback = static_cast<_typedefs::OnRspUnSubMarketData>(Marshal::GetFunctionPointerForDelegate(dOnRspUnSubMarketData).ToPointer());

            _delegates::OnRspSubForQuoteRsp^ dOnRspSubForQuoteRsp = gcnew _delegates::OnRspSubForQuoteRsp(this, &MarketApi::OnRspSubForQuoteRspCallback);
            GCHandle hOnRspSubForQuoteRsp = GCHandle::Alloc(dOnRspSubForQuoteRsp);
            _gchandles->Add(hOnRspSubForQuoteRsp);
            _spi->OnRspSubForQuoteRspCallback = static_cast<_typedefs::OnRspSubForQuoteRsp>(Marshal::GetFunctionPointerForDelegate(dOnRspSubForQuoteRsp).ToPointer());

            _delegates::OnRspUnSubForQuoteRsp^ dOnRspUnSubForQuoteRsp = gcnew _delegates::OnRspUnSubForQuoteRsp(this, &MarketApi::OnRspUnSubForQuoteRspCallback);
            GCHandle hOnRspUnSubForQuoteRsp = GCHandle::Alloc(dOnRspUnSubForQuoteRsp);
            _gchandles->Add(hOnRspUnSubForQuoteRsp);
            _spi->OnRspUnSubForQuoteRspCallback = static_cast<_typedefs::OnRspUnSubForQuoteRsp>(Marshal::GetFunctionPointerForDelegate(dOnRspUnSubForQuoteRsp).ToPointer());

            _delegates::OnRtnDepthMarketData^ dOnRtnDepthMarketData = gcnew _delegates::OnRtnDepthMarketData(this, &MarketApi::OnRtnDepthMarketDataCallback);
            GCHandle hOnRtnDepthMarketData = GCHandle::Alloc(dOnRtnDepthMarketData);
            _gchandles->Add(hOnRtnDepthMarketData);
            _spi->OnRtnDepthMarketDataCallback = static_cast<_typedefs::OnRtnDepthMarketData>(Marshal::GetFunctionPointerForDelegate(dOnRtnDepthMarketData).ToPointer());

            _delegates::OnRtnForQuoteRsp^ dOnRtnForQuoteRsp = gcnew _delegates::OnRtnForQuoteRsp(this, &MarketApi::OnRtnForQuoteRspCallback);
            GCHandle hOnRtnForQuoteRsp = GCHandle::Alloc(dOnRtnForQuoteRsp);
            _gchandles->Add(hOnRtnForQuoteRsp);
            _spi->OnRtnForQuoteRspCallback = static_cast<_typedefs::OnRtnForQuoteRsp>(Marshal::GetFunctionPointerForDelegate(dOnRtnForQuoteRsp).ToPointer());

            return _api->Init();
        }

        int MarketApi::Join()
        {
            return _api->Join();
        }

        String^ MarketApi::GetTradingDay()
        {
            return gcnew String(_api->GetTradingDay());
        }

        void MarketApi::RegisterFront(String^ frontAddress)
        {
            IntPtr frontAddressPtr = Marshal::StringToHGlobalAnsi(frontAddress);
            try
            {
                return _api->RegisterFront(static_cast<char*>(frontAddressPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(frontAddressPtr);
            }
        }

        void MarketApi::RegisterNameServer(String^ nsAddress)
        {
            IntPtr nsAddressPtr = Marshal::StringToHGlobalAnsi(nsAddress);
            try
            {
                return _api->RegisterNameServer(static_cast<char*>(nsAddressPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(nsAddressPtr);
            }
        }

        void MarketApi::RegisterFensUserInfo(FensUserInfoField^ fensUserInfo)
        {
            IntPtr fensUserInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<FensUserInfoField^>());
            Marshal::StructureToPtr(fensUserInfo, fensUserInfoPtr, false);
            try
            {
                return _api->RegisterFensUserInfo(static_cast<CThostFtdcFensUserInfoField*>(fensUserInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(fensUserInfoPtr);
            }
        }

        int MarketApi::ReqUserLogin(ReqUserLoginField^ reqUserLoginField, int requestID)
        {
            IntPtr reqUserLoginFieldPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginField^>());
            Marshal::StructureToPtr(reqUserLoginField, reqUserLoginFieldPtr, false);
            try
            {
                return _api->ReqUserLogin(static_cast<CThostFtdcReqUserLoginField*>(reqUserLoginFieldPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqUserLoginFieldPtr);
            }
        }

        int MarketApi::ReqUserLogout(UserLogoutField^ userLogout, int requestID)
        {
            IntPtr userLogoutPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserLogoutField^>());
            Marshal::StructureToPtr(userLogout, userLogoutPtr, false);
            try
            {
                return _api->ReqUserLogout(static_cast<CThostFtdcUserLogoutField*>(userLogoutPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(userLogoutPtr);
            }
        }

        int MarketApi::ReqQryMulticastInstrument(QryMulticastInstrumentField^ qryMulticastInstrument, int requestID)
        {
            IntPtr qryMulticastInstrumentPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryMulticastInstrumentField^>());
            Marshal::StructureToPtr(qryMulticastInstrument, qryMulticastInstrumentPtr, false);
            try
            {
                return _api->ReqQryMulticastInstrument(static_cast<CThostFtdcQryMulticastInstrumentField*>(qryMulticastInstrumentPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryMulticastInstrumentPtr);
            }
        }

        MarketApi::MarketApi() {}

        MarketApi::~MarketApi() {}

#pragma endregion

#pragma region
        void MarketApi::OnFrontConnectedCallback()
        {
            OnFrontConnected();
        }

        void MarketApi::OnFrontDisconnectedCallback(int nReason)
        {
            OnFrontDisconnected(nReason);
        }

        void MarketApi::OnHeartBeatWarningCallback(int nTimeLapse)
        {
            OnHeartBeatWarning(nTimeLapse);
        }

        void MarketApi::OnRspUserLoginCallback(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspUserLoginField^ rspUserLogin = safe_cast<RspUserLoginField^>(Marshal::PtrToStructure(IntPtr(pRspUserLogin), RspUserLoginField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserLogin(rspUserLogin, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspUserLogoutCallback(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            UserLogoutField^ userLogout = safe_cast<UserLogoutField^>(Marshal::PtrToStructure(IntPtr(pUserLogout), UserLogoutField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserLogout(userLogout, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspQryMulticastInstrumentCallback(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            MulticastInstrumentField^ multicastInstrument = safe_cast<MulticastInstrumentField^>(Marshal::PtrToStructure(IntPtr(pMulticastInstrument), MulticastInstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryMulticastInstrument(multicastInstrument, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspErrorCallback(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspError(rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspSubMarketDataCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SpecificInstrumentField^ specificInstrument = safe_cast<SpecificInstrumentField^>(Marshal::PtrToStructure(IntPtr(pSpecificInstrument), SpecificInstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspSubMarketData(specificInstrument, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspUnSubMarketDataCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SpecificInstrumentField^ specificInstrument = safe_cast<SpecificInstrumentField^>(Marshal::PtrToStructure(IntPtr(pSpecificInstrument), SpecificInstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUnSubMarketData(specificInstrument, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspSubForQuoteRspCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SpecificInstrumentField^ specificInstrument = safe_cast<SpecificInstrumentField^>(Marshal::PtrToStructure(IntPtr(pSpecificInstrument), SpecificInstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspSubForQuoteRsp(specificInstrument, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRspUnSubForQuoteRspCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SpecificInstrumentField^ specificInstrument = safe_cast<SpecificInstrumentField^>(Marshal::PtrToStructure(IntPtr(pSpecificInstrument), SpecificInstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUnSubForQuoteRsp(specificInstrument, rspInfo, nRequestID, bIsLast);
        }

        void MarketApi::OnRtnDepthMarketDataCallback(CThostFtdcDepthMarketDataField* pDepthMarketData)
        {
            DepthMarketDataField^ depthMarketData = safe_cast<DepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), DepthMarketDataField::typeid));
            OnRtnDepthMarketData(depthMarketData);
        }

        void MarketApi::OnRtnForQuoteRspCallback(CThostFtdcForQuoteRspField* pForQuoteRsp)
        {
            ForQuoteRspField^ forQuoteRsp = safe_cast<ForQuoteRspField^>(Marshal::PtrToStructure(IntPtr(pForQuoteRsp), ForQuoteRspField::typeid));
            OnRtnForQuoteRsp(forQuoteRsp);
        }

#pragma endregion
    }
}
