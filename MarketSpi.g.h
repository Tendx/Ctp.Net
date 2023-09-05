#pragma once
#include "ThostFtdcMdApi.h"
#include "_typedefs.g.h"

class MarketSpi : public CThostFtdcMdSpi
{
public:
#pragma region
    _typedefs::OnFrontConnected OnFrontConnectedCallback = __nullptr;
    _typedefs::OnFrontDisconnected OnFrontDisconnectedCallback = __nullptr;
    _typedefs::OnHeartBeatWarning OnHeartBeatWarningCallback = __nullptr;
    _typedefs::OnRspUserLogin OnRspUserLoginCallback = __nullptr;
    _typedefs::OnRspUserLogout OnRspUserLogoutCallback = __nullptr;
    _typedefs::OnRspQryMulticastInstrument OnRspQryMulticastInstrumentCallback = __nullptr;
    _typedefs::OnRspError OnRspErrorCallback = __nullptr;
    _typedefs::OnRspSubMarketData OnRspSubMarketDataCallback = __nullptr;
    _typedefs::OnRspUnSubMarketData OnRspUnSubMarketDataCallback = __nullptr;
    _typedefs::OnRspSubForQuoteRsp OnRspSubForQuoteRspCallback = __nullptr;
    _typedefs::OnRspUnSubForQuoteRsp OnRspUnSubForQuoteRspCallback = __nullptr;
    _typedefs::OnRtnDepthMarketData OnRtnDepthMarketDataCallback = __nullptr;
    _typedefs::OnRtnForQuoteRsp OnRtnForQuoteRspCallback = __nullptr;
#pragma endregion

#pragma region
    void OnFrontConnected();
    void OnFrontDisconnected(int nReason);
    void OnHeartBeatWarning(int nTimeLapse);
    void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData);
    void OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp);
#pragma endregion
};
