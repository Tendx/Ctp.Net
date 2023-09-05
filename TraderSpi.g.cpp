#include "TraderSpi.g.h"

void TraderSpi::OnFrontConnected()
{
    if (OnFrontConnectedCallback != __nullptr)
        OnFrontConnectedCallback();
}

void TraderSpi::OnFrontDisconnected(int nReason)
{
    if (OnFrontDisconnectedCallback != __nullptr)
        OnFrontDisconnectedCallback(nReason);
}

void TraderSpi::OnHeartBeatWarning(int nTimeLapse)
{
    if (OnHeartBeatWarningCallback != __nullptr)
        OnHeartBeatWarningCallback(nTimeLapse);
}

void TraderSpi::OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspAuthenticateCallback != __nullptr)
        OnRspAuthenticateCallback(pRspAuthenticateField, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserLoginCallback != __nullptr)
        OnRspUserLoginCallback(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserLogoutCallback != __nullptr)
        OnRspUserLogoutCallback(pUserLogout, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserPasswordUpdateCallback != __nullptr)
        OnRspUserPasswordUpdateCallback(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspTradingAccountPasswordUpdateCallback != __nullptr)
        OnRspTradingAccountPasswordUpdateCallback(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspUserAuthMethod(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspUserAuthMethodCallback != __nullptr)
        OnRspUserAuthMethodCallback(pRspUserAuthMethod, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspGenUserCaptcha(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspGenUserCaptchaCallback != __nullptr)
        OnRspGenUserCaptchaCallback(pRspGenUserCaptcha, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspGenUserText(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspGenUserTextCallback != __nullptr)
        OnRspGenUserTextCallback(pRspGenUserText, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspOrderInsertCallback != __nullptr)
        OnRspOrderInsertCallback(pInputOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspParkedOrderInsertCallback != __nullptr)
        OnRspParkedOrderInsertCallback(pParkedOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspParkedOrderActionCallback != __nullptr)
        OnRspParkedOrderActionCallback(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspOrderActionCallback != __nullptr)
        OnRspOrderActionCallback(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQueryMaxOrderVolumeCallback != __nullptr)
        OnRspQueryMaxOrderVolumeCallback(pQueryMaxOrderVolume, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspSettlementInfoConfirmCallback != __nullptr)
        OnRspSettlementInfoConfirmCallback(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspRemoveParkedOrderCallback != __nullptr)
        OnRspRemoveParkedOrderCallback(pRemoveParkedOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspRemoveParkedOrderActionCallback != __nullptr)
        OnRspRemoveParkedOrderActionCallback(pRemoveParkedOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspExecOrderInsertCallback != __nullptr)
        OnRspExecOrderInsertCallback(pInputExecOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspExecOrderAction(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspExecOrderActionCallback != __nullptr)
        OnRspExecOrderActionCallback(pInputExecOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspForQuoteInsertCallback != __nullptr)
        OnRspForQuoteInsertCallback(pInputForQuote, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQuoteInsertCallback != __nullptr)
        OnRspQuoteInsertCallback(pInputQuote, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQuoteAction(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQuoteActionCallback != __nullptr)
        OnRspQuoteActionCallback(pInputQuoteAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspBatchOrderAction(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspBatchOrderActionCallback != __nullptr)
        OnRspBatchOrderActionCallback(pInputBatchOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspOptionSelfCloseInsertCallback != __nullptr)
        OnRspOptionSelfCloseInsertCallback(pInputOptionSelfClose, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspOptionSelfCloseAction(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspOptionSelfCloseActionCallback != __nullptr)
        OnRspOptionSelfCloseActionCallback(pInputOptionSelfCloseAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspCombActionInsertCallback != __nullptr)
        OnRspCombActionInsertCallback(pInputCombAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryOrderCallback != __nullptr)
        OnRspQryOrderCallback(pOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTradeCallback != __nullptr)
        OnRspQryTradeCallback(pTrade, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestorPositionCallback != __nullptr)
        OnRspQryInvestorPositionCallback(pInvestorPosition, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTradingAccountCallback != __nullptr)
        OnRspQryTradingAccountCallback(pTradingAccount, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestorCallback != __nullptr)
        OnRspQryInvestorCallback(pInvestor, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTradingCodeCallback != __nullptr)
        OnRspQryTradingCodeCallback(pTradingCode, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInstrumentMarginRateCallback != __nullptr)
        OnRspQryInstrumentMarginRateCallback(pInstrumentMarginRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInstrumentCommissionRateCallback != __nullptr)
        OnRspQryInstrumentCommissionRateCallback(pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryExchangeCallback != __nullptr)
        OnRspQryExchangeCallback(pExchange, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryProduct(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryProductCallback != __nullptr)
        OnRspQryProductCallback(pProduct, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInstrumentCallback != __nullptr)
        OnRspQryInstrumentCallback(pInstrument, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryDepthMarketDataCallback != __nullptr)
        OnRspQryDepthMarketDataCallback(pDepthMarketData, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySettlementInfoCallback != __nullptr)
        OnRspQrySettlementInfoCallback(pSettlementInfo, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTransferBankCallback != __nullptr)
        OnRspQryTransferBankCallback(pTransferBank, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestorPositionDetailCallback != __nullptr)
        OnRspQryInvestorPositionDetailCallback(pInvestorPositionDetail, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryNoticeCallback != __nullptr)
        OnRspQryNoticeCallback(pNotice, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySettlementInfoConfirmCallback != __nullptr)
        OnRspQrySettlementInfoConfirmCallback(pSettlementInfoConfirm, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestorPositionCombineDetailCallback != __nullptr)
        OnRspQryInvestorPositionCombineDetailCallback(pInvestorPositionCombineDetail, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryCFMMCTradingAccountKeyCallback != __nullptr)
        OnRspQryCFMMCTradingAccountKeyCallback(pCFMMCTradingAccountKey, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryEWarrantOffsetCallback != __nullptr)
        OnRspQryEWarrantOffsetCallback(pEWarrantOffset, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestorProductGroupMargin(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestorProductGroupMarginCallback != __nullptr)
        OnRspQryInvestorProductGroupMarginCallback(pInvestorProductGroupMargin, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryExchangeMarginRate(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryExchangeMarginRateCallback != __nullptr)
        OnRspQryExchangeMarginRateCallback(pExchangeMarginRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryExchangeMarginRateAdjust(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryExchangeMarginRateAdjustCallback != __nullptr)
        OnRspQryExchangeMarginRateAdjustCallback(pExchangeMarginRateAdjust, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryExchangeRate(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryExchangeRateCallback != __nullptr)
        OnRspQryExchangeRateCallback(pExchangeRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySecAgentACIDMap(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySecAgentACIDMapCallback != __nullptr)
        OnRspQrySecAgentACIDMapCallback(pSecAgentACIDMap, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryProductExchRate(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryProductExchRateCallback != __nullptr)
        OnRspQryProductExchRateCallback(pProductExchRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryProductGroup(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryProductGroupCallback != __nullptr)
        OnRspQryProductGroupCallback(pProductGroup, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryMMInstrumentCommissionRate(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryMMInstrumentCommissionRateCallback != __nullptr)
        OnRspQryMMInstrumentCommissionRateCallback(pMMInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryMMOptionInstrCommRate(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryMMOptionInstrCommRateCallback != __nullptr)
        OnRspQryMMOptionInstrCommRateCallback(pMMOptionInstrCommRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInstrumentOrderCommRate(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInstrumentOrderCommRateCallback != __nullptr)
        OnRspQryInstrumentOrderCommRateCallback(pInstrumentOrderCommRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySecAgentTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySecAgentTradingAccountCallback != __nullptr)
        OnRspQrySecAgentTradingAccountCallback(pTradingAccount, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySecAgentCheckMode(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySecAgentCheckModeCallback != __nullptr)
        OnRspQrySecAgentCheckModeCallback(pSecAgentCheckMode, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQrySecAgentTradeInfo(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQrySecAgentTradeInfoCallback != __nullptr)
        OnRspQrySecAgentTradeInfoCallback(pSecAgentTradeInfo, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryOptionInstrTradeCost(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryOptionInstrTradeCostCallback != __nullptr)
        OnRspQryOptionInstrTradeCostCallback(pOptionInstrTradeCost, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryOptionInstrCommRate(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryOptionInstrCommRateCallback != __nullptr)
        OnRspQryOptionInstrCommRateCallback(pOptionInstrCommRate, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryExecOrder(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryExecOrderCallback != __nullptr)
        OnRspQryExecOrderCallback(pExecOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryForQuote(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryForQuoteCallback != __nullptr)
        OnRspQryForQuoteCallback(pForQuote, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryQuote(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryQuoteCallback != __nullptr)
        OnRspQryQuoteCallback(pQuote, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryOptionSelfCloseCallback != __nullptr)
        OnRspQryOptionSelfCloseCallback(pOptionSelfClose, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryInvestUnit(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryInvestUnitCallback != __nullptr)
        OnRspQryInvestUnitCallback(pInvestUnit, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryCombInstrumentGuard(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryCombInstrumentGuardCallback != __nullptr)
        OnRspQryCombInstrumentGuardCallback(pCombInstrumentGuard, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryCombAction(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryCombActionCallback != __nullptr)
        OnRspQryCombActionCallback(pCombAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTransferSerialCallback != __nullptr)
        OnRspQryTransferSerialCallback(pTransferSerial, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryAccountregisterCallback != __nullptr)
        OnRspQryAccountregisterCallback(pAccountregister, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspErrorCallback != __nullptr)
        OnRspErrorCallback(pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRtnOrder(CThostFtdcOrderField* pOrder)
{
    if (OnRtnOrderCallback != __nullptr)
        OnRtnOrderCallback(pOrder);
}

void TraderSpi::OnRtnTrade(CThostFtdcTradeField* pTrade)
{
    if (OnRtnTradeCallback != __nullptr)
        OnRtnTradeCallback(pTrade);
}

void TraderSpi::OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnOrderInsertCallback != __nullptr)
        OnErrRtnOrderInsertCallback(pInputOrder, pRspInfo);
}

void TraderSpi::OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnOrderActionCallback != __nullptr)
        OnErrRtnOrderActionCallback(pOrderAction, pRspInfo);
}

void TraderSpi::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus)
{
    if (OnRtnInstrumentStatusCallback != __nullptr)
        OnRtnInstrumentStatusCallback(pInstrumentStatus);
}

void TraderSpi::OnRtnBulletin(CThostFtdcBulletinField* pBulletin)
{
    if (OnRtnBulletinCallback != __nullptr)
        OnRtnBulletinCallback(pBulletin);
}

void TraderSpi::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo)
{
    if (OnRtnTradingNoticeCallback != __nullptr)
        OnRtnTradingNoticeCallback(pTradingNoticeInfo);
}

void TraderSpi::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder)
{
    if (OnRtnErrorConditionalOrderCallback != __nullptr)
        OnRtnErrorConditionalOrderCallback(pErrorConditionalOrder);
}

void TraderSpi::OnRtnExecOrder(CThostFtdcExecOrderField* pExecOrder)
{
    if (OnRtnExecOrderCallback != __nullptr)
        OnRtnExecOrderCallback(pExecOrder);
}

void TraderSpi::OnErrRtnExecOrderInsert(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnExecOrderInsertCallback != __nullptr)
        OnErrRtnExecOrderInsertCallback(pInputExecOrder, pRspInfo);
}

void TraderSpi::OnErrRtnExecOrderAction(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnExecOrderActionCallback != __nullptr)
        OnErrRtnExecOrderActionCallback(pExecOrderAction, pRspInfo);
}

void TraderSpi::OnErrRtnForQuoteInsert(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnForQuoteInsertCallback != __nullptr)
        OnErrRtnForQuoteInsertCallback(pInputForQuote, pRspInfo);
}

void TraderSpi::OnRtnQuote(CThostFtdcQuoteField* pQuote)
{
    if (OnRtnQuoteCallback != __nullptr)
        OnRtnQuoteCallback(pQuote);
}

void TraderSpi::OnErrRtnQuoteInsert(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnQuoteInsertCallback != __nullptr)
        OnErrRtnQuoteInsertCallback(pInputQuote, pRspInfo);
}

void TraderSpi::OnErrRtnQuoteAction(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnQuoteActionCallback != __nullptr)
        OnErrRtnQuoteActionCallback(pQuoteAction, pRspInfo);
}

void TraderSpi::OnRtnForQuoteRsp(CThostFtdcForQuoteRspField* pForQuoteRsp)
{
    if (OnRtnForQuoteRspCallback != __nullptr)
        OnRtnForQuoteRspCallback(pForQuoteRsp);
}

void TraderSpi::OnRtnCFMMCTradingAccountToken(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken)
{
    if (OnRtnCFMMCTradingAccountTokenCallback != __nullptr)
        OnRtnCFMMCTradingAccountTokenCallback(pCFMMCTradingAccountToken);
}

void TraderSpi::OnErrRtnBatchOrderAction(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnBatchOrderActionCallback != __nullptr)
        OnErrRtnBatchOrderActionCallback(pBatchOrderAction, pRspInfo);
}

void TraderSpi::OnRtnOptionSelfClose(CThostFtdcOptionSelfCloseField* pOptionSelfClose)
{
    if (OnRtnOptionSelfCloseCallback != __nullptr)
        OnRtnOptionSelfCloseCallback(pOptionSelfClose);
}

void TraderSpi::OnErrRtnOptionSelfCloseInsert(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnOptionSelfCloseInsertCallback != __nullptr)
        OnErrRtnOptionSelfCloseInsertCallback(pInputOptionSelfClose, pRspInfo);
}

void TraderSpi::OnErrRtnOptionSelfCloseAction(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnOptionSelfCloseActionCallback != __nullptr)
        OnErrRtnOptionSelfCloseActionCallback(pOptionSelfCloseAction, pRspInfo);
}

void TraderSpi::OnRtnCombAction(CThostFtdcCombActionField* pCombAction)
{
    if (OnRtnCombActionCallback != __nullptr)
        OnRtnCombActionCallback(pCombAction);
}

void TraderSpi::OnErrRtnCombActionInsert(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnCombActionInsertCallback != __nullptr)
        OnErrRtnCombActionInsertCallback(pInputCombAction, pRspInfo);
}

void TraderSpi::OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryContractBankCallback != __nullptr)
        OnRspQryContractBankCallback(pContractBank, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryParkedOrderCallback != __nullptr)
        OnRspQryParkedOrderCallback(pParkedOrder, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryParkedOrderActionCallback != __nullptr)
        OnRspQryParkedOrderActionCallback(pParkedOrderAction, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryTradingNoticeCallback != __nullptr)
        OnRspQryTradingNoticeCallback(pTradingNotice, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryBrokerTradingParamsCallback != __nullptr)
        OnRspQryBrokerTradingParamsCallback(pBrokerTradingParams, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQryBrokerTradingAlgosCallback != __nullptr)
        OnRspQryBrokerTradingAlgosCallback(pBrokerTradingAlgos, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQueryCFMMCTradingAccountToken(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQueryCFMMCTradingAccountTokenCallback != __nullptr)
        OnRspQueryCFMMCTradingAccountTokenCallback(pQueryCFMMCTradingAccountToken, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer)
{
    if (OnRtnFromBankToFutureByBankCallback != __nullptr)
        OnRtnFromBankToFutureByBankCallback(pRspTransfer);
}

void TraderSpi::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer)
{
    if (OnRtnFromFutureToBankByBankCallback != __nullptr)
        OnRtnFromFutureToBankByBankCallback(pRspTransfer);
}

void TraderSpi::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromBankToFutureByBankCallback != __nullptr)
        OnRtnRepealFromBankToFutureByBankCallback(pRspRepeal);
}

void TraderSpi::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromFutureToBankByBankCallback != __nullptr)
        OnRtnRepealFromFutureToBankByBankCallback(pRspRepeal);
}

void TraderSpi::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if (OnRtnFromBankToFutureByFutureCallback != __nullptr)
        OnRtnFromBankToFutureByFutureCallback(pRspTransfer);
}

void TraderSpi::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if (OnRtnFromFutureToBankByFutureCallback != __nullptr)
        OnRtnFromFutureToBankByFutureCallback(pRspTransfer);
}

void TraderSpi::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromBankToFutureByFutureManualCallback != __nullptr)
        OnRtnRepealFromBankToFutureByFutureManualCallback(pRspRepeal);
}

void TraderSpi::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromFutureToBankByFutureManualCallback != __nullptr)
        OnRtnRepealFromFutureToBankByFutureManualCallback(pRspRepeal);
}

void TraderSpi::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount)
{
    if (OnRtnQueryBankBalanceByFutureCallback != __nullptr)
        OnRtnQueryBankBalanceByFutureCallback(pNotifyQueryAccount);
}

void TraderSpi::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnBankToFutureByFutureCallback != __nullptr)
        OnErrRtnBankToFutureByFutureCallback(pReqTransfer, pRspInfo);
}

