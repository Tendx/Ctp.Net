﻿#pragma once
#include "ThostFtdcUserApiStruct.h"

namespace _typedefs
{
    typedef void(__stdcall* OnErrRtnBankToFutureByFuture)(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnBatchOrderAction)(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnCombActionInsert)(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnExecOrderAction)(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnExecOrderInsert)(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnForQuoteInsert)(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnFutureToBankByFuture)(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnOptionSelfCloseAction)(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnOptionSelfCloseInsert)(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnOrderAction)(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnOrderInsert)(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnQueryBankBalanceByFuture)(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnQuoteAction)(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnQuoteInsert)(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnRepealBankToFutureByFutureManual)(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnErrRtnRepealFutureToBankByFutureManual)(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
    typedef void(__stdcall* OnFrontConnected)();
    typedef void(__stdcall* OnFrontDisconnected)(int nReason);
    typedef void(__stdcall* OnHeartBeatWarning)(int nTimeLapse);
    typedef void(__stdcall* OnRspAuthenticate)(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspBatchOrderAction)(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspCombActionInsert)(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspError)(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspExecOrderAction)(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspExecOrderInsert)(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspForQuoteInsert)(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspFromBankToFutureByFuture)(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspFromFutureToBankByFuture)(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspGenUserCaptcha)(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspGenUserText)(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspOptionSelfCloseAction)(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspOptionSelfCloseInsert)(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspOrderAction)(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspOrderInsert)(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspParkedOrderAction)(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspParkedOrderInsert)(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryAccountregister)(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryBrokerTradingAlgos)(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryBrokerTradingParams)(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryCFMMCTradingAccountKey)(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryCombAction)(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryCombInstrumentGuard)(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryContractBank)(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryDepthMarketData)(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryEWarrantOffset)(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryExchange)(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryExchangeMarginRate)(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryExchangeMarginRateAdjust)(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryExchangeRate)(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryExecOrder)(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryForQuote)(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInstrument)(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInstrumentCommissionRate)(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInstrumentMarginRate)(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInstrumentOrderCommRate)(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestor)(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestorPosition)(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestorPositionCombineDetail)(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestorPositionDetail)(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestorProductGroupMargin)(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryInvestUnit)(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryMMInstrumentCommissionRate)(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryMMOptionInstrCommRate)(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryMulticastInstrument)(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryNotice)(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryOptionInstrCommRate)(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryOptionInstrTradeCost)(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryOptionSelfClose)(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryOrder)(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryParkedOrder)(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryParkedOrderAction)(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryProduct)(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryProductExchRate)(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryProductGroup)(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryQuote)(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySecAgentACIDMap)(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySecAgentCheckMode)(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySecAgentTradeInfo)(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySecAgentTradingAccount)(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySettlementInfo)(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQrySettlementInfoConfirm)(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTrade)(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTradingAccount)(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTradingCode)(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTradingNotice)(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTransferBank)(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQryTransferSerial)(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQueryBankAccountMoneyByFuture)(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQueryCFMMCTradingAccountToken)(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQueryMaxOrderVolume)(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQuoteAction)(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspQuoteInsert)(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspRemoveParkedOrder)(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspRemoveParkedOrderAction)(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspSettlementInfoConfirm)(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspSubForQuoteRsp)(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspSubMarketData)(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspTradingAccountPasswordUpdate)(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUnSubForQuoteRsp)(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUnSubMarketData)(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUserAuthMethod)(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUserLogin)(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUserLogout)(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRspUserPasswordUpdate)(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
    typedef void(__stdcall* OnRtnBulletin)(CThostFtdcBulletinField* pBulletin);
    typedef void(__stdcall* OnRtnCancelAccountByBank)(CThostFtdcCancelAccountField* pCancelAccount);
    typedef void(__stdcall* OnRtnCFMMCTradingAccountToken)(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken);
    typedef void(__stdcall* OnRtnChangeAccountByBank)(CThostFtdcChangeAccountField* pChangeAccount);
    typedef void(__stdcall* OnRtnCombAction)(CThostFtdcCombActionField* pCombAction);
    typedef void(__stdcall* OnRtnDepthMarketData)(CThostFtdcDepthMarketDataField* pDepthMarketData);
    typedef void(__stdcall* OnRtnErrorConditionalOrder)(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder);
    typedef void(__stdcall* OnRtnExecOrder)(CThostFtdcExecOrderField* pExecOrder);
    typedef void(__stdcall* OnRtnForQuoteRsp)(CThostFtdcForQuoteRspField* pForQuoteRsp);
    typedef void(__stdcall* OnRtnFromBankToFutureByBank)(CThostFtdcRspTransferField* pRspTransfer);
    typedef void(__stdcall* OnRtnFromBankToFutureByFuture)(CThostFtdcRspTransferField* pRspTransfer);
    typedef void(__stdcall* OnRtnFromFutureToBankByBank)(CThostFtdcRspTransferField* pRspTransfer);
    typedef void(__stdcall* OnRtnFromFutureToBankByFuture)(CThostFtdcRspTransferField* pRspTransfer);
    typedef void(__stdcall* OnRtnInstrumentStatus)(CThostFtdcInstrumentStatusField* pInstrumentStatus);
    typedef void(__stdcall* OnRtnOpenAccountByBank)(CThostFtdcOpenAccountField* pOpenAccount);
    typedef void(__stdcall* OnRtnOptionSelfClose)(CThostFtdcOptionSelfCloseField* pOptionSelfClose);
    typedef void(__stdcall* OnRtnOrder)(CThostFtdcOrderField* pOrder);
    typedef void(__stdcall* OnRtnQueryBankBalanceByFuture)(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount);
    typedef void(__stdcall* OnRtnQuote)(CThostFtdcQuoteField* pQuote);
    typedef void(__stdcall* OnRtnRepealFromBankToFutureByBank)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnRepealFromBankToFutureByFuture)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnRepealFromBankToFutureByFutureManual)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnRepealFromFutureToBankByBank)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnRepealFromFutureToBankByFuture)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnRepealFromFutureToBankByFutureManual)(CThostFtdcRspRepealField* pRspRepeal);
    typedef void(__stdcall* OnRtnTrade)(CThostFtdcTradeField* pTrade);
    typedef void(__stdcall* OnRtnTradingNotice)(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo);
}