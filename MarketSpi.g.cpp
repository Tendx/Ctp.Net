#include "MarketSpi.g.h"

void MarketSpi::OnFrontConnected()
{
    if (OnFrontConnectedCallback != __nullptr)
        OnFrontConnectedCallback();
}

void MarketSpi::OnFrontDisconnected(int nReason)
{
    if (OnFrontDisconnectedCallback != __nullptr)
        OnFrontDisconnectedCallback(nReason);
}

void MarketSpi::OnHeartBeatWarning(int nTimeLapse)
{
    if (OnHeartBeatWarningCallback != __nullptr)
        OnHeartBeatWarningCallback(nTimeLapse);
}

void MarketSpi::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserLoginCallback != __nullptr)
        OnRspUserLoginCallback(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserLogoutCallback != __nullptr)
        OnRspUserLogoutCallback(pUserLogout, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspQryMulticastInstrument(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryMulticastInstrumentCallback != __nullptr)
        OnRspQryMulticastInstrumentCallback(pMulticastInstrument, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspErrorCallback != __nullptr)
        OnRspErrorCallback(pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspSubMarketDataCallback != __nullptr)
        OnRspSubMarketDataCallback(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUnSubMarketDataCallback != __nullptr)
        OnRspUnSubMarketDataCallback(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspSubForQuoteRspCallback != __nullptr)
        OnRspSubForQuoteRspCallback(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRspUnSubForQuoteRsp(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUnSubForQuoteRspCallback != __nullptr)
        OnRspUnSubForQuoteRspCallback(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
}

void MarketSpi::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData)
{
    if (OnRtnDepthMarketDataCallback != __nullptr)
        OnRtnDepthMarketDataCallback(pDepthMarketData);
}

void MarketSpi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp)
{
    if (OnRtnForQuoteRspCallback != __nullptr)
        OnRtnForQuoteRspCallback(pForQuoteRsp);
}