void TraderSpi::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnFutureToBankByFutureCallback != __nullptr)
        OnErrRtnFutureToBankByFutureCallback(pReqTransfer, pRspInfo);
}

void TraderSpi::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnRepealBankToFutureByFutureManualCallback != __nullptr)
        OnErrRtnRepealBankToFutureByFutureManualCallback(pReqRepeal, pRspInfo);
}

void TraderSpi::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnRepealFutureToBankByFutureManualCallback != __nullptr)
        OnErrRtnRepealFutureToBankByFutureManualCallback(pReqRepeal, pRspInfo);
}

void TraderSpi::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo)
{
    if (OnErrRtnQueryBankBalanceByFutureCallback != __nullptr)
        OnErrRtnQueryBankBalanceByFutureCallback(pReqQueryAccount, pRspInfo);
}

void TraderSpi::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromBankToFutureByFutureCallback != __nullptr)
        OnRtnRepealFromBankToFutureByFutureCallback(pRspRepeal);
}

void TraderSpi::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal)
{
    if (OnRtnRepealFromFutureToBankByFutureCallback != __nullptr)
        OnRtnRepealFromFutureToBankByFutureCallback(pRspRepeal);
}

void TraderSpi::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspFromBankToFutureByFutureCallback != __nullptr)
        OnRspFromBankToFutureByFutureCallback(pReqTransfer, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspFromFutureToBankByFutureCallback != __nullptr)
        OnRspFromFutureToBankByFutureCallback(pReqTransfer, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if (OnRspQueryBankAccountMoneyByFutureCallback != __nullptr)
        OnRspQueryBankAccountMoneyByFutureCallback(pReqQueryAccount, pRspInfo, nRequestID, bIsLast);
}

void TraderSpi::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount)
{
    if (OnRtnOpenAccountByBankCallback != __nullptr)
        OnRtnOpenAccountByBankCallback(pOpenAccount);
}

void TraderSpi::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount)
{
    if (OnRtnCancelAccountByBankCallback != __nullptr)
        OnRtnCancelAccountByBankCallback(pCancelAccount);
}

void TraderSpi::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount)
{
    if (OnRtnChangeAccountByBankCallback != __nullptr)
        OnRtnChangeAccountByBankCallback(pChangeAccount);
}

