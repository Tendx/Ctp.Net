#include "TraderApi.g.h"
#include "_delegates.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace Ctp
{
    namespace Net
    {
#pragma region
        void TraderApi::Init()
        {
            _delegates::OnFrontConnected^ dOnFrontConnected = gcnew _delegates::OnFrontConnected(this, &TraderApi::OnFrontConnectedCallback);
            GCHandle hOnFrontConnected = GCHandle::Alloc(dOnFrontConnected);
            _gchandles->Add(hOnFrontConnected);
            _spi->OnFrontConnectedCallback = static_cast<_typedefs::OnFrontConnected>(Marshal::GetFunctionPointerForDelegate(dOnFrontConnected).ToPointer());

            _delegates::OnFrontDisconnected^ dOnFrontDisconnected = gcnew _delegates::OnFrontDisconnected(this, &TraderApi::OnFrontDisconnectedCallback);
            GCHandle hOnFrontDisconnected = GCHandle::Alloc(dOnFrontDisconnected);
            _gchandles->Add(hOnFrontDisconnected);
            _spi->OnFrontDisconnectedCallback = static_cast<_typedefs::OnFrontDisconnected>(Marshal::GetFunctionPointerForDelegate(dOnFrontDisconnected).ToPointer());

            _delegates::OnHeartBeatWarning^ dOnHeartBeatWarning = gcnew _delegates::OnHeartBeatWarning(this, &TraderApi::OnHeartBeatWarningCallback);
            GCHandle hOnHeartBeatWarning = GCHandle::Alloc(dOnHeartBeatWarning);
            _gchandles->Add(hOnHeartBeatWarning);
            _spi->OnHeartBeatWarningCallback = static_cast<_typedefs::OnHeartBeatWarning>(Marshal::GetFunctionPointerForDelegate(dOnHeartBeatWarning).ToPointer());

            _delegates::OnRspAuthenticate^ dOnRspAuthenticate = gcnew _delegates::OnRspAuthenticate(this, &TraderApi::OnRspAuthenticateCallback);
            GCHandle hOnRspAuthenticate = GCHandle::Alloc(dOnRspAuthenticate);
            _gchandles->Add(hOnRspAuthenticate);
            _spi->OnRspAuthenticateCallback = static_cast<_typedefs::OnRspAuthenticate>(Marshal::GetFunctionPointerForDelegate(dOnRspAuthenticate).ToPointer());

            _delegates::OnRspUserLogin^ dOnRspUserLogin = gcnew _delegates::OnRspUserLogin(this, &TraderApi::OnRspUserLoginCallback);
            GCHandle hOnRspUserLogin = GCHandle::Alloc(dOnRspUserLogin);
            _gchandles->Add(hOnRspUserLogin);
            _spi->OnRspUserLoginCallback = static_cast<_typedefs::OnRspUserLogin>(Marshal::GetFunctionPointerForDelegate(dOnRspUserLogin).ToPointer());

            _delegates::OnRspUserLogout^ dOnRspUserLogout = gcnew _delegates::OnRspUserLogout(this, &TraderApi::OnRspUserLogoutCallback);
            GCHandle hOnRspUserLogout = GCHandle::Alloc(dOnRspUserLogout);
            _gchandles->Add(hOnRspUserLogout);
            _spi->OnRspUserLogoutCallback = static_cast<_typedefs::OnRspUserLogout>(Marshal::GetFunctionPointerForDelegate(dOnRspUserLogout).ToPointer());

            _delegates::OnRspUserPasswordUpdate^ dOnRspUserPasswordUpdate = gcnew _delegates::OnRspUserPasswordUpdate(this, &TraderApi::OnRspUserPasswordUpdateCallback);
            GCHandle hOnRspUserPasswordUpdate = GCHandle::Alloc(dOnRspUserPasswordUpdate);
            _gchandles->Add(hOnRspUserPasswordUpdate);
            _spi->OnRspUserPasswordUpdateCallback = static_cast<_typedefs::OnRspUserPasswordUpdate>(Marshal::GetFunctionPointerForDelegate(dOnRspUserPasswordUpdate).ToPointer());

            _delegates::OnRspTradingAccountPasswordUpdate^ dOnRspTradingAccountPasswordUpdate = gcnew _delegates::OnRspTradingAccountPasswordUpdate(this, &TraderApi::OnRspTradingAccountPasswordUpdateCallback);
            GCHandle hOnRspTradingAccountPasswordUpdate = GCHandle::Alloc(dOnRspTradingAccountPasswordUpdate);
            _gchandles->Add(hOnRspTradingAccountPasswordUpdate);
            _spi->OnRspTradingAccountPasswordUpdateCallback = static_cast<_typedefs::OnRspTradingAccountPasswordUpdate>(Marshal::GetFunctionPointerForDelegate(dOnRspTradingAccountPasswordUpdate).ToPointer());

            _delegates::OnRspUserAuthMethod^ dOnRspUserAuthMethod = gcnew _delegates::OnRspUserAuthMethod(this, &TraderApi::OnRspUserAuthMethodCallback);
            GCHandle hOnRspUserAuthMethod = GCHandle::Alloc(dOnRspUserAuthMethod);
            _gchandles->Add(hOnRspUserAuthMethod);
            _spi->OnRspUserAuthMethodCallback = static_cast<_typedefs::OnRspUserAuthMethod>(Marshal::GetFunctionPointerForDelegate(dOnRspUserAuthMethod).ToPointer());

            _delegates::OnRspGenUserCaptcha^ dOnRspGenUserCaptcha = gcnew _delegates::OnRspGenUserCaptcha(this, &TraderApi::OnRspGenUserCaptchaCallback);
            GCHandle hOnRspGenUserCaptcha = GCHandle::Alloc(dOnRspGenUserCaptcha);
            _gchandles->Add(hOnRspGenUserCaptcha);
            _spi->OnRspGenUserCaptchaCallback = static_cast<_typedefs::OnRspGenUserCaptcha>(Marshal::GetFunctionPointerForDelegate(dOnRspGenUserCaptcha).ToPointer());

            _delegates::OnRspGenUserText^ dOnRspGenUserText = gcnew _delegates::OnRspGenUserText(this, &TraderApi::OnRspGenUserTextCallback);
            GCHandle hOnRspGenUserText = GCHandle::Alloc(dOnRspGenUserText);
            _gchandles->Add(hOnRspGenUserText);
            _spi->OnRspGenUserTextCallback = static_cast<_typedefs::OnRspGenUserText>(Marshal::GetFunctionPointerForDelegate(dOnRspGenUserText).ToPointer());

            _delegates::OnRspOrderInsert^ dOnRspOrderInsert = gcnew _delegates::OnRspOrderInsert(this, &TraderApi::OnRspOrderInsertCallback);
            GCHandle hOnRspOrderInsert = GCHandle::Alloc(dOnRspOrderInsert);
            _gchandles->Add(hOnRspOrderInsert);
            _spi->OnRspOrderInsertCallback = static_cast<_typedefs::OnRspOrderInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspOrderInsert).ToPointer());

            _delegates::OnRspParkedOrderInsert^ dOnRspParkedOrderInsert = gcnew _delegates::OnRspParkedOrderInsert(this, &TraderApi::OnRspParkedOrderInsertCallback);
            GCHandle hOnRspParkedOrderInsert = GCHandle::Alloc(dOnRspParkedOrderInsert);
            _gchandles->Add(hOnRspParkedOrderInsert);
            _spi->OnRspParkedOrderInsertCallback = static_cast<_typedefs::OnRspParkedOrderInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspParkedOrderInsert).ToPointer());

            _delegates::OnRspParkedOrderAction^ dOnRspParkedOrderAction = gcnew _delegates::OnRspParkedOrderAction(this, &TraderApi::OnRspParkedOrderActionCallback);
            GCHandle hOnRspParkedOrderAction = GCHandle::Alloc(dOnRspParkedOrderAction);
            _gchandles->Add(hOnRspParkedOrderAction);
            _spi->OnRspParkedOrderActionCallback = static_cast<_typedefs::OnRspParkedOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspParkedOrderAction).ToPointer());

            _delegates::OnRspOrderAction^ dOnRspOrderAction = gcnew _delegates::OnRspOrderAction(this, &TraderApi::OnRspOrderActionCallback);
            GCHandle hOnRspOrderAction = GCHandle::Alloc(dOnRspOrderAction);
            _gchandles->Add(hOnRspOrderAction);
            _spi->OnRspOrderActionCallback = static_cast<_typedefs::OnRspOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspOrderAction).ToPointer());

            _delegates::OnRspQueryMaxOrderVolume^ dOnRspQueryMaxOrderVolume = gcnew _delegates::OnRspQueryMaxOrderVolume(this, &TraderApi::OnRspQueryMaxOrderVolumeCallback);
            GCHandle hOnRspQueryMaxOrderVolume = GCHandle::Alloc(dOnRspQueryMaxOrderVolume);
            _gchandles->Add(hOnRspQueryMaxOrderVolume);
            _spi->OnRspQueryMaxOrderVolumeCallback = static_cast<_typedefs::OnRspQueryMaxOrderVolume>(Marshal::GetFunctionPointerForDelegate(dOnRspQueryMaxOrderVolume).ToPointer());

            _delegates::OnRspSettlementInfoConfirm^ dOnRspSettlementInfoConfirm = gcnew _delegates::OnRspSettlementInfoConfirm(this, &TraderApi::OnRspSettlementInfoConfirmCallback);
            GCHandle hOnRspSettlementInfoConfirm = GCHandle::Alloc(dOnRspSettlementInfoConfirm);
            _gchandles->Add(hOnRspSettlementInfoConfirm);
            _spi->OnRspSettlementInfoConfirmCallback = static_cast<_typedefs::OnRspSettlementInfoConfirm>(Marshal::GetFunctionPointerForDelegate(dOnRspSettlementInfoConfirm).ToPointer());

            _delegates::OnRspRemoveParkedOrder^ dOnRspRemoveParkedOrder = gcnew _delegates::OnRspRemoveParkedOrder(this, &TraderApi::OnRspRemoveParkedOrderCallback);
            GCHandle hOnRspRemoveParkedOrder = GCHandle::Alloc(dOnRspRemoveParkedOrder);
            _gchandles->Add(hOnRspRemoveParkedOrder);
            _spi->OnRspRemoveParkedOrderCallback = static_cast<_typedefs::OnRspRemoveParkedOrder>(Marshal::GetFunctionPointerForDelegate(dOnRspRemoveParkedOrder).ToPointer());

            _delegates::OnRspRemoveParkedOrderAction^ dOnRspRemoveParkedOrderAction = gcnew _delegates::OnRspRemoveParkedOrderAction(this, &TraderApi::OnRspRemoveParkedOrderActionCallback);
            GCHandle hOnRspRemoveParkedOrderAction = GCHandle::Alloc(dOnRspRemoveParkedOrderAction);
            _gchandles->Add(hOnRspRemoveParkedOrderAction);
            _spi->OnRspRemoveParkedOrderActionCallback = static_cast<_typedefs::OnRspRemoveParkedOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspRemoveParkedOrderAction).ToPointer());

            _delegates::OnRspExecOrderInsert^ dOnRspExecOrderInsert = gcnew _delegates::OnRspExecOrderInsert(this, &TraderApi::OnRspExecOrderInsertCallback);
            GCHandle hOnRspExecOrderInsert = GCHandle::Alloc(dOnRspExecOrderInsert);
            _gchandles->Add(hOnRspExecOrderInsert);
            _spi->OnRspExecOrderInsertCallback = static_cast<_typedefs::OnRspExecOrderInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspExecOrderInsert).ToPointer());

            _delegates::OnRspExecOrderAction^ dOnRspExecOrderAction = gcnew _delegates::OnRspExecOrderAction(this, &TraderApi::OnRspExecOrderActionCallback);
            GCHandle hOnRspExecOrderAction = GCHandle::Alloc(dOnRspExecOrderAction);
            _gchandles->Add(hOnRspExecOrderAction);
            _spi->OnRspExecOrderActionCallback = static_cast<_typedefs::OnRspExecOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspExecOrderAction).ToPointer());

            _delegates::OnRspForQuoteInsert^ dOnRspForQuoteInsert = gcnew _delegates::OnRspForQuoteInsert(this, &TraderApi::OnRspForQuoteInsertCallback);
            GCHandle hOnRspForQuoteInsert = GCHandle::Alloc(dOnRspForQuoteInsert);
            _gchandles->Add(hOnRspForQuoteInsert);
            _spi->OnRspForQuoteInsertCallback = static_cast<_typedefs::OnRspForQuoteInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspForQuoteInsert).ToPointer());

            _delegates::OnRspQuoteInsert^ dOnRspQuoteInsert = gcnew _delegates::OnRspQuoteInsert(this, &TraderApi::OnRspQuoteInsertCallback);
            GCHandle hOnRspQuoteInsert = GCHandle::Alloc(dOnRspQuoteInsert);
            _gchandles->Add(hOnRspQuoteInsert);
            _spi->OnRspQuoteInsertCallback = static_cast<_typedefs::OnRspQuoteInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspQuoteInsert).ToPointer());

            _delegates::OnRspQuoteAction^ dOnRspQuoteAction = gcnew _delegates::OnRspQuoteAction(this, &TraderApi::OnRspQuoteActionCallback);
            GCHandle hOnRspQuoteAction = GCHandle::Alloc(dOnRspQuoteAction);
            _gchandles->Add(hOnRspQuoteAction);
            _spi->OnRspQuoteActionCallback = static_cast<_typedefs::OnRspQuoteAction>(Marshal::GetFunctionPointerForDelegate(dOnRspQuoteAction).ToPointer());

            _delegates::OnRspBatchOrderAction^ dOnRspBatchOrderAction = gcnew _delegates::OnRspBatchOrderAction(this, &TraderApi::OnRspBatchOrderActionCallback);
            GCHandle hOnRspBatchOrderAction = GCHandle::Alloc(dOnRspBatchOrderAction);
            _gchandles->Add(hOnRspBatchOrderAction);
            _spi->OnRspBatchOrderActionCallback = static_cast<_typedefs::OnRspBatchOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspBatchOrderAction).ToPointer());

            _delegates::OnRspOptionSelfCloseInsert^ dOnRspOptionSelfCloseInsert = gcnew _delegates::OnRspOptionSelfCloseInsert(this, &TraderApi::OnRspOptionSelfCloseInsertCallback);
            GCHandle hOnRspOptionSelfCloseInsert = GCHandle::Alloc(dOnRspOptionSelfCloseInsert);
            _gchandles->Add(hOnRspOptionSelfCloseInsert);
            _spi->OnRspOptionSelfCloseInsertCallback = static_cast<_typedefs::OnRspOptionSelfCloseInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspOptionSelfCloseInsert).ToPointer());

            _delegates::OnRspOptionSelfCloseAction^ dOnRspOptionSelfCloseAction = gcnew _delegates::OnRspOptionSelfCloseAction(this, &TraderApi::OnRspOptionSelfCloseActionCallback);
            GCHandle hOnRspOptionSelfCloseAction = GCHandle::Alloc(dOnRspOptionSelfCloseAction);
            _gchandles->Add(hOnRspOptionSelfCloseAction);
            _spi->OnRspOptionSelfCloseActionCallback = static_cast<_typedefs::OnRspOptionSelfCloseAction>(Marshal::GetFunctionPointerForDelegate(dOnRspOptionSelfCloseAction).ToPointer());

            _delegates::OnRspCombActionInsert^ dOnRspCombActionInsert = gcnew _delegates::OnRspCombActionInsert(this, &TraderApi::OnRspCombActionInsertCallback);
            GCHandle hOnRspCombActionInsert = GCHandle::Alloc(dOnRspCombActionInsert);
            _gchandles->Add(hOnRspCombActionInsert);
            _spi->OnRspCombActionInsertCallback = static_cast<_typedefs::OnRspCombActionInsert>(Marshal::GetFunctionPointerForDelegate(dOnRspCombActionInsert).ToPointer());

            _delegates::OnRspQryOrder^ dOnRspQryOrder = gcnew _delegates::OnRspQryOrder(this, &TraderApi::OnRspQryOrderCallback);
            GCHandle hOnRspQryOrder = GCHandle::Alloc(dOnRspQryOrder);
            _gchandles->Add(hOnRspQryOrder);
            _spi->OnRspQryOrderCallback = static_cast<_typedefs::OnRspQryOrder>(Marshal::GetFunctionPointerForDelegate(dOnRspQryOrder).ToPointer());

            _delegates::OnRspQryTrade^ dOnRspQryTrade = gcnew _delegates::OnRspQryTrade(this, &TraderApi::OnRspQryTradeCallback);
            GCHandle hOnRspQryTrade = GCHandle::Alloc(dOnRspQryTrade);
            _gchandles->Add(hOnRspQryTrade);
            _spi->OnRspQryTradeCallback = static_cast<_typedefs::OnRspQryTrade>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTrade).ToPointer());

            _delegates::OnRspQryInvestorPosition^ dOnRspQryInvestorPosition = gcnew _delegates::OnRspQryInvestorPosition(this, &TraderApi::OnRspQryInvestorPositionCallback);
            GCHandle hOnRspQryInvestorPosition = GCHandle::Alloc(dOnRspQryInvestorPosition);
            _gchandles->Add(hOnRspQryInvestorPosition);
            _spi->OnRspQryInvestorPositionCallback = static_cast<_typedefs::OnRspQryInvestorPosition>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestorPosition).ToPointer());

            _delegates::OnRspQryTradingAccount^ dOnRspQryTradingAccount = gcnew _delegates::OnRspQryTradingAccount(this, &TraderApi::OnRspQryTradingAccountCallback);
            GCHandle hOnRspQryTradingAccount = GCHandle::Alloc(dOnRspQryTradingAccount);
            _gchandles->Add(hOnRspQryTradingAccount);
            _spi->OnRspQryTradingAccountCallback = static_cast<_typedefs::OnRspQryTradingAccount>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTradingAccount).ToPointer());

            _delegates::OnRspQryInvestor^ dOnRspQryInvestor = gcnew _delegates::OnRspQryInvestor(this, &TraderApi::OnRspQryInvestorCallback);
            GCHandle hOnRspQryInvestor = GCHandle::Alloc(dOnRspQryInvestor);
            _gchandles->Add(hOnRspQryInvestor);
            _spi->OnRspQryInvestorCallback = static_cast<_typedefs::OnRspQryInvestor>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestor).ToPointer());

            _delegates::OnRspQryTradingCode^ dOnRspQryTradingCode = gcnew _delegates::OnRspQryTradingCode(this, &TraderApi::OnRspQryTradingCodeCallback);
            GCHandle hOnRspQryTradingCode = GCHandle::Alloc(dOnRspQryTradingCode);
            _gchandles->Add(hOnRspQryTradingCode);
            _spi->OnRspQryTradingCodeCallback = static_cast<_typedefs::OnRspQryTradingCode>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTradingCode).ToPointer());

            _delegates::OnRspQryInstrumentMarginRate^ dOnRspQryInstrumentMarginRate = gcnew _delegates::OnRspQryInstrumentMarginRate(this, &TraderApi::OnRspQryInstrumentMarginRateCallback);
            GCHandle hOnRspQryInstrumentMarginRate = GCHandle::Alloc(dOnRspQryInstrumentMarginRate);
            _gchandles->Add(hOnRspQryInstrumentMarginRate);
            _spi->OnRspQryInstrumentMarginRateCallback = static_cast<_typedefs::OnRspQryInstrumentMarginRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInstrumentMarginRate).ToPointer());

            _delegates::OnRspQryInstrumentCommissionRate^ dOnRspQryInstrumentCommissionRate = gcnew _delegates::OnRspQryInstrumentCommissionRate(this, &TraderApi::OnRspQryInstrumentCommissionRateCallback);
            GCHandle hOnRspQryInstrumentCommissionRate = GCHandle::Alloc(dOnRspQryInstrumentCommissionRate);
            _gchandles->Add(hOnRspQryInstrumentCommissionRate);
            _spi->OnRspQryInstrumentCommissionRateCallback = static_cast<_typedefs::OnRspQryInstrumentCommissionRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInstrumentCommissionRate).ToPointer());

            _delegates::OnRspQryExchange^ dOnRspQryExchange = gcnew _delegates::OnRspQryExchange(this, &TraderApi::OnRspQryExchangeCallback);
            GCHandle hOnRspQryExchange = GCHandle::Alloc(dOnRspQryExchange);
            _gchandles->Add(hOnRspQryExchange);
            _spi->OnRspQryExchangeCallback = static_cast<_typedefs::OnRspQryExchange>(Marshal::GetFunctionPointerForDelegate(dOnRspQryExchange).ToPointer());

            _delegates::OnRspQryProduct^ dOnRspQryProduct = gcnew _delegates::OnRspQryProduct(this, &TraderApi::OnRspQryProductCallback);
            GCHandle hOnRspQryProduct = GCHandle::Alloc(dOnRspQryProduct);
            _gchandles->Add(hOnRspQryProduct);
            _spi->OnRspQryProductCallback = static_cast<_typedefs::OnRspQryProduct>(Marshal::GetFunctionPointerForDelegate(dOnRspQryProduct).ToPointer());

            _delegates::OnRspQryInstrument^ dOnRspQryInstrument = gcnew _delegates::OnRspQryInstrument(this, &TraderApi::OnRspQryInstrumentCallback);
            GCHandle hOnRspQryInstrument = GCHandle::Alloc(dOnRspQryInstrument);
            _gchandles->Add(hOnRspQryInstrument);
            _spi->OnRspQryInstrumentCallback = static_cast<_typedefs::OnRspQryInstrument>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInstrument).ToPointer());

            _delegates::OnRspQryDepthMarketData^ dOnRspQryDepthMarketData = gcnew _delegates::OnRspQryDepthMarketData(this, &TraderApi::OnRspQryDepthMarketDataCallback);
            GCHandle hOnRspQryDepthMarketData = GCHandle::Alloc(dOnRspQryDepthMarketData);
            _gchandles->Add(hOnRspQryDepthMarketData);
            _spi->OnRspQryDepthMarketDataCallback = static_cast<_typedefs::OnRspQryDepthMarketData>(Marshal::GetFunctionPointerForDelegate(dOnRspQryDepthMarketData).ToPointer());

            _delegates::OnRspQrySettlementInfo^ dOnRspQrySettlementInfo = gcnew _delegates::OnRspQrySettlementInfo(this, &TraderApi::OnRspQrySettlementInfoCallback);
            GCHandle hOnRspQrySettlementInfo = GCHandle::Alloc(dOnRspQrySettlementInfo);
            _gchandles->Add(hOnRspQrySettlementInfo);
            _spi->OnRspQrySettlementInfoCallback = static_cast<_typedefs::OnRspQrySettlementInfo>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySettlementInfo).ToPointer());

            _delegates::OnRspQryTransferBank^ dOnRspQryTransferBank = gcnew _delegates::OnRspQryTransferBank(this, &TraderApi::OnRspQryTransferBankCallback);
            GCHandle hOnRspQryTransferBank = GCHandle::Alloc(dOnRspQryTransferBank);
            _gchandles->Add(hOnRspQryTransferBank);
            _spi->OnRspQryTransferBankCallback = static_cast<_typedefs::OnRspQryTransferBank>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTransferBank).ToPointer());

            _delegates::OnRspQryInvestorPositionDetail^ dOnRspQryInvestorPositionDetail = gcnew _delegates::OnRspQryInvestorPositionDetail(this, &TraderApi::OnRspQryInvestorPositionDetailCallback);
            GCHandle hOnRspQryInvestorPositionDetail = GCHandle::Alloc(dOnRspQryInvestorPositionDetail);
            _gchandles->Add(hOnRspQryInvestorPositionDetail);
            _spi->OnRspQryInvestorPositionDetailCallback = static_cast<_typedefs::OnRspQryInvestorPositionDetail>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestorPositionDetail).ToPointer());

            _delegates::OnRspQryNotice^ dOnRspQryNotice = gcnew _delegates::OnRspQryNotice(this, &TraderApi::OnRspQryNoticeCallback);
            GCHandle hOnRspQryNotice = GCHandle::Alloc(dOnRspQryNotice);
            _gchandles->Add(hOnRspQryNotice);
            _spi->OnRspQryNoticeCallback = static_cast<_typedefs::OnRspQryNotice>(Marshal::GetFunctionPointerForDelegate(dOnRspQryNotice).ToPointer());

            _delegates::OnRspQrySettlementInfoConfirm^ dOnRspQrySettlementInfoConfirm = gcnew _delegates::OnRspQrySettlementInfoConfirm(this, &TraderApi::OnRspQrySettlementInfoConfirmCallback);
            GCHandle hOnRspQrySettlementInfoConfirm = GCHandle::Alloc(dOnRspQrySettlementInfoConfirm);
            _gchandles->Add(hOnRspQrySettlementInfoConfirm);
            _spi->OnRspQrySettlementInfoConfirmCallback = static_cast<_typedefs::OnRspQrySettlementInfoConfirm>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySettlementInfoConfirm).ToPointer());

            _delegates::OnRspQryInvestorPositionCombineDetail^ dOnRspQryInvestorPositionCombineDetail = gcnew _delegates::OnRspQryInvestorPositionCombineDetail(this, &TraderApi::OnRspQryInvestorPositionCombineDetailCallback);
            GCHandle hOnRspQryInvestorPositionCombineDetail = GCHandle::Alloc(dOnRspQryInvestorPositionCombineDetail);
            _gchandles->Add(hOnRspQryInvestorPositionCombineDetail);
            _spi->OnRspQryInvestorPositionCombineDetailCallback = static_cast<_typedefs::OnRspQryInvestorPositionCombineDetail>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestorPositionCombineDetail).ToPointer());

            _delegates::OnRspQryCFMMCTradingAccountKey^ dOnRspQryCFMMCTradingAccountKey = gcnew _delegates::OnRspQryCFMMCTradingAccountKey(this, &TraderApi::OnRspQryCFMMCTradingAccountKeyCallback);
            GCHandle hOnRspQryCFMMCTradingAccountKey = GCHandle::Alloc(dOnRspQryCFMMCTradingAccountKey);
            _gchandles->Add(hOnRspQryCFMMCTradingAccountKey);
            _spi->OnRspQryCFMMCTradingAccountKeyCallback = static_cast<_typedefs::OnRspQryCFMMCTradingAccountKey>(Marshal::GetFunctionPointerForDelegate(dOnRspQryCFMMCTradingAccountKey).ToPointer());

            _delegates::OnRspQryEWarrantOffset^ dOnRspQryEWarrantOffset = gcnew _delegates::OnRspQryEWarrantOffset(this, &TraderApi::OnRspQryEWarrantOffsetCallback);
            GCHandle hOnRspQryEWarrantOffset = GCHandle::Alloc(dOnRspQryEWarrantOffset);
            _gchandles->Add(hOnRspQryEWarrantOffset);
            _spi->OnRspQryEWarrantOffsetCallback = static_cast<_typedefs::OnRspQryEWarrantOffset>(Marshal::GetFunctionPointerForDelegate(dOnRspQryEWarrantOffset).ToPointer());

            _delegates::OnRspQryInvestorProductGroupMargin^ dOnRspQryInvestorProductGroupMargin = gcnew _delegates::OnRspQryInvestorProductGroupMargin(this, &TraderApi::OnRspQryInvestorProductGroupMarginCallback);
            GCHandle hOnRspQryInvestorProductGroupMargin = GCHandle::Alloc(dOnRspQryInvestorProductGroupMargin);
            _gchandles->Add(hOnRspQryInvestorProductGroupMargin);
            _spi->OnRspQryInvestorProductGroupMarginCallback = static_cast<_typedefs::OnRspQryInvestorProductGroupMargin>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestorProductGroupMargin).ToPointer());

            _delegates::OnRspQryExchangeMarginRate^ dOnRspQryExchangeMarginRate = gcnew _delegates::OnRspQryExchangeMarginRate(this, &TraderApi::OnRspQryExchangeMarginRateCallback);
            GCHandle hOnRspQryExchangeMarginRate = GCHandle::Alloc(dOnRspQryExchangeMarginRate);
            _gchandles->Add(hOnRspQryExchangeMarginRate);
            _spi->OnRspQryExchangeMarginRateCallback = static_cast<_typedefs::OnRspQryExchangeMarginRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryExchangeMarginRate).ToPointer());

            _delegates::OnRspQryExchangeMarginRateAdjust^ dOnRspQryExchangeMarginRateAdjust = gcnew _delegates::OnRspQryExchangeMarginRateAdjust(this, &TraderApi::OnRspQryExchangeMarginRateAdjustCallback);
            GCHandle hOnRspQryExchangeMarginRateAdjust = GCHandle::Alloc(dOnRspQryExchangeMarginRateAdjust);
            _gchandles->Add(hOnRspQryExchangeMarginRateAdjust);
            _spi->OnRspQryExchangeMarginRateAdjustCallback = static_cast<_typedefs::OnRspQryExchangeMarginRateAdjust>(Marshal::GetFunctionPointerForDelegate(dOnRspQryExchangeMarginRateAdjust).ToPointer());

            _delegates::OnRspQryExchangeRate^ dOnRspQryExchangeRate = gcnew _delegates::OnRspQryExchangeRate(this, &TraderApi::OnRspQryExchangeRateCallback);
            GCHandle hOnRspQryExchangeRate = GCHandle::Alloc(dOnRspQryExchangeRate);
            _gchandles->Add(hOnRspQryExchangeRate);
            _spi->OnRspQryExchangeRateCallback = static_cast<_typedefs::OnRspQryExchangeRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryExchangeRate).ToPointer());

            _delegates::OnRspQrySecAgentACIDMap^ dOnRspQrySecAgentACIDMap = gcnew _delegates::OnRspQrySecAgentACIDMap(this, &TraderApi::OnRspQrySecAgentACIDMapCallback);
            GCHandle hOnRspQrySecAgentACIDMap = GCHandle::Alloc(dOnRspQrySecAgentACIDMap);
            _gchandles->Add(hOnRspQrySecAgentACIDMap);
            _spi->OnRspQrySecAgentACIDMapCallback = static_cast<_typedefs::OnRspQrySecAgentACIDMap>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySecAgentACIDMap).ToPointer());

            _delegates::OnRspQryProductExchRate^ dOnRspQryProductExchRate = gcnew _delegates::OnRspQryProductExchRate(this, &TraderApi::OnRspQryProductExchRateCallback);
            GCHandle hOnRspQryProductExchRate = GCHandle::Alloc(dOnRspQryProductExchRate);
            _gchandles->Add(hOnRspQryProductExchRate);
            _spi->OnRspQryProductExchRateCallback = static_cast<_typedefs::OnRspQryProductExchRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryProductExchRate).ToPointer());

            _delegates::OnRspQryProductGroup^ dOnRspQryProductGroup = gcnew _delegates::OnRspQryProductGroup(this, &TraderApi::OnRspQryProductGroupCallback);
            GCHandle hOnRspQryProductGroup = GCHandle::Alloc(dOnRspQryProductGroup);
            _gchandles->Add(hOnRspQryProductGroup);
            _spi->OnRspQryProductGroupCallback = static_cast<_typedefs::OnRspQryProductGroup>(Marshal::GetFunctionPointerForDelegate(dOnRspQryProductGroup).ToPointer());

            _delegates::OnRspQryMMInstrumentCommissionRate^ dOnRspQryMMInstrumentCommissionRate = gcnew _delegates::OnRspQryMMInstrumentCommissionRate(this, &TraderApi::OnRspQryMMInstrumentCommissionRateCallback);
            GCHandle hOnRspQryMMInstrumentCommissionRate = GCHandle::Alloc(dOnRspQryMMInstrumentCommissionRate);
            _gchandles->Add(hOnRspQryMMInstrumentCommissionRate);
            _spi->OnRspQryMMInstrumentCommissionRateCallback = static_cast<_typedefs::OnRspQryMMInstrumentCommissionRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryMMInstrumentCommissionRate).ToPointer());

            _delegates::OnRspQryMMOptionInstrCommRate^ dOnRspQryMMOptionInstrCommRate = gcnew _delegates::OnRspQryMMOptionInstrCommRate(this, &TraderApi::OnRspQryMMOptionInstrCommRateCallback);
            GCHandle hOnRspQryMMOptionInstrCommRate = GCHandle::Alloc(dOnRspQryMMOptionInstrCommRate);
            _gchandles->Add(hOnRspQryMMOptionInstrCommRate);
            _spi->OnRspQryMMOptionInstrCommRateCallback = static_cast<_typedefs::OnRspQryMMOptionInstrCommRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryMMOptionInstrCommRate).ToPointer());

            _delegates::OnRspQryInstrumentOrderCommRate^ dOnRspQryInstrumentOrderCommRate = gcnew _delegates::OnRspQryInstrumentOrderCommRate(this, &TraderApi::OnRspQryInstrumentOrderCommRateCallback);
            GCHandle hOnRspQryInstrumentOrderCommRate = GCHandle::Alloc(dOnRspQryInstrumentOrderCommRate);
            _gchandles->Add(hOnRspQryInstrumentOrderCommRate);
            _spi->OnRspQryInstrumentOrderCommRateCallback = static_cast<_typedefs::OnRspQryInstrumentOrderCommRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInstrumentOrderCommRate).ToPointer());

            _delegates::OnRspQrySecAgentTradingAccount^ dOnRspQrySecAgentTradingAccount = gcnew _delegates::OnRspQrySecAgentTradingAccount(this, &TraderApi::OnRspQrySecAgentTradingAccountCallback);
            GCHandle hOnRspQrySecAgentTradingAccount = GCHandle::Alloc(dOnRspQrySecAgentTradingAccount);
            _gchandles->Add(hOnRspQrySecAgentTradingAccount);
            _spi->OnRspQrySecAgentTradingAccountCallback = static_cast<_typedefs::OnRspQrySecAgentTradingAccount>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySecAgentTradingAccount).ToPointer());

            _delegates::OnRspQrySecAgentCheckMode^ dOnRspQrySecAgentCheckMode = gcnew _delegates::OnRspQrySecAgentCheckMode(this, &TraderApi::OnRspQrySecAgentCheckModeCallback);
            GCHandle hOnRspQrySecAgentCheckMode = GCHandle::Alloc(dOnRspQrySecAgentCheckMode);
            _gchandles->Add(hOnRspQrySecAgentCheckMode);
            _spi->OnRspQrySecAgentCheckModeCallback = static_cast<_typedefs::OnRspQrySecAgentCheckMode>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySecAgentCheckMode).ToPointer());

            _delegates::OnRspQrySecAgentTradeInfo^ dOnRspQrySecAgentTradeInfo = gcnew _delegates::OnRspQrySecAgentTradeInfo(this, &TraderApi::OnRspQrySecAgentTradeInfoCallback);
            GCHandle hOnRspQrySecAgentTradeInfo = GCHandle::Alloc(dOnRspQrySecAgentTradeInfo);
            _gchandles->Add(hOnRspQrySecAgentTradeInfo);
            _spi->OnRspQrySecAgentTradeInfoCallback = static_cast<_typedefs::OnRspQrySecAgentTradeInfo>(Marshal::GetFunctionPointerForDelegate(dOnRspQrySecAgentTradeInfo).ToPointer());

            _delegates::OnRspQryOptionInstrTradeCost^ dOnRspQryOptionInstrTradeCost = gcnew _delegates::OnRspQryOptionInstrTradeCost(this, &TraderApi::OnRspQryOptionInstrTradeCostCallback);
            GCHandle hOnRspQryOptionInstrTradeCost = GCHandle::Alloc(dOnRspQryOptionInstrTradeCost);
            _gchandles->Add(hOnRspQryOptionInstrTradeCost);
            _spi->OnRspQryOptionInstrTradeCostCallback = static_cast<_typedefs::OnRspQryOptionInstrTradeCost>(Marshal::GetFunctionPointerForDelegate(dOnRspQryOptionInstrTradeCost).ToPointer());

            _delegates::OnRspQryOptionInstrCommRate^ dOnRspQryOptionInstrCommRate = gcnew _delegates::OnRspQryOptionInstrCommRate(this, &TraderApi::OnRspQryOptionInstrCommRateCallback);
            GCHandle hOnRspQryOptionInstrCommRate = GCHandle::Alloc(dOnRspQryOptionInstrCommRate);
            _gchandles->Add(hOnRspQryOptionInstrCommRate);
            _spi->OnRspQryOptionInstrCommRateCallback = static_cast<_typedefs::OnRspQryOptionInstrCommRate>(Marshal::GetFunctionPointerForDelegate(dOnRspQryOptionInstrCommRate).ToPointer());

            _delegates::OnRspQryExecOrder^ dOnRspQryExecOrder = gcnew _delegates::OnRspQryExecOrder(this, &TraderApi::OnRspQryExecOrderCallback);
            GCHandle hOnRspQryExecOrder = GCHandle::Alloc(dOnRspQryExecOrder);
            _gchandles->Add(hOnRspQryExecOrder);
            _spi->OnRspQryExecOrderCallback = static_cast<_typedefs::OnRspQryExecOrder>(Marshal::GetFunctionPointerForDelegate(dOnRspQryExecOrder).ToPointer());

            _delegates::OnRspQryForQuote^ dOnRspQryForQuote = gcnew _delegates::OnRspQryForQuote(this, &TraderApi::OnRspQryForQuoteCallback);
            GCHandle hOnRspQryForQuote = GCHandle::Alloc(dOnRspQryForQuote);
            _gchandles->Add(hOnRspQryForQuote);
            _spi->OnRspQryForQuoteCallback = static_cast<_typedefs::OnRspQryForQuote>(Marshal::GetFunctionPointerForDelegate(dOnRspQryForQuote).ToPointer());

            _delegates::OnRspQryQuote^ dOnRspQryQuote = gcnew _delegates::OnRspQryQuote(this, &TraderApi::OnRspQryQuoteCallback);
            GCHandle hOnRspQryQuote = GCHandle::Alloc(dOnRspQryQuote);
            _gchandles->Add(hOnRspQryQuote);
            _spi->OnRspQryQuoteCallback = static_cast<_typedefs::OnRspQryQuote>(Marshal::GetFunctionPointerForDelegate(dOnRspQryQuote).ToPointer());

            _delegates::OnRspQryOptionSelfClose^ dOnRspQryOptionSelfClose = gcnew _delegates::OnRspQryOptionSelfClose(this, &TraderApi::OnRspQryOptionSelfCloseCallback);
            GCHandle hOnRspQryOptionSelfClose = GCHandle::Alloc(dOnRspQryOptionSelfClose);
            _gchandles->Add(hOnRspQryOptionSelfClose);
            _spi->OnRspQryOptionSelfCloseCallback = static_cast<_typedefs::OnRspQryOptionSelfClose>(Marshal::GetFunctionPointerForDelegate(dOnRspQryOptionSelfClose).ToPointer());

            _delegates::OnRspQryInvestUnit^ dOnRspQryInvestUnit = gcnew _delegates::OnRspQryInvestUnit(this, &TraderApi::OnRspQryInvestUnitCallback);
            GCHandle hOnRspQryInvestUnit = GCHandle::Alloc(dOnRspQryInvestUnit);
            _gchandles->Add(hOnRspQryInvestUnit);
            _spi->OnRspQryInvestUnitCallback = static_cast<_typedefs::OnRspQryInvestUnit>(Marshal::GetFunctionPointerForDelegate(dOnRspQryInvestUnit).ToPointer());

            _delegates::OnRspQryCombInstrumentGuard^ dOnRspQryCombInstrumentGuard = gcnew _delegates::OnRspQryCombInstrumentGuard(this, &TraderApi::OnRspQryCombInstrumentGuardCallback);
            GCHandle hOnRspQryCombInstrumentGuard = GCHandle::Alloc(dOnRspQryCombInstrumentGuard);
            _gchandles->Add(hOnRspQryCombInstrumentGuard);
            _spi->OnRspQryCombInstrumentGuardCallback = static_cast<_typedefs::OnRspQryCombInstrumentGuard>(Marshal::GetFunctionPointerForDelegate(dOnRspQryCombInstrumentGuard).ToPointer());

            _delegates::OnRspQryCombAction^ dOnRspQryCombAction = gcnew _delegates::OnRspQryCombAction(this, &TraderApi::OnRspQryCombActionCallback);
            GCHandle hOnRspQryCombAction = GCHandle::Alloc(dOnRspQryCombAction);
            _gchandles->Add(hOnRspQryCombAction);
            _spi->OnRspQryCombActionCallback = static_cast<_typedefs::OnRspQryCombAction>(Marshal::GetFunctionPointerForDelegate(dOnRspQryCombAction).ToPointer());

            _delegates::OnRspQryTransferSerial^ dOnRspQryTransferSerial = gcnew _delegates::OnRspQryTransferSerial(this, &TraderApi::OnRspQryTransferSerialCallback);
            GCHandle hOnRspQryTransferSerial = GCHandle::Alloc(dOnRspQryTransferSerial);
            _gchandles->Add(hOnRspQryTransferSerial);
            _spi->OnRspQryTransferSerialCallback = static_cast<_typedefs::OnRspQryTransferSerial>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTransferSerial).ToPointer());

            _delegates::OnRspQryAccountregister^ dOnRspQryAccountregister = gcnew _delegates::OnRspQryAccountregister(this, &TraderApi::OnRspQryAccountregisterCallback);
            GCHandle hOnRspQryAccountregister = GCHandle::Alloc(dOnRspQryAccountregister);
            _gchandles->Add(hOnRspQryAccountregister);
            _spi->OnRspQryAccountregisterCallback = static_cast<_typedefs::OnRspQryAccountregister>(Marshal::GetFunctionPointerForDelegate(dOnRspQryAccountregister).ToPointer());

            _delegates::OnRspError^ dOnRspError = gcnew _delegates::OnRspError(this, &TraderApi::OnRspErrorCallback);
            GCHandle hOnRspError = GCHandle::Alloc(dOnRspError);
            _gchandles->Add(hOnRspError);
            _spi->OnRspErrorCallback = static_cast<_typedefs::OnRspError>(Marshal::GetFunctionPointerForDelegate(dOnRspError).ToPointer());

            _delegates::OnRtnOrder^ dOnRtnOrder = gcnew _delegates::OnRtnOrder(this, &TraderApi::OnRtnOrderCallback);
            GCHandle hOnRtnOrder = GCHandle::Alloc(dOnRtnOrder);
            _gchandles->Add(hOnRtnOrder);
            _spi->OnRtnOrderCallback = static_cast<_typedefs::OnRtnOrder>(Marshal::GetFunctionPointerForDelegate(dOnRtnOrder).ToPointer());

            _delegates::OnRtnTrade^ dOnRtnTrade = gcnew _delegates::OnRtnTrade(this, &TraderApi::OnRtnTradeCallback);
            GCHandle hOnRtnTrade = GCHandle::Alloc(dOnRtnTrade);
            _gchandles->Add(hOnRtnTrade);
            _spi->OnRtnTradeCallback = static_cast<_typedefs::OnRtnTrade>(Marshal::GetFunctionPointerForDelegate(dOnRtnTrade).ToPointer());

            _delegates::OnErrRtnOrderInsert^ dOnErrRtnOrderInsert = gcnew _delegates::OnErrRtnOrderInsert(this, &TraderApi::OnErrRtnOrderInsertCallback);
            GCHandle hOnErrRtnOrderInsert = GCHandle::Alloc(dOnErrRtnOrderInsert);
            _gchandles->Add(hOnErrRtnOrderInsert);
            _spi->OnErrRtnOrderInsertCallback = static_cast<_typedefs::OnErrRtnOrderInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnOrderInsert).ToPointer());

            _delegates::OnErrRtnOrderAction^ dOnErrRtnOrderAction = gcnew _delegates::OnErrRtnOrderAction(this, &TraderApi::OnErrRtnOrderActionCallback);
            GCHandle hOnErrRtnOrderAction = GCHandle::Alloc(dOnErrRtnOrderAction);
            _gchandles->Add(hOnErrRtnOrderAction);
            _spi->OnErrRtnOrderActionCallback = static_cast<_typedefs::OnErrRtnOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnOrderAction).ToPointer());

            _delegates::OnRtnInstrumentStatus^ dOnRtnInstrumentStatus = gcnew _delegates::OnRtnInstrumentStatus(this, &TraderApi::OnRtnInstrumentStatusCallback);
            GCHandle hOnRtnInstrumentStatus = GCHandle::Alloc(dOnRtnInstrumentStatus);
            _gchandles->Add(hOnRtnInstrumentStatus);
            _spi->OnRtnInstrumentStatusCallback = static_cast<_typedefs::OnRtnInstrumentStatus>(Marshal::GetFunctionPointerForDelegate(dOnRtnInstrumentStatus).ToPointer());

            _delegates::OnRtnBulletin^ dOnRtnBulletin = gcnew _delegates::OnRtnBulletin(this, &TraderApi::OnRtnBulletinCallback);
            GCHandle hOnRtnBulletin = GCHandle::Alloc(dOnRtnBulletin);
            _gchandles->Add(hOnRtnBulletin);
            _spi->OnRtnBulletinCallback = static_cast<_typedefs::OnRtnBulletin>(Marshal::GetFunctionPointerForDelegate(dOnRtnBulletin).ToPointer());

            _delegates::OnRtnTradingNotice^ dOnRtnTradingNotice = gcnew _delegates::OnRtnTradingNotice(this, &TraderApi::OnRtnTradingNoticeCallback);
            GCHandle hOnRtnTradingNotice = GCHandle::Alloc(dOnRtnTradingNotice);
            _gchandles->Add(hOnRtnTradingNotice);
            _spi->OnRtnTradingNoticeCallback = static_cast<_typedefs::OnRtnTradingNotice>(Marshal::GetFunctionPointerForDelegate(dOnRtnTradingNotice).ToPointer());

            _delegates::OnRtnErrorConditionalOrder^ dOnRtnErrorConditionalOrder = gcnew _delegates::OnRtnErrorConditionalOrder(this, &TraderApi::OnRtnErrorConditionalOrderCallback);
            GCHandle hOnRtnErrorConditionalOrder = GCHandle::Alloc(dOnRtnErrorConditionalOrder);
            _gchandles->Add(hOnRtnErrorConditionalOrder);
            _spi->OnRtnErrorConditionalOrderCallback = static_cast<_typedefs::OnRtnErrorConditionalOrder>(Marshal::GetFunctionPointerForDelegate(dOnRtnErrorConditionalOrder).ToPointer());

            _delegates::OnRtnExecOrder^ dOnRtnExecOrder = gcnew _delegates::OnRtnExecOrder(this, &TraderApi::OnRtnExecOrderCallback);
            GCHandle hOnRtnExecOrder = GCHandle::Alloc(dOnRtnExecOrder);
            _gchandles->Add(hOnRtnExecOrder);
            _spi->OnRtnExecOrderCallback = static_cast<_typedefs::OnRtnExecOrder>(Marshal::GetFunctionPointerForDelegate(dOnRtnExecOrder).ToPointer());

            _delegates::OnErrRtnExecOrderInsert^ dOnErrRtnExecOrderInsert = gcnew _delegates::OnErrRtnExecOrderInsert(this, &TraderApi::OnErrRtnExecOrderInsertCallback);
            GCHandle hOnErrRtnExecOrderInsert = GCHandle::Alloc(dOnErrRtnExecOrderInsert);
            _gchandles->Add(hOnErrRtnExecOrderInsert);
            _spi->OnErrRtnExecOrderInsertCallback = static_cast<_typedefs::OnErrRtnExecOrderInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnExecOrderInsert).ToPointer());

            _delegates::OnErrRtnExecOrderAction^ dOnErrRtnExecOrderAction = gcnew _delegates::OnErrRtnExecOrderAction(this, &TraderApi::OnErrRtnExecOrderActionCallback);
            GCHandle hOnErrRtnExecOrderAction = GCHandle::Alloc(dOnErrRtnExecOrderAction);
            _gchandles->Add(hOnErrRtnExecOrderAction);
            _spi->OnErrRtnExecOrderActionCallback = static_cast<_typedefs::OnErrRtnExecOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnExecOrderAction).ToPointer());

            _delegates::OnErrRtnForQuoteInsert^ dOnErrRtnForQuoteInsert = gcnew _delegates::OnErrRtnForQuoteInsert(this, &TraderApi::OnErrRtnForQuoteInsertCallback);
            GCHandle hOnErrRtnForQuoteInsert = GCHandle::Alloc(dOnErrRtnForQuoteInsert);
            _gchandles->Add(hOnErrRtnForQuoteInsert);
            _spi->OnErrRtnForQuoteInsertCallback = static_cast<_typedefs::OnErrRtnForQuoteInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnForQuoteInsert).ToPointer());

            _delegates::OnRtnQuote^ dOnRtnQuote = gcnew _delegates::OnRtnQuote(this, &TraderApi::OnRtnQuoteCallback);
            GCHandle hOnRtnQuote = GCHandle::Alloc(dOnRtnQuote);
            _gchandles->Add(hOnRtnQuote);
            _spi->OnRtnQuoteCallback = static_cast<_typedefs::OnRtnQuote>(Marshal::GetFunctionPointerForDelegate(dOnRtnQuote).ToPointer());

            _delegates::OnErrRtnQuoteInsert^ dOnErrRtnQuoteInsert = gcnew _delegates::OnErrRtnQuoteInsert(this, &TraderApi::OnErrRtnQuoteInsertCallback);
            GCHandle hOnErrRtnQuoteInsert = GCHandle::Alloc(dOnErrRtnQuoteInsert);
            _gchandles->Add(hOnErrRtnQuoteInsert);
            _spi->OnErrRtnQuoteInsertCallback = static_cast<_typedefs::OnErrRtnQuoteInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnQuoteInsert).ToPointer());

            _delegates::OnErrRtnQuoteAction^ dOnErrRtnQuoteAction = gcnew _delegates::OnErrRtnQuoteAction(this, &TraderApi::OnErrRtnQuoteActionCallback);
            GCHandle hOnErrRtnQuoteAction = GCHandle::Alloc(dOnErrRtnQuoteAction);
            _gchandles->Add(hOnErrRtnQuoteAction);
            _spi->OnErrRtnQuoteActionCallback = static_cast<_typedefs::OnErrRtnQuoteAction>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnQuoteAction).ToPointer());

            _delegates::OnRtnForQuoteRsp^ dOnRtnForQuoteRsp = gcnew _delegates::OnRtnForQuoteRsp(this, &TraderApi::OnRtnForQuoteRspCallback);
            GCHandle hOnRtnForQuoteRsp = GCHandle::Alloc(dOnRtnForQuoteRsp);
            _gchandles->Add(hOnRtnForQuoteRsp);
            _spi->OnRtnForQuoteRspCallback = static_cast<_typedefs::OnRtnForQuoteRsp>(Marshal::GetFunctionPointerForDelegate(dOnRtnForQuoteRsp).ToPointer());

            _delegates::OnRtnCFMMCTradingAccountToken^ dOnRtnCFMMCTradingAccountToken = gcnew _delegates::OnRtnCFMMCTradingAccountToken(this, &TraderApi::OnRtnCFMMCTradingAccountTokenCallback);
            GCHandle hOnRtnCFMMCTradingAccountToken = GCHandle::Alloc(dOnRtnCFMMCTradingAccountToken);
            _gchandles->Add(hOnRtnCFMMCTradingAccountToken);
            _spi->OnRtnCFMMCTradingAccountTokenCallback = static_cast<_typedefs::OnRtnCFMMCTradingAccountToken>(Marshal::GetFunctionPointerForDelegate(dOnRtnCFMMCTradingAccountToken).ToPointer());

            _delegates::OnErrRtnBatchOrderAction^ dOnErrRtnBatchOrderAction = gcnew _delegates::OnErrRtnBatchOrderAction(this, &TraderApi::OnErrRtnBatchOrderActionCallback);
            GCHandle hOnErrRtnBatchOrderAction = GCHandle::Alloc(dOnErrRtnBatchOrderAction);
            _gchandles->Add(hOnErrRtnBatchOrderAction);
            _spi->OnErrRtnBatchOrderActionCallback = static_cast<_typedefs::OnErrRtnBatchOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnBatchOrderAction).ToPointer());

            _delegates::OnRtnOptionSelfClose^ dOnRtnOptionSelfClose = gcnew _delegates::OnRtnOptionSelfClose(this, &TraderApi::OnRtnOptionSelfCloseCallback);
            GCHandle hOnRtnOptionSelfClose = GCHandle::Alloc(dOnRtnOptionSelfClose);
            _gchandles->Add(hOnRtnOptionSelfClose);
            _spi->OnRtnOptionSelfCloseCallback = static_cast<_typedefs::OnRtnOptionSelfClose>(Marshal::GetFunctionPointerForDelegate(dOnRtnOptionSelfClose).ToPointer());

            _delegates::OnErrRtnOptionSelfCloseInsert^ dOnErrRtnOptionSelfCloseInsert = gcnew _delegates::OnErrRtnOptionSelfCloseInsert(this, &TraderApi::OnErrRtnOptionSelfCloseInsertCallback);
            GCHandle hOnErrRtnOptionSelfCloseInsert = GCHandle::Alloc(dOnErrRtnOptionSelfCloseInsert);
            _gchandles->Add(hOnErrRtnOptionSelfCloseInsert);
            _spi->OnErrRtnOptionSelfCloseInsertCallback = static_cast<_typedefs::OnErrRtnOptionSelfCloseInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnOptionSelfCloseInsert).ToPointer());

            _delegates::OnErrRtnOptionSelfCloseAction^ dOnErrRtnOptionSelfCloseAction = gcnew _delegates::OnErrRtnOptionSelfCloseAction(this, &TraderApi::OnErrRtnOptionSelfCloseActionCallback);
            GCHandle hOnErrRtnOptionSelfCloseAction = GCHandle::Alloc(dOnErrRtnOptionSelfCloseAction);
            _gchandles->Add(hOnErrRtnOptionSelfCloseAction);
            _spi->OnErrRtnOptionSelfCloseActionCallback = static_cast<_typedefs::OnErrRtnOptionSelfCloseAction>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnOptionSelfCloseAction).ToPointer());

            _delegates::OnRtnCombAction^ dOnRtnCombAction = gcnew _delegates::OnRtnCombAction(this, &TraderApi::OnRtnCombActionCallback);
            GCHandle hOnRtnCombAction = GCHandle::Alloc(dOnRtnCombAction);
            _gchandles->Add(hOnRtnCombAction);
            _spi->OnRtnCombActionCallback = static_cast<_typedefs::OnRtnCombAction>(Marshal::GetFunctionPointerForDelegate(dOnRtnCombAction).ToPointer());

            _delegates::OnErrRtnCombActionInsert^ dOnErrRtnCombActionInsert = gcnew _delegates::OnErrRtnCombActionInsert(this, &TraderApi::OnErrRtnCombActionInsertCallback);
            GCHandle hOnErrRtnCombActionInsert = GCHandle::Alloc(dOnErrRtnCombActionInsert);
            _gchandles->Add(hOnErrRtnCombActionInsert);
            _spi->OnErrRtnCombActionInsertCallback = static_cast<_typedefs::OnErrRtnCombActionInsert>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnCombActionInsert).ToPointer());

            _delegates::OnRspQryContractBank^ dOnRspQryContractBank = gcnew _delegates::OnRspQryContractBank(this, &TraderApi::OnRspQryContractBankCallback);
            GCHandle hOnRspQryContractBank = GCHandle::Alloc(dOnRspQryContractBank);
            _gchandles->Add(hOnRspQryContractBank);
            _spi->OnRspQryContractBankCallback = static_cast<_typedefs::OnRspQryContractBank>(Marshal::GetFunctionPointerForDelegate(dOnRspQryContractBank).ToPointer());

            _delegates::OnRspQryParkedOrder^ dOnRspQryParkedOrder = gcnew _delegates::OnRspQryParkedOrder(this, &TraderApi::OnRspQryParkedOrderCallback);
            GCHandle hOnRspQryParkedOrder = GCHandle::Alloc(dOnRspQryParkedOrder);
            _gchandles->Add(hOnRspQryParkedOrder);
            _spi->OnRspQryParkedOrderCallback = static_cast<_typedefs::OnRspQryParkedOrder>(Marshal::GetFunctionPointerForDelegate(dOnRspQryParkedOrder).ToPointer());

            _delegates::OnRspQryParkedOrderAction^ dOnRspQryParkedOrderAction = gcnew _delegates::OnRspQryParkedOrderAction(this, &TraderApi::OnRspQryParkedOrderActionCallback);
            GCHandle hOnRspQryParkedOrderAction = GCHandle::Alloc(dOnRspQryParkedOrderAction);
            _gchandles->Add(hOnRspQryParkedOrderAction);
            _spi->OnRspQryParkedOrderActionCallback = static_cast<_typedefs::OnRspQryParkedOrderAction>(Marshal::GetFunctionPointerForDelegate(dOnRspQryParkedOrderAction).ToPointer());

            _delegates::OnRspQryTradingNotice^ dOnRspQryTradingNotice = gcnew _delegates::OnRspQryTradingNotice(this, &TraderApi::OnRspQryTradingNoticeCallback);
            GCHandle hOnRspQryTradingNotice = GCHandle::Alloc(dOnRspQryTradingNotice);
            _gchandles->Add(hOnRspQryTradingNotice);
            _spi->OnRspQryTradingNoticeCallback = static_cast<_typedefs::OnRspQryTradingNotice>(Marshal::GetFunctionPointerForDelegate(dOnRspQryTradingNotice).ToPointer());

            _delegates::OnRspQryBrokerTradingParams^ dOnRspQryBrokerTradingParams = gcnew _delegates::OnRspQryBrokerTradingParams(this, &TraderApi::OnRspQryBrokerTradingParamsCallback);
            GCHandle hOnRspQryBrokerTradingParams = GCHandle::Alloc(dOnRspQryBrokerTradingParams);
            _gchandles->Add(hOnRspQryBrokerTradingParams);
            _spi->OnRspQryBrokerTradingParamsCallback = static_cast<_typedefs::OnRspQryBrokerTradingParams>(Marshal::GetFunctionPointerForDelegate(dOnRspQryBrokerTradingParams).ToPointer());

            _delegates::OnRspQryBrokerTradingAlgos^ dOnRspQryBrokerTradingAlgos = gcnew _delegates::OnRspQryBrokerTradingAlgos(this, &TraderApi::OnRspQryBrokerTradingAlgosCallback);
            GCHandle hOnRspQryBrokerTradingAlgos = GCHandle::Alloc(dOnRspQryBrokerTradingAlgos);
            _gchandles->Add(hOnRspQryBrokerTradingAlgos);
            _spi->OnRspQryBrokerTradingAlgosCallback = static_cast<_typedefs::OnRspQryBrokerTradingAlgos>(Marshal::GetFunctionPointerForDelegate(dOnRspQryBrokerTradingAlgos).ToPointer());

            _delegates::OnRspQueryCFMMCTradingAccountToken^ dOnRspQueryCFMMCTradingAccountToken = gcnew _delegates::OnRspQueryCFMMCTradingAccountToken(this, &TraderApi::OnRspQueryCFMMCTradingAccountTokenCallback);
            GCHandle hOnRspQueryCFMMCTradingAccountToken = GCHandle::Alloc(dOnRspQueryCFMMCTradingAccountToken);
            _gchandles->Add(hOnRspQueryCFMMCTradingAccountToken);
            _spi->OnRspQueryCFMMCTradingAccountTokenCallback = static_cast<_typedefs::OnRspQueryCFMMCTradingAccountToken>(Marshal::GetFunctionPointerForDelegate(dOnRspQueryCFMMCTradingAccountToken).ToPointer());

            _delegates::OnRtnFromBankToFutureByBank^ dOnRtnFromBankToFutureByBank = gcnew _delegates::OnRtnFromBankToFutureByBank(this, &TraderApi::OnRtnFromBankToFutureByBankCallback);
            GCHandle hOnRtnFromBankToFutureByBank = GCHandle::Alloc(dOnRtnFromBankToFutureByBank);
            _gchandles->Add(hOnRtnFromBankToFutureByBank);
            _spi->OnRtnFromBankToFutureByBankCallback = static_cast<_typedefs::OnRtnFromBankToFutureByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnFromBankToFutureByBank).ToPointer());

            _delegates::OnRtnFromFutureToBankByBank^ dOnRtnFromFutureToBankByBank = gcnew _delegates::OnRtnFromFutureToBankByBank(this, &TraderApi::OnRtnFromFutureToBankByBankCallback);
            GCHandle hOnRtnFromFutureToBankByBank = GCHandle::Alloc(dOnRtnFromFutureToBankByBank);
            _gchandles->Add(hOnRtnFromFutureToBankByBank);
            _spi->OnRtnFromFutureToBankByBankCallback = static_cast<_typedefs::OnRtnFromFutureToBankByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnFromFutureToBankByBank).ToPointer());

            _delegates::OnRtnRepealFromBankToFutureByBank^ dOnRtnRepealFromBankToFutureByBank = gcnew _delegates::OnRtnRepealFromBankToFutureByBank(this, &TraderApi::OnRtnRepealFromBankToFutureByBankCallback);
            GCHandle hOnRtnRepealFromBankToFutureByBank = GCHandle::Alloc(dOnRtnRepealFromBankToFutureByBank);
            _gchandles->Add(hOnRtnRepealFromBankToFutureByBank);
            _spi->OnRtnRepealFromBankToFutureByBankCallback = static_cast<_typedefs::OnRtnRepealFromBankToFutureByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromBankToFutureByBank).ToPointer());

            _delegates::OnRtnRepealFromFutureToBankByBank^ dOnRtnRepealFromFutureToBankByBank = gcnew _delegates::OnRtnRepealFromFutureToBankByBank(this, &TraderApi::OnRtnRepealFromFutureToBankByBankCallback);
            GCHandle hOnRtnRepealFromFutureToBankByBank = GCHandle::Alloc(dOnRtnRepealFromFutureToBankByBank);
            _gchandles->Add(hOnRtnRepealFromFutureToBankByBank);
            _spi->OnRtnRepealFromFutureToBankByBankCallback = static_cast<_typedefs::OnRtnRepealFromFutureToBankByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromFutureToBankByBank).ToPointer());

            _delegates::OnRtnFromBankToFutureByFuture^ dOnRtnFromBankToFutureByFuture = gcnew _delegates::OnRtnFromBankToFutureByFuture(this, &TraderApi::OnRtnFromBankToFutureByFutureCallback);
            GCHandle hOnRtnFromBankToFutureByFuture = GCHandle::Alloc(dOnRtnFromBankToFutureByFuture);
            _gchandles->Add(hOnRtnFromBankToFutureByFuture);
            _spi->OnRtnFromBankToFutureByFutureCallback = static_cast<_typedefs::OnRtnFromBankToFutureByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRtnFromBankToFutureByFuture).ToPointer());

            _delegates::OnRtnFromFutureToBankByFuture^ dOnRtnFromFutureToBankByFuture = gcnew _delegates::OnRtnFromFutureToBankByFuture(this, &TraderApi::OnRtnFromFutureToBankByFutureCallback);
            GCHandle hOnRtnFromFutureToBankByFuture = GCHandle::Alloc(dOnRtnFromFutureToBankByFuture);
            _gchandles->Add(hOnRtnFromFutureToBankByFuture);
            _spi->OnRtnFromFutureToBankByFutureCallback = static_cast<_typedefs::OnRtnFromFutureToBankByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRtnFromFutureToBankByFuture).ToPointer());

            _delegates::OnRtnRepealFromBankToFutureByFutureManual^ dOnRtnRepealFromBankToFutureByFutureManual = gcnew _delegates::OnRtnRepealFromBankToFutureByFutureManual(this, &TraderApi::OnRtnRepealFromBankToFutureByFutureManualCallback);
            GCHandle hOnRtnRepealFromBankToFutureByFutureManual = GCHandle::Alloc(dOnRtnRepealFromBankToFutureByFutureManual);
            _gchandles->Add(hOnRtnRepealFromBankToFutureByFutureManual);
            _spi->OnRtnRepealFromBankToFutureByFutureManualCallback = static_cast<_typedefs::OnRtnRepealFromBankToFutureByFutureManual>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromBankToFutureByFutureManual).ToPointer());

            _delegates::OnRtnRepealFromFutureToBankByFutureManual^ dOnRtnRepealFromFutureToBankByFutureManual = gcnew _delegates::OnRtnRepealFromFutureToBankByFutureManual(this, &TraderApi::OnRtnRepealFromFutureToBankByFutureManualCallback);
            GCHandle hOnRtnRepealFromFutureToBankByFutureManual = GCHandle::Alloc(dOnRtnRepealFromFutureToBankByFutureManual);
            _gchandles->Add(hOnRtnRepealFromFutureToBankByFutureManual);
            _spi->OnRtnRepealFromFutureToBankByFutureManualCallback = static_cast<_typedefs::OnRtnRepealFromFutureToBankByFutureManual>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromFutureToBankByFutureManual).ToPointer());

            _delegates::OnRtnQueryBankBalanceByFuture^ dOnRtnQueryBankBalanceByFuture = gcnew _delegates::OnRtnQueryBankBalanceByFuture(this, &TraderApi::OnRtnQueryBankBalanceByFutureCallback);
            GCHandle hOnRtnQueryBankBalanceByFuture = GCHandle::Alloc(dOnRtnQueryBankBalanceByFuture);
            _gchandles->Add(hOnRtnQueryBankBalanceByFuture);
            _spi->OnRtnQueryBankBalanceByFutureCallback = static_cast<_typedefs::OnRtnQueryBankBalanceByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRtnQueryBankBalanceByFuture).ToPointer());

            _delegates::OnErrRtnBankToFutureByFuture^ dOnErrRtnBankToFutureByFuture = gcnew _delegates::OnErrRtnBankToFutureByFuture(this, &TraderApi::OnErrRtnBankToFutureByFutureCallback);
            GCHandle hOnErrRtnBankToFutureByFuture = GCHandle::Alloc(dOnErrRtnBankToFutureByFuture);
            _gchandles->Add(hOnErrRtnBankToFutureByFuture);
            _spi->OnErrRtnBankToFutureByFutureCallback = static_cast<_typedefs::OnErrRtnBankToFutureByFuture>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnBankToFutureByFuture).ToPointer());

            _delegates::OnErrRtnFutureToBankByFuture^ dOnErrRtnFutureToBankByFuture = gcnew _delegates::OnErrRtnFutureToBankByFuture(this, &TraderApi::OnErrRtnFutureToBankByFutureCallback);
            GCHandle hOnErrRtnFutureToBankByFuture = GCHandle::Alloc(dOnErrRtnFutureToBankByFuture);
            _gchandles->Add(hOnErrRtnFutureToBankByFuture);
            _spi->OnErrRtnFutureToBankByFutureCallback = static_cast<_typedefs::OnErrRtnFutureToBankByFuture>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnFutureToBankByFuture).ToPointer());

            _delegates::OnErrRtnRepealBankToFutureByFutureManual^ dOnErrRtnRepealBankToFutureByFutureManual = gcnew _delegates::OnErrRtnRepealBankToFutureByFutureManual(this, &TraderApi::OnErrRtnRepealBankToFutureByFutureManualCallback);
            GCHandle hOnErrRtnRepealBankToFutureByFutureManual = GCHandle::Alloc(dOnErrRtnRepealBankToFutureByFutureManual);
            _gchandles->Add(hOnErrRtnRepealBankToFutureByFutureManual);
            _spi->OnErrRtnRepealBankToFutureByFutureManualCallback = static_cast<_typedefs::OnErrRtnRepealBankToFutureByFutureManual>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnRepealBankToFutureByFutureManual).ToPointer());

            _delegates::OnErrRtnRepealFutureToBankByFutureManual^ dOnErrRtnRepealFutureToBankByFutureManual = gcnew _delegates::OnErrRtnRepealFutureToBankByFutureManual(this, &TraderApi::OnErrRtnRepealFutureToBankByFutureManualCallback);
            GCHandle hOnErrRtnRepealFutureToBankByFutureManual = GCHandle::Alloc(dOnErrRtnRepealFutureToBankByFutureManual);
            _gchandles->Add(hOnErrRtnRepealFutureToBankByFutureManual);
            _spi->OnErrRtnRepealFutureToBankByFutureManualCallback = static_cast<_typedefs::OnErrRtnRepealFutureToBankByFutureManual>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnRepealFutureToBankByFutureManual).ToPointer());

            _delegates::OnErrRtnQueryBankBalanceByFuture^ dOnErrRtnQueryBankBalanceByFuture = gcnew _delegates::OnErrRtnQueryBankBalanceByFuture(this, &TraderApi::OnErrRtnQueryBankBalanceByFutureCallback);
            GCHandle hOnErrRtnQueryBankBalanceByFuture = GCHandle::Alloc(dOnErrRtnQueryBankBalanceByFuture);
            _gchandles->Add(hOnErrRtnQueryBankBalanceByFuture);
            _spi->OnErrRtnQueryBankBalanceByFutureCallback = static_cast<_typedefs::OnErrRtnQueryBankBalanceByFuture>(Marshal::GetFunctionPointerForDelegate(dOnErrRtnQueryBankBalanceByFuture).ToPointer());

            _delegates::OnRtnRepealFromBankToFutureByFuture^ dOnRtnRepealFromBankToFutureByFuture = gcnew _delegates::OnRtnRepealFromBankToFutureByFuture(this, &TraderApi::OnRtnRepealFromBankToFutureByFutureCallback);
            GCHandle hOnRtnRepealFromBankToFutureByFuture = GCHandle::Alloc(dOnRtnRepealFromBankToFutureByFuture);
            _gchandles->Add(hOnRtnRepealFromBankToFutureByFuture);
            _spi->OnRtnRepealFromBankToFutureByFutureCallback = static_cast<_typedefs::OnRtnRepealFromBankToFutureByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromBankToFutureByFuture).ToPointer());

            _delegates::OnRtnRepealFromFutureToBankByFuture^ dOnRtnRepealFromFutureToBankByFuture = gcnew _delegates::OnRtnRepealFromFutureToBankByFuture(this, &TraderApi::OnRtnRepealFromFutureToBankByFutureCallback);
            GCHandle hOnRtnRepealFromFutureToBankByFuture = GCHandle::Alloc(dOnRtnRepealFromFutureToBankByFuture);
            _gchandles->Add(hOnRtnRepealFromFutureToBankByFuture);
            _spi->OnRtnRepealFromFutureToBankByFutureCallback = static_cast<_typedefs::OnRtnRepealFromFutureToBankByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRtnRepealFromFutureToBankByFuture).ToPointer());

            _delegates::OnRspFromBankToFutureByFuture^ dOnRspFromBankToFutureByFuture = gcnew _delegates::OnRspFromBankToFutureByFuture(this, &TraderApi::OnRspFromBankToFutureByFutureCallback);
            GCHandle hOnRspFromBankToFutureByFuture = GCHandle::Alloc(dOnRspFromBankToFutureByFuture);
            _gchandles->Add(hOnRspFromBankToFutureByFuture);
            _spi->OnRspFromBankToFutureByFutureCallback = static_cast<_typedefs::OnRspFromBankToFutureByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRspFromBankToFutureByFuture).ToPointer());

            _delegates::OnRspFromFutureToBankByFuture^ dOnRspFromFutureToBankByFuture = gcnew _delegates::OnRspFromFutureToBankByFuture(this, &TraderApi::OnRspFromFutureToBankByFutureCallback);
            GCHandle hOnRspFromFutureToBankByFuture = GCHandle::Alloc(dOnRspFromFutureToBankByFuture);
            _gchandles->Add(hOnRspFromFutureToBankByFuture);
            _spi->OnRspFromFutureToBankByFutureCallback = static_cast<_typedefs::OnRspFromFutureToBankByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRspFromFutureToBankByFuture).ToPointer());

            _delegates::OnRspQueryBankAccountMoneyByFuture^ dOnRspQueryBankAccountMoneyByFuture = gcnew _delegates::OnRspQueryBankAccountMoneyByFuture(this, &TraderApi::OnRspQueryBankAccountMoneyByFutureCallback);
            GCHandle hOnRspQueryBankAccountMoneyByFuture = GCHandle::Alloc(dOnRspQueryBankAccountMoneyByFuture);
            _gchandles->Add(hOnRspQueryBankAccountMoneyByFuture);
            _spi->OnRspQueryBankAccountMoneyByFutureCallback = static_cast<_typedefs::OnRspQueryBankAccountMoneyByFuture>(Marshal::GetFunctionPointerForDelegate(dOnRspQueryBankAccountMoneyByFuture).ToPointer());

            _delegates::OnRtnOpenAccountByBank^ dOnRtnOpenAccountByBank = gcnew _delegates::OnRtnOpenAccountByBank(this, &TraderApi::OnRtnOpenAccountByBankCallback);
            GCHandle hOnRtnOpenAccountByBank = GCHandle::Alloc(dOnRtnOpenAccountByBank);
            _gchandles->Add(hOnRtnOpenAccountByBank);
            _spi->OnRtnOpenAccountByBankCallback = static_cast<_typedefs::OnRtnOpenAccountByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnOpenAccountByBank).ToPointer());

            _delegates::OnRtnCancelAccountByBank^ dOnRtnCancelAccountByBank = gcnew _delegates::OnRtnCancelAccountByBank(this, &TraderApi::OnRtnCancelAccountByBankCallback);
            GCHandle hOnRtnCancelAccountByBank = GCHandle::Alloc(dOnRtnCancelAccountByBank);
            _gchandles->Add(hOnRtnCancelAccountByBank);
            _spi->OnRtnCancelAccountByBankCallback = static_cast<_typedefs::OnRtnCancelAccountByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnCancelAccountByBank).ToPointer());

            _delegates::OnRtnChangeAccountByBank^ dOnRtnChangeAccountByBank = gcnew _delegates::OnRtnChangeAccountByBank(this, &TraderApi::OnRtnChangeAccountByBankCallback);
            GCHandle hOnRtnChangeAccountByBank = GCHandle::Alloc(dOnRtnChangeAccountByBank);
            _gchandles->Add(hOnRtnChangeAccountByBank);
            _spi->OnRtnChangeAccountByBankCallback = static_cast<_typedefs::OnRtnChangeAccountByBank>(Marshal::GetFunctionPointerForDelegate(dOnRtnChangeAccountByBank).ToPointer());

            return _api->Init();
        }

        int TraderApi::Join()
        {
            return _api->Join();
        }

        String^ TraderApi::GetTradingDay()
        {
            return gcnew String(_api->GetTradingDay());
        }

        void TraderApi::RegisterFront(String^ pszFrontAddress)
        {
            IntPtr pszFrontAddressPtr = Marshal::StringToHGlobalAnsi(pszFrontAddress);
            try
            {
                return _api->RegisterFront(static_cast<char*>(pszFrontAddressPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(pszFrontAddressPtr);
            }
        }

        void TraderApi::RegisterNameServer(String^ pszNsAddress)
        {
            IntPtr pszNsAddressPtr = Marshal::StringToHGlobalAnsi(pszNsAddress);
            try
            {
                return _api->RegisterNameServer(static_cast<char*>(pszNsAddressPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(pszNsAddressPtr);
            }
        }

        void TraderApi::RegisterFensUserInfo(FensUserInfoField^ pFensUserInfo)
        {
            IntPtr pFensUserInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<FensUserInfoField^>());
            Marshal::StructureToPtr(pFensUserInfo, pFensUserInfoPtr, false);
            try
            {
                return _api->RegisterFensUserInfo(static_cast<CThostFtdcFensUserInfoField*>(pFensUserInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(pFensUserInfoPtr);
            }
        }

        void TraderApi::SubscribePrivateTopic(RESUME_TYPE nResumeType)
        {
            return _api->SubscribePrivateTopic((THOST_TE_RESUME_TYPE)nResumeType);
        }

        void TraderApi::SubscribePublicTopic(RESUME_TYPE nResumeType)
        {
            return _api->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nResumeType);
        }

        int TraderApi::ReqAuthenticate(ReqAuthenticateField^ pReqAuthenticateField, int nRequestID)
        {
            IntPtr pReqAuthenticateFieldPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqAuthenticateField^>());
            Marshal::StructureToPtr(pReqAuthenticateField, pReqAuthenticateFieldPtr, false);
            try
            {
                return _api->ReqAuthenticate(static_cast<CThostFtdcReqAuthenticateField*>(pReqAuthenticateFieldPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqAuthenticateFieldPtr);
            }
        }

        int TraderApi::RegisterUserSystemInfo(UserSystemInfoField^ pUserSystemInfo)
        {
            IntPtr pUserSystemInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserSystemInfoField^>());
            Marshal::StructureToPtr(pUserSystemInfo, pUserSystemInfoPtr, false);
            try
            {
                return _api->RegisterUserSystemInfo(static_cast<CThostFtdcUserSystemInfoField*>(pUserSystemInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(pUserSystemInfoPtr);
            }
        }

        int TraderApi::SubmitUserSystemInfo(UserSystemInfoField^ pUserSystemInfo)
        {
            IntPtr pUserSystemInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserSystemInfoField^>());
            Marshal::StructureToPtr(pUserSystemInfo, pUserSystemInfoPtr, false);
            try
            {
                return _api->SubmitUserSystemInfo(static_cast<CThostFtdcUserSystemInfoField*>(pUserSystemInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(pUserSystemInfoPtr);
            }
        }

        int TraderApi::ReqUserLogin(ReqUserLoginField^ pReqUserLoginField, int nRequestID)
        {
            IntPtr pReqUserLoginFieldPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginField^>());
            Marshal::StructureToPtr(pReqUserLoginField, pReqUserLoginFieldPtr, false);
            try
            {
                return _api->ReqUserLogin(static_cast<CThostFtdcReqUserLoginField*>(pReqUserLoginFieldPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqUserLoginFieldPtr);
            }
        }

        int TraderApi::ReqUserLogout(UserLogoutField^ pUserLogout, int nRequestID)
        {
            IntPtr pUserLogoutPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserLogoutField^>());
            Marshal::StructureToPtr(pUserLogout, pUserLogoutPtr, false);
            try
            {
                return _api->ReqUserLogout(static_cast<CThostFtdcUserLogoutField*>(pUserLogoutPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pUserLogoutPtr);
            }
        }

        int TraderApi::ReqUserPasswordUpdate(UserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID)
        {
            IntPtr pUserPasswordUpdatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserPasswordUpdateField^>());
            Marshal::StructureToPtr(pUserPasswordUpdate, pUserPasswordUpdatePtr, false);
            try
            {
                return _api->ReqUserPasswordUpdate(static_cast<CThostFtdcUserPasswordUpdateField*>(pUserPasswordUpdatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pUserPasswordUpdatePtr);
            }
        }

        int TraderApi::ReqTradingAccountPasswordUpdate(TradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID)
        {
            IntPtr pTradingAccountPasswordUpdatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<TradingAccountPasswordUpdateField^>());
            Marshal::StructureToPtr(pTradingAccountPasswordUpdate, pTradingAccountPasswordUpdatePtr, false);
            try
            {
                return _api->ReqTradingAccountPasswordUpdate(static_cast<CThostFtdcTradingAccountPasswordUpdateField*>(pTradingAccountPasswordUpdatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pTradingAccountPasswordUpdatePtr);
            }
        }

        int TraderApi::ReqUserAuthMethod(ReqUserAuthMethodField^ pReqUserAuthMethod, int nRequestID)
        {
            IntPtr pReqUserAuthMethodPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserAuthMethodField^>());
            Marshal::StructureToPtr(pReqUserAuthMethod, pReqUserAuthMethodPtr, false);
            try
            {
                return _api->ReqUserAuthMethod(static_cast<CThostFtdcReqUserAuthMethodField*>(pReqUserAuthMethodPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqUserAuthMethodPtr);
            }
        }

        int TraderApi::ReqGenUserCaptcha(ReqGenUserCaptchaField^ pReqGenUserCaptcha, int nRequestID)
        {
            IntPtr pReqGenUserCaptchaPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqGenUserCaptchaField^>());
            Marshal::StructureToPtr(pReqGenUserCaptcha, pReqGenUserCaptchaPtr, false);
            try
            {
                return _api->ReqGenUserCaptcha(static_cast<CThostFtdcReqGenUserCaptchaField*>(pReqGenUserCaptchaPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqGenUserCaptchaPtr);
            }
        }

        int TraderApi::ReqGenUserText(ReqGenUserTextField^ pReqGenUserText, int nRequestID)
        {
            IntPtr pReqGenUserTextPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqGenUserTextField^>());
            Marshal::StructureToPtr(pReqGenUserText, pReqGenUserTextPtr, false);
            try
            {
                return _api->ReqGenUserText(static_cast<CThostFtdcReqGenUserTextField*>(pReqGenUserTextPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqGenUserTextPtr);
            }
        }

        int TraderApi::ReqUserLoginWithCaptcha(ReqUserLoginWithCaptchaField^ pReqUserLoginWithCaptcha, int nRequestID)
        {
            IntPtr pReqUserLoginWithCaptchaPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithCaptchaField^>());
            Marshal::StructureToPtr(pReqUserLoginWithCaptcha, pReqUserLoginWithCaptchaPtr, false);
            try
            {
                return _api->ReqUserLoginWithCaptcha(static_cast<CThostFtdcReqUserLoginWithCaptchaField*>(pReqUserLoginWithCaptchaPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqUserLoginWithCaptchaPtr);
            }
        }

        int TraderApi::ReqUserLoginWithText(ReqUserLoginWithTextField^ pReqUserLoginWithText, int nRequestID)
        {
            IntPtr pReqUserLoginWithTextPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithTextField^>());
            Marshal::StructureToPtr(pReqUserLoginWithText, pReqUserLoginWithTextPtr, false);
            try
            {
                return _api->ReqUserLoginWithText(static_cast<CThostFtdcReqUserLoginWithTextField*>(pReqUserLoginWithTextPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqUserLoginWithTextPtr);
            }
        }

        int TraderApi::ReqUserLoginWithOTP(ReqUserLoginWithOTPField^ pReqUserLoginWithOTP, int nRequestID)
        {
            IntPtr pReqUserLoginWithOTPPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithOTPField^>());
            Marshal::StructureToPtr(pReqUserLoginWithOTP, pReqUserLoginWithOTPPtr, false);
            try
            {
                return _api->ReqUserLoginWithOTP(static_cast<CThostFtdcReqUserLoginWithOTPField*>(pReqUserLoginWithOTPPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqUserLoginWithOTPPtr);
            }
        }

        int TraderApi::ReqOrderInsert(InputOrderField^ pInputOrder, int nRequestID)
        {
            IntPtr pInputOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOrderField^>());
            Marshal::StructureToPtr(pInputOrder, pInputOrderPtr, false);
            try
            {
                return _api->ReqOrderInsert(static_cast<CThostFtdcInputOrderField*>(pInputOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputOrderPtr);
            }
        }

        int TraderApi::ReqParkedOrderInsert(ParkedOrderField^ pParkedOrder, int nRequestID)
        {
            IntPtr pParkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ParkedOrderField^>());
            Marshal::StructureToPtr(pParkedOrder, pParkedOrderPtr, false);
            try
            {
                return _api->ReqParkedOrderInsert(static_cast<CThostFtdcParkedOrderField*>(pParkedOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pParkedOrderPtr);
            }
        }

        int TraderApi::ReqParkedOrderAction(ParkedOrderActionField^ pParkedOrderAction, int nRequestID)
        {
            IntPtr pParkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ParkedOrderActionField^>());
            Marshal::StructureToPtr(pParkedOrderAction, pParkedOrderActionPtr, false);
            try
            {
                return _api->ReqParkedOrderAction(static_cast<CThostFtdcParkedOrderActionField*>(pParkedOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pParkedOrderActionPtr);
            }
        }

        int TraderApi::ReqOrderAction(InputOrderActionField^ pInputOrderAction, int nRequestID)
        {
            IntPtr pInputOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOrderActionField^>());
            Marshal::StructureToPtr(pInputOrderAction, pInputOrderActionPtr, false);
            try
            {
                return _api->ReqOrderAction(static_cast<CThostFtdcInputOrderActionField*>(pInputOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputOrderActionPtr);
            }
        }

        int TraderApi::ReqQueryMaxOrderVolume(QueryMaxOrderVolumeField^ pQueryMaxOrderVolume, int nRequestID)
        {
            IntPtr pQueryMaxOrderVolumePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QueryMaxOrderVolumeField^>());
            Marshal::StructureToPtr(pQueryMaxOrderVolume, pQueryMaxOrderVolumePtr, false);
            try
            {
                return _api->ReqQueryMaxOrderVolume(static_cast<CThostFtdcQueryMaxOrderVolumeField*>(pQueryMaxOrderVolumePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQueryMaxOrderVolumePtr);
            }
        }

        int TraderApi::ReqSettlementInfoConfirm(SettlementInfoConfirmField^ pSettlementInfoConfirm, int nRequestID)
        {
            IntPtr pSettlementInfoConfirmPtr = Marshal::AllocHGlobal(Marshal::SizeOf<SettlementInfoConfirmField^>());
            Marshal::StructureToPtr(pSettlementInfoConfirm, pSettlementInfoConfirmPtr, false);
            try
            {
                return _api->ReqSettlementInfoConfirm(static_cast<CThostFtdcSettlementInfoConfirmField*>(pSettlementInfoConfirmPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pSettlementInfoConfirmPtr);
            }
        }

        int TraderApi::ReqRemoveParkedOrder(RemoveParkedOrderField^ pRemoveParkedOrder, int nRequestID)
        {
            IntPtr pRemoveParkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<RemoveParkedOrderField^>());
            Marshal::StructureToPtr(pRemoveParkedOrder, pRemoveParkedOrderPtr, false);
            try
            {
                return _api->ReqRemoveParkedOrder(static_cast<CThostFtdcRemoveParkedOrderField*>(pRemoveParkedOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pRemoveParkedOrderPtr);
            }
        }

        int TraderApi::ReqRemoveParkedOrderAction(RemoveParkedOrderActionField^ pRemoveParkedOrderAction, int nRequestID)
        {
            IntPtr pRemoveParkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<RemoveParkedOrderActionField^>());
            Marshal::StructureToPtr(pRemoveParkedOrderAction, pRemoveParkedOrderActionPtr, false);
            try
            {
                return _api->ReqRemoveParkedOrderAction(static_cast<CThostFtdcRemoveParkedOrderActionField*>(pRemoveParkedOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pRemoveParkedOrderActionPtr);
            }
        }

        int TraderApi::ReqExecOrderInsert(InputExecOrderField^ pInputExecOrder, int nRequestID)
        {
            IntPtr pInputExecOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputExecOrderField^>());
            Marshal::StructureToPtr(pInputExecOrder, pInputExecOrderPtr, false);
            try
            {
                return _api->ReqExecOrderInsert(static_cast<CThostFtdcInputExecOrderField*>(pInputExecOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputExecOrderPtr);
            }
        }

        int TraderApi::ReqExecOrderAction(InputExecOrderActionField^ pInputExecOrderAction, int nRequestID)
        {
            IntPtr pInputExecOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputExecOrderActionField^>());
            Marshal::StructureToPtr(pInputExecOrderAction, pInputExecOrderActionPtr, false);
            try
            {
                return _api->ReqExecOrderAction(static_cast<CThostFtdcInputExecOrderActionField*>(pInputExecOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputExecOrderActionPtr);
            }
        }

        int TraderApi::ReqForQuoteInsert(InputForQuoteField^ pInputForQuote, int nRequestID)
        {
            IntPtr pInputForQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputForQuoteField^>());
            Marshal::StructureToPtr(pInputForQuote, pInputForQuotePtr, false);
            try
            {
                return _api->ReqForQuoteInsert(static_cast<CThostFtdcInputForQuoteField*>(pInputForQuotePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputForQuotePtr);
            }
        }

        int TraderApi::ReqQuoteInsert(InputQuoteField^ pInputQuote, int nRequestID)
        {
            IntPtr pInputQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputQuoteField^>());
            Marshal::StructureToPtr(pInputQuote, pInputQuotePtr, false);
            try
            {
                return _api->ReqQuoteInsert(static_cast<CThostFtdcInputQuoteField*>(pInputQuotePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputQuotePtr);
            }
        }

        int TraderApi::ReqQuoteAction(InputQuoteActionField^ pInputQuoteAction, int nRequestID)
        {
            IntPtr pInputQuoteActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputQuoteActionField^>());
            Marshal::StructureToPtr(pInputQuoteAction, pInputQuoteActionPtr, false);
            try
            {
                return _api->ReqQuoteAction(static_cast<CThostFtdcInputQuoteActionField*>(pInputQuoteActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputQuoteActionPtr);
            }
        }

        int TraderApi::ReqBatchOrderAction(InputBatchOrderActionField^ pInputBatchOrderAction, int nRequestID)
        {
            IntPtr pInputBatchOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputBatchOrderActionField^>());
            Marshal::StructureToPtr(pInputBatchOrderAction, pInputBatchOrderActionPtr, false);
            try
            {
                return _api->ReqBatchOrderAction(static_cast<CThostFtdcInputBatchOrderActionField*>(pInputBatchOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputBatchOrderActionPtr);
            }
        }

        int TraderApi::ReqOptionSelfCloseInsert(InputOptionSelfCloseField^ pInputOptionSelfClose, int nRequestID)
        {
            IntPtr pInputOptionSelfClosePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOptionSelfCloseField^>());
            Marshal::StructureToPtr(pInputOptionSelfClose, pInputOptionSelfClosePtr, false);
            try
            {
                return _api->ReqOptionSelfCloseInsert(static_cast<CThostFtdcInputOptionSelfCloseField*>(pInputOptionSelfClosePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputOptionSelfClosePtr);
            }
        }

        int TraderApi::ReqOptionSelfCloseAction(InputOptionSelfCloseActionField^ pInputOptionSelfCloseAction, int nRequestID)
        {
            IntPtr pInputOptionSelfCloseActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOptionSelfCloseActionField^>());
            Marshal::StructureToPtr(pInputOptionSelfCloseAction, pInputOptionSelfCloseActionPtr, false);
            try
            {
                return _api->ReqOptionSelfCloseAction(static_cast<CThostFtdcInputOptionSelfCloseActionField*>(pInputOptionSelfCloseActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputOptionSelfCloseActionPtr);
            }
        }

        int TraderApi::ReqCombActionInsert(InputCombActionField^ pInputCombAction, int nRequestID)
        {
            IntPtr pInputCombActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputCombActionField^>());
            Marshal::StructureToPtr(pInputCombAction, pInputCombActionPtr, false);
            try
            {
                return _api->ReqCombActionInsert(static_cast<CThostFtdcInputCombActionField*>(pInputCombActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pInputCombActionPtr);
            }
        }

        int TraderApi::ReqQryOrder(QryOrderField^ pQryOrder, int nRequestID)
        {
            IntPtr pQryOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOrderField^>());
            Marshal::StructureToPtr(pQryOrder, pQryOrderPtr, false);
            try
            {
                return _api->ReqQryOrder(static_cast<CThostFtdcQryOrderField*>(pQryOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryOrderPtr);
            }
        }

        int TraderApi::ReqQryTrade(QryTradeField^ pQryTrade, int nRequestID)
        {
            IntPtr pQryTradePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradeField^>());
            Marshal::StructureToPtr(pQryTrade, pQryTradePtr, false);
            try
            {
                return _api->ReqQryTrade(static_cast<CThostFtdcQryTradeField*>(pQryTradePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTradePtr);
            }
        }

        int TraderApi::ReqQryInvestorPosition(QryInvestorPositionField^ pQryInvestorPosition, int nRequestID)
        {
            IntPtr pQryInvestorPositionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionField^>());
            Marshal::StructureToPtr(pQryInvestorPosition, pQryInvestorPositionPtr, false);
            try
            {
                return _api->ReqQryInvestorPosition(static_cast<CThostFtdcQryInvestorPositionField*>(pQryInvestorPositionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestorPositionPtr);
            }
        }

        int TraderApi::ReqQryTradingAccount(QryTradingAccountField^ pQryTradingAccount, int nRequestID)
        {
            IntPtr pQryTradingAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingAccountField^>());
            Marshal::StructureToPtr(pQryTradingAccount, pQryTradingAccountPtr, false);
            try
            {
                return _api->ReqQryTradingAccount(static_cast<CThostFtdcQryTradingAccountField*>(pQryTradingAccountPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTradingAccountPtr);
            }
        }

        int TraderApi::ReqQryInvestor(QryInvestorField^ pQryInvestor, int nRequestID)
        {
            IntPtr pQryInvestorPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorField^>());
            Marshal::StructureToPtr(pQryInvestor, pQryInvestorPtr, false);
            try
            {
                return _api->ReqQryInvestor(static_cast<CThostFtdcQryInvestorField*>(pQryInvestorPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestorPtr);
            }
        }

        int TraderApi::ReqQryTradingCode(QryTradingCodeField^ pQryTradingCode, int nRequestID)
        {
            IntPtr pQryTradingCodePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingCodeField^>());
            Marshal::StructureToPtr(pQryTradingCode, pQryTradingCodePtr, false);
            try
            {
                return _api->ReqQryTradingCode(static_cast<CThostFtdcQryTradingCodeField*>(pQryTradingCodePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTradingCodePtr);
            }
        }

        int TraderApi::ReqQryInstrumentMarginRate(QryInstrumentMarginRateField^ pQryInstrumentMarginRate, int nRequestID)
        {
            IntPtr pQryInstrumentMarginRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentMarginRateField^>());
            Marshal::StructureToPtr(pQryInstrumentMarginRate, pQryInstrumentMarginRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentMarginRate(static_cast<CThostFtdcQryInstrumentMarginRateField*>(pQryInstrumentMarginRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInstrumentMarginRatePtr);
            }
        }

        int TraderApi::ReqQryInstrumentCommissionRate(QryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID)
        {
            IntPtr pQryInstrumentCommissionRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentCommissionRateField^>());
            Marshal::StructureToPtr(pQryInstrumentCommissionRate, pQryInstrumentCommissionRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentCommissionRate(static_cast<CThostFtdcQryInstrumentCommissionRateField*>(pQryInstrumentCommissionRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInstrumentCommissionRatePtr);
            }
        }

        int TraderApi::ReqQryExchange(QryExchangeField^ pQryExchange, int nRequestID)
        {
            IntPtr pQryExchangePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeField^>());
            Marshal::StructureToPtr(pQryExchange, pQryExchangePtr, false);
            try
            {
                return _api->ReqQryExchange(static_cast<CThostFtdcQryExchangeField*>(pQryExchangePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryExchangePtr);
            }
        }

        int TraderApi::ReqQryProduct(QryProductField^ pQryProduct, int nRequestID)
        {
            IntPtr pQryProductPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductField^>());
            Marshal::StructureToPtr(pQryProduct, pQryProductPtr, false);
            try
            {
                return _api->ReqQryProduct(static_cast<CThostFtdcQryProductField*>(pQryProductPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryProductPtr);
            }
        }

        int TraderApi::ReqQryInstrument(QryInstrumentField^ pQryInstrument, int nRequestID)
        {
            IntPtr pQryInstrumentPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentField^>());
            Marshal::StructureToPtr(pQryInstrument, pQryInstrumentPtr, false);
            try
            {
                return _api->ReqQryInstrument(static_cast<CThostFtdcQryInstrumentField*>(pQryInstrumentPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInstrumentPtr);
            }
        }

        int TraderApi::ReqQryDepthMarketData(QryDepthMarketDataField^ pQryDepthMarketData, int nRequestID)
        {
            IntPtr pQryDepthMarketDataPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryDepthMarketDataField^>());
            Marshal::StructureToPtr(pQryDepthMarketData, pQryDepthMarketDataPtr, false);
            try
            {
                return _api->ReqQryDepthMarketData(static_cast<CThostFtdcQryDepthMarketDataField*>(pQryDepthMarketDataPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryDepthMarketDataPtr);
            }
        }

        int TraderApi::ReqQrySettlementInfo(QrySettlementInfoField^ pQrySettlementInfo, int nRequestID)
        {
            IntPtr pQrySettlementInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySettlementInfoField^>());
            Marshal::StructureToPtr(pQrySettlementInfo, pQrySettlementInfoPtr, false);
            try
            {
                return _api->ReqQrySettlementInfo(static_cast<CThostFtdcQrySettlementInfoField*>(pQrySettlementInfoPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQrySettlementInfoPtr);
            }
        }

        int TraderApi::ReqQryTransferBank(QryTransferBankField^ pQryTransferBank, int nRequestID)
        {
            IntPtr pQryTransferBankPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTransferBankField^>());
            Marshal::StructureToPtr(pQryTransferBank, pQryTransferBankPtr, false);
            try
            {
                return _api->ReqQryTransferBank(static_cast<CThostFtdcQryTransferBankField*>(pQryTransferBankPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTransferBankPtr);
            }
        }

        int TraderApi::ReqQryInvestorPositionDetail(QryInvestorPositionDetailField^ pQryInvestorPositionDetail, int nRequestID)
        {
            IntPtr pQryInvestorPositionDetailPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionDetailField^>());
            Marshal::StructureToPtr(pQryInvestorPositionDetail, pQryInvestorPositionDetailPtr, false);
            try
            {
                return _api->ReqQryInvestorPositionDetail(static_cast<CThostFtdcQryInvestorPositionDetailField*>(pQryInvestorPositionDetailPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestorPositionDetailPtr);
            }
        }

        int TraderApi::ReqQryNotice(QryNoticeField^ pQryNotice, int nRequestID)
        {
            IntPtr pQryNoticePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryNoticeField^>());
            Marshal::StructureToPtr(pQryNotice, pQryNoticePtr, false);
            try
            {
                return _api->ReqQryNotice(static_cast<CThostFtdcQryNoticeField*>(pQryNoticePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryNoticePtr);
            }
        }

        int TraderApi::ReqQrySettlementInfoConfirm(QrySettlementInfoConfirmField^ pQrySettlementInfoConfirm, int nRequestID)
        {
            IntPtr pQrySettlementInfoConfirmPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySettlementInfoConfirmField^>());
            Marshal::StructureToPtr(pQrySettlementInfoConfirm, pQrySettlementInfoConfirmPtr, false);
            try
            {
                return _api->ReqQrySettlementInfoConfirm(static_cast<CThostFtdcQrySettlementInfoConfirmField*>(pQrySettlementInfoConfirmPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQrySettlementInfoConfirmPtr);
            }
        }

        int TraderApi::ReqQryInvestorPositionCombineDetail(QryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail, int nRequestID)
        {
            IntPtr pQryInvestorPositionCombineDetailPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionCombineDetailField^>());
            Marshal::StructureToPtr(pQryInvestorPositionCombineDetail, pQryInvestorPositionCombineDetailPtr, false);
            try
            {
                return _api->ReqQryInvestorPositionCombineDetail(static_cast<CThostFtdcQryInvestorPositionCombineDetailField*>(pQryInvestorPositionCombineDetailPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestorPositionCombineDetailPtr);
            }
        }

        int TraderApi::ReqQryCFMMCTradingAccountKey(QryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey, int nRequestID)
        {
            IntPtr pQryCFMMCTradingAccountKeyPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCFMMCTradingAccountKeyField^>());
            Marshal::StructureToPtr(pQryCFMMCTradingAccountKey, pQryCFMMCTradingAccountKeyPtr, false);
            try
            {
                return _api->ReqQryCFMMCTradingAccountKey(static_cast<CThostFtdcQryCFMMCTradingAccountKeyField*>(pQryCFMMCTradingAccountKeyPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryCFMMCTradingAccountKeyPtr);
            }
        }

        int TraderApi::ReqQryEWarrantOffset(QryEWarrantOffsetField^ pQryEWarrantOffset, int nRequestID)
        {
            IntPtr pQryEWarrantOffsetPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryEWarrantOffsetField^>());
            Marshal::StructureToPtr(pQryEWarrantOffset, pQryEWarrantOffsetPtr, false);
            try
            {
                return _api->ReqQryEWarrantOffset(static_cast<CThostFtdcQryEWarrantOffsetField*>(pQryEWarrantOffsetPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryEWarrantOffsetPtr);
            }
        }

        int TraderApi::ReqQryInvestorProductGroupMargin(QryInvestorProductGroupMarginField^ pQryInvestorProductGroupMargin, int nRequestID)
        {
            IntPtr pQryInvestorProductGroupMarginPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorProductGroupMarginField^>());
            Marshal::StructureToPtr(pQryInvestorProductGroupMargin, pQryInvestorProductGroupMarginPtr, false);
            try
            {
                return _api->ReqQryInvestorProductGroupMargin(static_cast<CThostFtdcQryInvestorProductGroupMarginField*>(pQryInvestorProductGroupMarginPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestorProductGroupMarginPtr);
            }
        }

        int TraderApi::ReqQryExchangeMarginRate(QryExchangeMarginRateField^ pQryExchangeMarginRate, int nRequestID)
        {
            IntPtr pQryExchangeMarginRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeMarginRateField^>());
            Marshal::StructureToPtr(pQryExchangeMarginRate, pQryExchangeMarginRatePtr, false);
            try
            {
                return _api->ReqQryExchangeMarginRate(static_cast<CThostFtdcQryExchangeMarginRateField*>(pQryExchangeMarginRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryExchangeMarginRatePtr);
            }
        }

        int TraderApi::ReqQryExchangeMarginRateAdjust(QryExchangeMarginRateAdjustField^ pQryExchangeMarginRateAdjust, int nRequestID)
        {
            IntPtr pQryExchangeMarginRateAdjustPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeMarginRateAdjustField^>());
            Marshal::StructureToPtr(pQryExchangeMarginRateAdjust, pQryExchangeMarginRateAdjustPtr, false);
            try
            {
                return _api->ReqQryExchangeMarginRateAdjust(static_cast<CThostFtdcQryExchangeMarginRateAdjustField*>(pQryExchangeMarginRateAdjustPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryExchangeMarginRateAdjustPtr);
            }
        }

        int TraderApi::ReqQryExchangeRate(QryExchangeRateField^ pQryExchangeRate, int nRequestID)
        {
            IntPtr pQryExchangeRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeRateField^>());
            Marshal::StructureToPtr(pQryExchangeRate, pQryExchangeRatePtr, false);
            try
            {
                return _api->ReqQryExchangeRate(static_cast<CThostFtdcQryExchangeRateField*>(pQryExchangeRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryExchangeRatePtr);
            }
        }

        int TraderApi::ReqQrySecAgentACIDMap(QrySecAgentACIDMapField^ pQrySecAgentACIDMap, int nRequestID)
        {
            IntPtr pQrySecAgentACIDMapPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentACIDMapField^>());
            Marshal::StructureToPtr(pQrySecAgentACIDMap, pQrySecAgentACIDMapPtr, false);
            try
            {
                return _api->ReqQrySecAgentACIDMap(static_cast<CThostFtdcQrySecAgentACIDMapField*>(pQrySecAgentACIDMapPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQrySecAgentACIDMapPtr);
            }
        }

        int TraderApi::ReqQryProductExchRate(QryProductExchRateField^ pQryProductExchRate, int nRequestID)
        {
            IntPtr pQryProductExchRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductExchRateField^>());
            Marshal::StructureToPtr(pQryProductExchRate, pQryProductExchRatePtr, false);
            try
            {
                return _api->ReqQryProductExchRate(static_cast<CThostFtdcQryProductExchRateField*>(pQryProductExchRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryProductExchRatePtr);
            }
        }

        int TraderApi::ReqQryProductGroup(QryProductGroupField^ pQryProductGroup, int nRequestID)
        {
            IntPtr pQryProductGroupPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductGroupField^>());
            Marshal::StructureToPtr(pQryProductGroup, pQryProductGroupPtr, false);
            try
            {
                return _api->ReqQryProductGroup(static_cast<CThostFtdcQryProductGroupField*>(pQryProductGroupPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryProductGroupPtr);
            }
        }

        int TraderApi::ReqQryMMInstrumentCommissionRate(QryMMInstrumentCommissionRateField^ pQryMMInstrumentCommissionRate, int nRequestID)
        {
            IntPtr pQryMMInstrumentCommissionRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryMMInstrumentCommissionRateField^>());
            Marshal::StructureToPtr(pQryMMInstrumentCommissionRate, pQryMMInstrumentCommissionRatePtr, false);
            try
            {
                return _api->ReqQryMMInstrumentCommissionRate(static_cast<CThostFtdcQryMMInstrumentCommissionRateField*>(pQryMMInstrumentCommissionRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryMMInstrumentCommissionRatePtr);
            }
        }

        int TraderApi::ReqQryMMOptionInstrCommRate(QryMMOptionInstrCommRateField^ pQryMMOptionInstrCommRate, int nRequestID)
        {
            IntPtr pQryMMOptionInstrCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryMMOptionInstrCommRateField^>());
            Marshal::StructureToPtr(pQryMMOptionInstrCommRate, pQryMMOptionInstrCommRatePtr, false);
            try
            {
                return _api->ReqQryMMOptionInstrCommRate(static_cast<CThostFtdcQryMMOptionInstrCommRateField*>(pQryMMOptionInstrCommRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryMMOptionInstrCommRatePtr);
            }
        }

        int TraderApi::ReqQryInstrumentOrderCommRate(QryInstrumentOrderCommRateField^ pQryInstrumentOrderCommRate, int nRequestID)
        {
            IntPtr pQryInstrumentOrderCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentOrderCommRateField^>());
            Marshal::StructureToPtr(pQryInstrumentOrderCommRate, pQryInstrumentOrderCommRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentOrderCommRate(static_cast<CThostFtdcQryInstrumentOrderCommRateField*>(pQryInstrumentOrderCommRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInstrumentOrderCommRatePtr);
            }
        }

        int TraderApi::ReqQrySecAgentTradingAccount(QryTradingAccountField^ pQryTradingAccount, int nRequestID)
        {
            IntPtr pQryTradingAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingAccountField^>());
            Marshal::StructureToPtr(pQryTradingAccount, pQryTradingAccountPtr, false);
            try
            {
                return _api->ReqQrySecAgentTradingAccount(static_cast<CThostFtdcQryTradingAccountField*>(pQryTradingAccountPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTradingAccountPtr);
            }
        }

        int TraderApi::ReqQrySecAgentCheckMode(QrySecAgentCheckModeField^ pQrySecAgentCheckMode, int nRequestID)
        {
            IntPtr pQrySecAgentCheckModePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentCheckModeField^>());
            Marshal::StructureToPtr(pQrySecAgentCheckMode, pQrySecAgentCheckModePtr, false);
            try
            {
                return _api->ReqQrySecAgentCheckMode(static_cast<CThostFtdcQrySecAgentCheckModeField*>(pQrySecAgentCheckModePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQrySecAgentCheckModePtr);
            }
        }

        int TraderApi::ReqQrySecAgentTradeInfo(QrySecAgentTradeInfoField^ pQrySecAgentTradeInfo, int nRequestID)
        {
            IntPtr pQrySecAgentTradeInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentTradeInfoField^>());
            Marshal::StructureToPtr(pQrySecAgentTradeInfo, pQrySecAgentTradeInfoPtr, false);
            try
            {
                return _api->ReqQrySecAgentTradeInfo(static_cast<CThostFtdcQrySecAgentTradeInfoField*>(pQrySecAgentTradeInfoPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQrySecAgentTradeInfoPtr);
            }
        }

        int TraderApi::ReqQryOptionInstrTradeCost(QryOptionInstrTradeCostField^ pQryOptionInstrTradeCost, int nRequestID)
        {
            IntPtr pQryOptionInstrTradeCostPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionInstrTradeCostField^>());
            Marshal::StructureToPtr(pQryOptionInstrTradeCost, pQryOptionInstrTradeCostPtr, false);
            try
            {
                return _api->ReqQryOptionInstrTradeCost(static_cast<CThostFtdcQryOptionInstrTradeCostField*>(pQryOptionInstrTradeCostPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryOptionInstrTradeCostPtr);
            }
        }

        int TraderApi::ReqQryOptionInstrCommRate(QryOptionInstrCommRateField^ pQryOptionInstrCommRate, int nRequestID)
        {
            IntPtr pQryOptionInstrCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionInstrCommRateField^>());
            Marshal::StructureToPtr(pQryOptionInstrCommRate, pQryOptionInstrCommRatePtr, false);
            try
            {
                return _api->ReqQryOptionInstrCommRate(static_cast<CThostFtdcQryOptionInstrCommRateField*>(pQryOptionInstrCommRatePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryOptionInstrCommRatePtr);
            }
        }

        int TraderApi::ReqQryExecOrder(QryExecOrderField^ pQryExecOrder, int nRequestID)
        {
            IntPtr pQryExecOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExecOrderField^>());
            Marshal::StructureToPtr(pQryExecOrder, pQryExecOrderPtr, false);
            try
            {
                return _api->ReqQryExecOrder(static_cast<CThostFtdcQryExecOrderField*>(pQryExecOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryExecOrderPtr);
            }
        }

        int TraderApi::ReqQryForQuote(QryForQuoteField^ pQryForQuote, int nRequestID)
        {
            IntPtr pQryForQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryForQuoteField^>());
            Marshal::StructureToPtr(pQryForQuote, pQryForQuotePtr, false);
            try
            {
                return _api->ReqQryForQuote(static_cast<CThostFtdcQryForQuoteField*>(pQryForQuotePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryForQuotePtr);
            }
        }

        int TraderApi::ReqQryQuote(QryQuoteField^ pQryQuote, int nRequestID)
        {
            IntPtr pQryQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryQuoteField^>());
            Marshal::StructureToPtr(pQryQuote, pQryQuotePtr, false);
            try
            {
                return _api->ReqQryQuote(static_cast<CThostFtdcQryQuoteField*>(pQryQuotePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryQuotePtr);
            }
        }

        int TraderApi::ReqQryOptionSelfClose(QryOptionSelfCloseField^ pQryOptionSelfClose, int nRequestID)
        {
            IntPtr pQryOptionSelfClosePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionSelfCloseField^>());
            Marshal::StructureToPtr(pQryOptionSelfClose, pQryOptionSelfClosePtr, false);
            try
            {
                return _api->ReqQryOptionSelfClose(static_cast<CThostFtdcQryOptionSelfCloseField*>(pQryOptionSelfClosePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryOptionSelfClosePtr);
            }
        }

        int TraderApi::ReqQryInvestUnit(QryInvestUnitField^ pQryInvestUnit, int nRequestID)
        {
            IntPtr pQryInvestUnitPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestUnitField^>());
            Marshal::StructureToPtr(pQryInvestUnit, pQryInvestUnitPtr, false);
            try
            {
                return _api->ReqQryInvestUnit(static_cast<CThostFtdcQryInvestUnitField*>(pQryInvestUnitPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryInvestUnitPtr);
            }
        }

        int TraderApi::ReqQryCombInstrumentGuard(QryCombInstrumentGuardField^ pQryCombInstrumentGuard, int nRequestID)
        {
            IntPtr pQryCombInstrumentGuardPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCombInstrumentGuardField^>());
            Marshal::StructureToPtr(pQryCombInstrumentGuard, pQryCombInstrumentGuardPtr, false);
            try
            {
                return _api->ReqQryCombInstrumentGuard(static_cast<CThostFtdcQryCombInstrumentGuardField*>(pQryCombInstrumentGuardPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryCombInstrumentGuardPtr);
            }
        }

        int TraderApi::ReqQryCombAction(QryCombActionField^ pQryCombAction, int nRequestID)
        {
            IntPtr pQryCombActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCombActionField^>());
            Marshal::StructureToPtr(pQryCombAction, pQryCombActionPtr, false);
            try
            {
                return _api->ReqQryCombAction(static_cast<CThostFtdcQryCombActionField*>(pQryCombActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryCombActionPtr);
            }
        }

        int TraderApi::ReqQryTransferSerial(QryTransferSerialField^ pQryTransferSerial, int nRequestID)
        {
            IntPtr pQryTransferSerialPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTransferSerialField^>());
            Marshal::StructureToPtr(pQryTransferSerial, pQryTransferSerialPtr, false);
            try
            {
                return _api->ReqQryTransferSerial(static_cast<CThostFtdcQryTransferSerialField*>(pQryTransferSerialPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTransferSerialPtr);
            }
        }

        int TraderApi::ReqQryAccountregister(QryAccountregisterField^ pQryAccountregister, int nRequestID)
        {
            IntPtr pQryAccountregisterPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryAccountregisterField^>());
            Marshal::StructureToPtr(pQryAccountregister, pQryAccountregisterPtr, false);
            try
            {
                return _api->ReqQryAccountregister(static_cast<CThostFtdcQryAccountregisterField*>(pQryAccountregisterPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryAccountregisterPtr);
            }
        }

        int TraderApi::ReqQryContractBank(QryContractBankField^ pQryContractBank, int nRequestID)
        {
            IntPtr pQryContractBankPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryContractBankField^>());
            Marshal::StructureToPtr(pQryContractBank, pQryContractBankPtr, false);
            try
            {
                return _api->ReqQryContractBank(static_cast<CThostFtdcQryContractBankField*>(pQryContractBankPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryContractBankPtr);
            }
        }

        int TraderApi::ReqQryParkedOrder(QryParkedOrderField^ pQryParkedOrder, int nRequestID)
        {
            IntPtr pQryParkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryParkedOrderField^>());
            Marshal::StructureToPtr(pQryParkedOrder, pQryParkedOrderPtr, false);
            try
            {
                return _api->ReqQryParkedOrder(static_cast<CThostFtdcQryParkedOrderField*>(pQryParkedOrderPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryParkedOrderPtr);
            }
        }

        int TraderApi::ReqQryParkedOrderAction(QryParkedOrderActionField^ pQryParkedOrderAction, int nRequestID)
        {
            IntPtr pQryParkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryParkedOrderActionField^>());
            Marshal::StructureToPtr(pQryParkedOrderAction, pQryParkedOrderActionPtr, false);
            try
            {
                return _api->ReqQryParkedOrderAction(static_cast<CThostFtdcQryParkedOrderActionField*>(pQryParkedOrderActionPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryParkedOrderActionPtr);
            }
        }

        int TraderApi::ReqQryTradingNotice(QryTradingNoticeField^ pQryTradingNotice, int nRequestID)
        {
            IntPtr pQryTradingNoticePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingNoticeField^>());
            Marshal::StructureToPtr(pQryTradingNotice, pQryTradingNoticePtr, false);
            try
            {
                return _api->ReqQryTradingNotice(static_cast<CThostFtdcQryTradingNoticeField*>(pQryTradingNoticePtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryTradingNoticePtr);
            }
        }

        int TraderApi::ReqQryBrokerTradingParams(QryBrokerTradingParamsField^ pQryBrokerTradingParams, int nRequestID)
        {
            IntPtr pQryBrokerTradingParamsPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryBrokerTradingParamsField^>());
            Marshal::StructureToPtr(pQryBrokerTradingParams, pQryBrokerTradingParamsPtr, false);
            try
            {
                return _api->ReqQryBrokerTradingParams(static_cast<CThostFtdcQryBrokerTradingParamsField*>(pQryBrokerTradingParamsPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryBrokerTradingParamsPtr);
            }
        }

        int TraderApi::ReqQryBrokerTradingAlgos(QryBrokerTradingAlgosField^ pQryBrokerTradingAlgos, int nRequestID)
        {
            IntPtr pQryBrokerTradingAlgosPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryBrokerTradingAlgosField^>());
            Marshal::StructureToPtr(pQryBrokerTradingAlgos, pQryBrokerTradingAlgosPtr, false);
            try
            {
                return _api->ReqQryBrokerTradingAlgos(static_cast<CThostFtdcQryBrokerTradingAlgosField*>(pQryBrokerTradingAlgosPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQryBrokerTradingAlgosPtr);
            }
        }

        int TraderApi::ReqQueryCFMMCTradingAccountToken(QueryCFMMCTradingAccountTokenField^ pQueryCFMMCTradingAccountToken, int nRequestID)
        {
            IntPtr pQueryCFMMCTradingAccountTokenPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QueryCFMMCTradingAccountTokenField^>());
            Marshal::StructureToPtr(pQueryCFMMCTradingAccountToken, pQueryCFMMCTradingAccountTokenPtr, false);
            try
            {
                return _api->ReqQueryCFMMCTradingAccountToken(static_cast<CThostFtdcQueryCFMMCTradingAccountTokenField*>(pQueryCFMMCTradingAccountTokenPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pQueryCFMMCTradingAccountTokenPtr);
            }
        }

        int TraderApi::ReqFromBankToFutureByFuture(ReqTransferField^ pReqTransfer, int nRequestID)
        {
            IntPtr pReqTransferPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqTransferField^>());
            Marshal::StructureToPtr(pReqTransfer, pReqTransferPtr, false);
            try
            {
                return _api->ReqFromBankToFutureByFuture(static_cast<CThostFtdcReqTransferField*>(pReqTransferPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqTransferPtr);
            }
        }

        int TraderApi::ReqFromFutureToBankByFuture(ReqTransferField^ pReqTransfer, int nRequestID)
        {
            IntPtr pReqTransferPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqTransferField^>());
            Marshal::StructureToPtr(pReqTransfer, pReqTransferPtr, false);
            try
            {
                return _api->ReqFromFutureToBankByFuture(static_cast<CThostFtdcReqTransferField*>(pReqTransferPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqTransferPtr);
            }
        }

        int TraderApi::ReqQueryBankAccountMoneyByFuture(ReqQueryAccountField^ pReqQueryAccount, int nRequestID)
        {
            IntPtr pReqQueryAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqQueryAccountField^>());
            Marshal::StructureToPtr(pReqQueryAccount, pReqQueryAccountPtr, false);
            try
            {
                return _api->ReqQueryBankAccountMoneyByFuture(static_cast<CThostFtdcReqQueryAccountField*>(pReqQueryAccountPtr.ToPointer()), nRequestID);
            }
            finally
            {
                Marshal::FreeHGlobal(pReqQueryAccountPtr);
            }
        }

        TraderApi::TraderApi() {}

        TraderApi::~TraderApi() {}

#pragma endregion

#pragma region
        void TraderApi::OnFrontConnectedCallback()
        {
            OnFrontConnected();
        }

        void TraderApi::OnFrontDisconnectedCallback(int nReason)
        {
            OnFrontDisconnected(nReason);
        }

        void TraderApi::OnHeartBeatWarningCallback(int nTimeLapse)
        {
            OnHeartBeatWarning(nTimeLapse);
        }

        void TraderApi::OnRspAuthenticateCallback(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspAuthenticateField^ rspAuthenticateField = safe_cast<RspAuthenticateField^>(Marshal::PtrToStructure(IntPtr(pRspAuthenticateField), RspAuthenticateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspAuthenticate(rspAuthenticateField, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspUserLoginCallback(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspUserLoginField^ rspUserLogin = safe_cast<RspUserLoginField^>(Marshal::PtrToStructure(IntPtr(pRspUserLogin), RspUserLoginField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserLogin(rspUserLogin, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspUserLogoutCallback(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            UserLogoutField^ userLogout = safe_cast<UserLogoutField^>(Marshal::PtrToStructure(IntPtr(pUserLogout), UserLogoutField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserLogout(userLogout, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspUserPasswordUpdateCallback(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            UserPasswordUpdateField^ userPasswordUpdate = safe_cast<UserPasswordUpdateField^>(Marshal::PtrToStructure(IntPtr(pUserPasswordUpdate), UserPasswordUpdateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserPasswordUpdate(userPasswordUpdate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspTradingAccountPasswordUpdateCallback(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradingAccountPasswordUpdateField^ tradingAccountPasswordUpdate = safe_cast<TradingAccountPasswordUpdateField^>(Marshal::PtrToStructure(IntPtr(pTradingAccountPasswordUpdate), TradingAccountPasswordUpdateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspTradingAccountPasswordUpdate(tradingAccountPasswordUpdate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspUserAuthMethodCallback(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspUserAuthMethodField^ rspUserAuthMethod = safe_cast<RspUserAuthMethodField^>(Marshal::PtrToStructure(IntPtr(pRspUserAuthMethod), RspUserAuthMethodField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspUserAuthMethod(rspUserAuthMethod, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspGenUserCaptchaCallback(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspGenUserCaptchaField^ rspGenUserCaptcha = safe_cast<RspGenUserCaptchaField^>(Marshal::PtrToStructure(IntPtr(pRspGenUserCaptcha), RspGenUserCaptchaField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspGenUserCaptcha(rspGenUserCaptcha, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspGenUserTextCallback(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspGenUserTextField^ rspGenUserText = safe_cast<RspGenUserTextField^>(Marshal::PtrToStructure(IntPtr(pRspGenUserText), RspGenUserTextField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspGenUserText(rspGenUserText, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspOrderInsertCallback(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputOrderField^ inputOrder = safe_cast<InputOrderField^>(Marshal::PtrToStructure(IntPtr(pInputOrder), InputOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspOrderInsert(inputOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspParkedOrderInsertCallback(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ParkedOrderField^ parkedOrder = safe_cast<ParkedOrderField^>(Marshal::PtrToStructure(IntPtr(pParkedOrder), ParkedOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspParkedOrderInsert(parkedOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspParkedOrderActionCallback(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ParkedOrderActionField^ parkedOrderAction = safe_cast<ParkedOrderActionField^>(Marshal::PtrToStructure(IntPtr(pParkedOrderAction), ParkedOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspParkedOrderAction(parkedOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspOrderActionCallback(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputOrderActionField^ inputOrderAction = safe_cast<InputOrderActionField^>(Marshal::PtrToStructure(IntPtr(pInputOrderAction), InputOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspOrderAction(inputOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQueryMaxOrderVolumeCallback(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            QueryMaxOrderVolumeField^ queryMaxOrderVolume = safe_cast<QueryMaxOrderVolumeField^>(Marshal::PtrToStructure(IntPtr(pQueryMaxOrderVolume), QueryMaxOrderVolumeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQueryMaxOrderVolume(queryMaxOrderVolume, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspSettlementInfoConfirmCallback(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SettlementInfoConfirmField^ settlementInfoConfirm = safe_cast<SettlementInfoConfirmField^>(Marshal::PtrToStructure(IntPtr(pSettlementInfoConfirm), SettlementInfoConfirmField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspSettlementInfoConfirm(settlementInfoConfirm, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspRemoveParkedOrderCallback(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RemoveParkedOrderField^ removeParkedOrder = safe_cast<RemoveParkedOrderField^>(Marshal::PtrToStructure(IntPtr(pRemoveParkedOrder), RemoveParkedOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspRemoveParkedOrder(removeParkedOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspRemoveParkedOrderActionCallback(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RemoveParkedOrderActionField^ removeParkedOrderAction = safe_cast<RemoveParkedOrderActionField^>(Marshal::PtrToStructure(IntPtr(pRemoveParkedOrderAction), RemoveParkedOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspRemoveParkedOrderAction(removeParkedOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspExecOrderInsertCallback(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputExecOrderField^ inputExecOrder = safe_cast<InputExecOrderField^>(Marshal::PtrToStructure(IntPtr(pInputExecOrder), InputExecOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspExecOrderInsert(inputExecOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspExecOrderActionCallback(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputExecOrderActionField^ inputExecOrderAction = safe_cast<InputExecOrderActionField^>(Marshal::PtrToStructure(IntPtr(pInputExecOrderAction), InputExecOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspExecOrderAction(inputExecOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspForQuoteInsertCallback(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputForQuoteField^ inputForQuote = safe_cast<InputForQuoteField^>(Marshal::PtrToStructure(IntPtr(pInputForQuote), InputForQuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspForQuoteInsert(inputForQuote, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQuoteInsertCallback(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputQuoteField^ inputQuote = safe_cast<InputQuoteField^>(Marshal::PtrToStructure(IntPtr(pInputQuote), InputQuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQuoteInsert(inputQuote, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQuoteActionCallback(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputQuoteActionField^ inputQuoteAction = safe_cast<InputQuoteActionField^>(Marshal::PtrToStructure(IntPtr(pInputQuoteAction), InputQuoteActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQuoteAction(inputQuoteAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspBatchOrderActionCallback(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputBatchOrderActionField^ inputBatchOrderAction = safe_cast<InputBatchOrderActionField^>(Marshal::PtrToStructure(IntPtr(pInputBatchOrderAction), InputBatchOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspBatchOrderAction(inputBatchOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspOptionSelfCloseInsertCallback(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputOptionSelfCloseField^ inputOptionSelfClose = safe_cast<InputOptionSelfCloseField^>(Marshal::PtrToStructure(IntPtr(pInputOptionSelfClose), InputOptionSelfCloseField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspOptionSelfCloseInsert(inputOptionSelfClose, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspOptionSelfCloseActionCallback(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputOptionSelfCloseActionField^ inputOptionSelfCloseAction = safe_cast<InputOptionSelfCloseActionField^>(Marshal::PtrToStructure(IntPtr(pInputOptionSelfCloseAction), InputOptionSelfCloseActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspOptionSelfCloseAction(inputOptionSelfCloseAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspCombActionInsertCallback(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InputCombActionField^ inputCombAction = safe_cast<InputCombActionField^>(Marshal::PtrToStructure(IntPtr(pInputCombAction), InputCombActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspCombActionInsert(inputCombAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryOrderCallback(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            OrderField^ order = safe_cast<OrderField^>(Marshal::PtrToStructure(IntPtr(pOrder), OrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryOrder(order, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTradeCallback(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradeField^ trade = safe_cast<TradeField^>(Marshal::PtrToStructure(IntPtr(pTrade), TradeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTrade(trade, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestorPositionCallback(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestorPositionField^ investorPosition = safe_cast<InvestorPositionField^>(Marshal::PtrToStructure(IntPtr(pInvestorPosition), InvestorPositionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestorPosition(investorPosition, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTradingAccountCallback(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradingAccountField^ tradingAccount = safe_cast<TradingAccountField^>(Marshal::PtrToStructure(IntPtr(pTradingAccount), TradingAccountField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTradingAccount(tradingAccount, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestorCallback(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestorField^ investor = safe_cast<InvestorField^>(Marshal::PtrToStructure(IntPtr(pInvestor), InvestorField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestor(investor, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTradingCodeCallback(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradingCodeField^ tradingCode = safe_cast<TradingCodeField^>(Marshal::PtrToStructure(IntPtr(pTradingCode), TradingCodeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTradingCode(tradingCode, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInstrumentMarginRateCallback(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InstrumentMarginRateField^ instrumentMarginRate = safe_cast<InstrumentMarginRateField^>(Marshal::PtrToStructure(IntPtr(pInstrumentMarginRate), InstrumentMarginRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInstrumentMarginRate(instrumentMarginRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInstrumentCommissionRateCallback(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InstrumentCommissionRateField^ instrumentCommissionRate = safe_cast<InstrumentCommissionRateField^>(Marshal::PtrToStructure(IntPtr(pInstrumentCommissionRate), InstrumentCommissionRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInstrumentCommissionRate(instrumentCommissionRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryExchangeCallback(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ExchangeField^ exchange = safe_cast<ExchangeField^>(Marshal::PtrToStructure(IntPtr(pExchange), ExchangeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryExchange(exchange, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryProductCallback(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ProductField^ product = safe_cast<ProductField^>(Marshal::PtrToStructure(IntPtr(pProduct), ProductField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryProduct(product, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInstrumentCallback(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InstrumentField^ instrument = safe_cast<InstrumentField^>(Marshal::PtrToStructure(IntPtr(pInstrument), InstrumentField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInstrument(instrument, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryDepthMarketDataCallback(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            DepthMarketDataField^ depthMarketData = safe_cast<DepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), DepthMarketDataField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryDepthMarketData(depthMarketData, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySettlementInfoCallback(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SettlementInfoField^ settlementInfo = safe_cast<SettlementInfoField^>(Marshal::PtrToStructure(IntPtr(pSettlementInfo), SettlementInfoField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySettlementInfo(settlementInfo, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTransferBankCallback(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TransferBankField^ transferBank = safe_cast<TransferBankField^>(Marshal::PtrToStructure(IntPtr(pTransferBank), TransferBankField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTransferBank(transferBank, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestorPositionDetailCallback(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestorPositionDetailField^ investorPositionDetail = safe_cast<InvestorPositionDetailField^>(Marshal::PtrToStructure(IntPtr(pInvestorPositionDetail), InvestorPositionDetailField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestorPositionDetail(investorPositionDetail, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryNoticeCallback(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            NoticeField^ notice = safe_cast<NoticeField^>(Marshal::PtrToStructure(IntPtr(pNotice), NoticeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryNotice(notice, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySettlementInfoConfirmCallback(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SettlementInfoConfirmField^ settlementInfoConfirm = safe_cast<SettlementInfoConfirmField^>(Marshal::PtrToStructure(IntPtr(pSettlementInfoConfirm), SettlementInfoConfirmField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySettlementInfoConfirm(settlementInfoConfirm, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestorPositionCombineDetailCallback(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestorPositionCombineDetailField^ investorPositionCombineDetail = safe_cast<InvestorPositionCombineDetailField^>(Marshal::PtrToStructure(IntPtr(pInvestorPositionCombineDetail), InvestorPositionCombineDetailField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestorPositionCombineDetail(investorPositionCombineDetail, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryCFMMCTradingAccountKeyCallback(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            CFMMCTradingAccountKeyField^ cFMMCTradingAccountKey = safe_cast<CFMMCTradingAccountKeyField^>(Marshal::PtrToStructure(IntPtr(pCFMMCTradingAccountKey), CFMMCTradingAccountKeyField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryCFMMCTradingAccountKey(cFMMCTradingAccountKey, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryEWarrantOffsetCallback(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            EWarrantOffsetField^ eWarrantOffset = safe_cast<EWarrantOffsetField^>(Marshal::PtrToStructure(IntPtr(pEWarrantOffset), EWarrantOffsetField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryEWarrantOffset(eWarrantOffset, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestorProductGroupMarginCallback(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestorProductGroupMarginField^ investorProductGroupMargin = safe_cast<InvestorProductGroupMarginField^>(Marshal::PtrToStructure(IntPtr(pInvestorProductGroupMargin), InvestorProductGroupMarginField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestorProductGroupMargin(investorProductGroupMargin, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryExchangeMarginRateCallback(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ExchangeMarginRateField^ exchangeMarginRate = safe_cast<ExchangeMarginRateField^>(Marshal::PtrToStructure(IntPtr(pExchangeMarginRate), ExchangeMarginRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryExchangeMarginRate(exchangeMarginRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryExchangeMarginRateAdjustCallback(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ExchangeMarginRateAdjustField^ exchangeMarginRateAdjust = safe_cast<ExchangeMarginRateAdjustField^>(Marshal::PtrToStructure(IntPtr(pExchangeMarginRateAdjust), ExchangeMarginRateAdjustField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryExchangeMarginRateAdjust(exchangeMarginRateAdjust, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryExchangeRateCallback(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ExchangeRateField^ exchangeRate = safe_cast<ExchangeRateField^>(Marshal::PtrToStructure(IntPtr(pExchangeRate), ExchangeRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryExchangeRate(exchangeRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySecAgentACIDMapCallback(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SecAgentACIDMapField^ secAgentACIDMap = safe_cast<SecAgentACIDMapField^>(Marshal::PtrToStructure(IntPtr(pSecAgentACIDMap), SecAgentACIDMapField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySecAgentACIDMap(secAgentACIDMap, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryProductExchRateCallback(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ProductExchRateField^ productExchRate = safe_cast<ProductExchRateField^>(Marshal::PtrToStructure(IntPtr(pProductExchRate), ProductExchRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryProductExchRate(productExchRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryProductGroupCallback(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ProductGroupField^ productGroup = safe_cast<ProductGroupField^>(Marshal::PtrToStructure(IntPtr(pProductGroup), ProductGroupField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryProductGroup(productGroup, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryMMInstrumentCommissionRateCallback(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            MMInstrumentCommissionRateField^ mMInstrumentCommissionRate = safe_cast<MMInstrumentCommissionRateField^>(Marshal::PtrToStructure(IntPtr(pMMInstrumentCommissionRate), MMInstrumentCommissionRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryMMInstrumentCommissionRate(mMInstrumentCommissionRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryMMOptionInstrCommRateCallback(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            MMOptionInstrCommRateField^ mMOptionInstrCommRate = safe_cast<MMOptionInstrCommRateField^>(Marshal::PtrToStructure(IntPtr(pMMOptionInstrCommRate), MMOptionInstrCommRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryMMOptionInstrCommRate(mMOptionInstrCommRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInstrumentOrderCommRateCallback(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InstrumentOrderCommRateField^ instrumentOrderCommRate = safe_cast<InstrumentOrderCommRateField^>(Marshal::PtrToStructure(IntPtr(pInstrumentOrderCommRate), InstrumentOrderCommRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInstrumentOrderCommRate(instrumentOrderCommRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySecAgentTradingAccountCallback(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradingAccountField^ tradingAccount = safe_cast<TradingAccountField^>(Marshal::PtrToStructure(IntPtr(pTradingAccount), TradingAccountField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySecAgentTradingAccount(tradingAccount, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySecAgentCheckModeCallback(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SecAgentCheckModeField^ secAgentCheckMode = safe_cast<SecAgentCheckModeField^>(Marshal::PtrToStructure(IntPtr(pSecAgentCheckMode), SecAgentCheckModeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySecAgentCheckMode(secAgentCheckMode, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQrySecAgentTradeInfoCallback(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            SecAgentTradeInfoField^ secAgentTradeInfo = safe_cast<SecAgentTradeInfoField^>(Marshal::PtrToStructure(IntPtr(pSecAgentTradeInfo), SecAgentTradeInfoField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQrySecAgentTradeInfo(secAgentTradeInfo, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryOptionInstrTradeCostCallback(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            OptionInstrTradeCostField^ optionInstrTradeCost = safe_cast<OptionInstrTradeCostField^>(Marshal::PtrToStructure(IntPtr(pOptionInstrTradeCost), OptionInstrTradeCostField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryOptionInstrTradeCost(optionInstrTradeCost, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryOptionInstrCommRateCallback(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            OptionInstrCommRateField^ optionInstrCommRate = safe_cast<OptionInstrCommRateField^>(Marshal::PtrToStructure(IntPtr(pOptionInstrCommRate), OptionInstrCommRateField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryOptionInstrCommRate(optionInstrCommRate, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryExecOrderCallback(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ExecOrderField^ execOrder = safe_cast<ExecOrderField^>(Marshal::PtrToStructure(IntPtr(pExecOrder), ExecOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryExecOrder(execOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryForQuoteCallback(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ForQuoteField^ forQuote = safe_cast<ForQuoteField^>(Marshal::PtrToStructure(IntPtr(pForQuote), ForQuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryForQuote(forQuote, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryQuoteCallback(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            QuoteField^ quote = safe_cast<QuoteField^>(Marshal::PtrToStructure(IntPtr(pQuote), QuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryQuote(quote, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryOptionSelfCloseCallback(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            OptionSelfCloseField^ optionSelfClose = safe_cast<OptionSelfCloseField^>(Marshal::PtrToStructure(IntPtr(pOptionSelfClose), OptionSelfCloseField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryOptionSelfClose(optionSelfClose, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryInvestUnitCallback(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            InvestUnitField^ investUnit = safe_cast<InvestUnitField^>(Marshal::PtrToStructure(IntPtr(pInvestUnit), InvestUnitField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryInvestUnit(investUnit, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryCombInstrumentGuardCallback(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            CombInstrumentGuardField^ combInstrumentGuard = safe_cast<CombInstrumentGuardField^>(Marshal::PtrToStructure(IntPtr(pCombInstrumentGuard), CombInstrumentGuardField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryCombInstrumentGuard(combInstrumentGuard, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryCombActionCallback(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            CombActionField^ combAction = safe_cast<CombActionField^>(Marshal::PtrToStructure(IntPtr(pCombAction), CombActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryCombAction(combAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTransferSerialCallback(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TransferSerialField^ transferSerial = safe_cast<TransferSerialField^>(Marshal::PtrToStructure(IntPtr(pTransferSerial), TransferSerialField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTransferSerial(transferSerial, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryAccountregisterCallback(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            AccountregisterField^ accountregister = safe_cast<AccountregisterField^>(Marshal::PtrToStructure(IntPtr(pAccountregister), AccountregisterField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryAccountregister(accountregister, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspErrorCallback(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspError(rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRtnOrderCallback(CThostFtdcOrderField* pOrder)
        {
            OrderField^ order = safe_cast<OrderField^>(Marshal::PtrToStructure(IntPtr(pOrder), OrderField::typeid));
            OnRtnOrder(order);
        }

        void TraderApi::OnRtnTradeCallback(CThostFtdcTradeField* pTrade)
        {
            TradeField^ trade = safe_cast<TradeField^>(Marshal::PtrToStructure(IntPtr(pTrade), TradeField::typeid));
            OnRtnTrade(trade);
        }

        void TraderApi::OnErrRtnOrderInsertCallback(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo)
        {
            InputOrderField^ inputOrder = safe_cast<InputOrderField^>(Marshal::PtrToStructure(IntPtr(pInputOrder), InputOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnOrderInsert(inputOrder, rspInfo);
        }

        void TraderApi::OnErrRtnOrderActionCallback(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo)
        {
            OrderActionField^ orderAction = safe_cast<OrderActionField^>(Marshal::PtrToStructure(IntPtr(pOrderAction), OrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnOrderAction(orderAction, rspInfo);
        }

        void TraderApi::OnRtnInstrumentStatusCallback(CThostFtdcInstrumentStatusField* pInstrumentStatus)
        {
            InstrumentStatusField^ instrumentStatus = safe_cast<InstrumentStatusField^>(Marshal::PtrToStructure(IntPtr(pInstrumentStatus), InstrumentStatusField::typeid));
            OnRtnInstrumentStatus(instrumentStatus);
        }

        void TraderApi::OnRtnBulletinCallback(CThostFtdcBulletinField* pBulletin)
        {
            BulletinField^ bulletin = safe_cast<BulletinField^>(Marshal::PtrToStructure(IntPtr(pBulletin), BulletinField::typeid));
            OnRtnBulletin(bulletin);
        }

        void TraderApi::OnRtnTradingNoticeCallback(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo)
        {
            TradingNoticeInfoField^ tradingNoticeInfo = safe_cast<TradingNoticeInfoField^>(Marshal::PtrToStructure(IntPtr(pTradingNoticeInfo), TradingNoticeInfoField::typeid));
            OnRtnTradingNotice(tradingNoticeInfo);
        }

        void TraderApi::OnRtnErrorConditionalOrderCallback(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder)
        {
            ErrorConditionalOrderField^ errorConditionalOrder = safe_cast<ErrorConditionalOrderField^>(Marshal::PtrToStructure(IntPtr(pErrorConditionalOrder), ErrorConditionalOrderField::typeid));
            OnRtnErrorConditionalOrder(errorConditionalOrder);
        }

        void TraderApi::OnRtnExecOrderCallback(CThostFtdcExecOrderField* pExecOrder)
        {
            ExecOrderField^ execOrder = safe_cast<ExecOrderField^>(Marshal::PtrToStructure(IntPtr(pExecOrder), ExecOrderField::typeid));
            OnRtnExecOrder(execOrder);
        }

        void TraderApi::OnErrRtnExecOrderInsertCallback(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo)
        {
            InputExecOrderField^ inputExecOrder = safe_cast<InputExecOrderField^>(Marshal::PtrToStructure(IntPtr(pInputExecOrder), InputExecOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnExecOrderInsert(inputExecOrder, rspInfo);
        }

        void TraderApi::OnErrRtnExecOrderActionCallback(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo)
        {
            ExecOrderActionField^ execOrderAction = safe_cast<ExecOrderActionField^>(Marshal::PtrToStructure(IntPtr(pExecOrderAction), ExecOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnExecOrderAction(execOrderAction, rspInfo);
        }

        void TraderApi::OnErrRtnForQuoteInsertCallback(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo)
        {
            InputForQuoteField^ inputForQuote = safe_cast<InputForQuoteField^>(Marshal::PtrToStructure(IntPtr(pInputForQuote), InputForQuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnForQuoteInsert(inputForQuote, rspInfo);
        }

        void TraderApi::OnRtnQuoteCallback(CThostFtdcQuoteField* pQuote)
        {
            QuoteField^ quote = safe_cast<QuoteField^>(Marshal::PtrToStructure(IntPtr(pQuote), QuoteField::typeid));
            OnRtnQuote(quote);
        }

        void TraderApi::OnErrRtnQuoteInsertCallback(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo)
        {
            InputQuoteField^ inputQuote = safe_cast<InputQuoteField^>(Marshal::PtrToStructure(IntPtr(pInputQuote), InputQuoteField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnQuoteInsert(inputQuote, rspInfo);
        }

        void TraderApi::OnErrRtnQuoteActionCallback(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo)
        {
            QuoteActionField^ quoteAction = safe_cast<QuoteActionField^>(Marshal::PtrToStructure(IntPtr(pQuoteAction), QuoteActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnQuoteAction(quoteAction, rspInfo);
        }

        void TraderApi::OnRtnForQuoteRspCallback(CThostFtdcForQuoteRspField* pForQuoteRsp)
        {
            ForQuoteRspField^ forQuoteRsp = safe_cast<ForQuoteRspField^>(Marshal::PtrToStructure(IntPtr(pForQuoteRsp), ForQuoteRspField::typeid));
            OnRtnForQuoteRsp(forQuoteRsp);
        }

        void TraderApi::OnRtnCFMMCTradingAccountTokenCallback(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken)
        {
            CFMMCTradingAccountTokenField^ cFMMCTradingAccountToken = safe_cast<CFMMCTradingAccountTokenField^>(Marshal::PtrToStructure(IntPtr(pCFMMCTradingAccountToken), CFMMCTradingAccountTokenField::typeid));
            OnRtnCFMMCTradingAccountToken(cFMMCTradingAccountToken);
        }

        void TraderApi::OnErrRtnBatchOrderActionCallback(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo)
        {
            BatchOrderActionField^ batchOrderAction = safe_cast<BatchOrderActionField^>(Marshal::PtrToStructure(IntPtr(pBatchOrderAction), BatchOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnBatchOrderAction(batchOrderAction, rspInfo);
        }

        void TraderApi::OnRtnOptionSelfCloseCallback(CThostFtdcOptionSelfCloseField* pOptionSelfClose)
        {
            OptionSelfCloseField^ optionSelfClose = safe_cast<OptionSelfCloseField^>(Marshal::PtrToStructure(IntPtr(pOptionSelfClose), OptionSelfCloseField::typeid));
            OnRtnOptionSelfClose(optionSelfClose);
        }

        void TraderApi::OnErrRtnOptionSelfCloseInsertCallback(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo)
        {
            InputOptionSelfCloseField^ inputOptionSelfClose = safe_cast<InputOptionSelfCloseField^>(Marshal::PtrToStructure(IntPtr(pInputOptionSelfClose), InputOptionSelfCloseField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnOptionSelfCloseInsert(inputOptionSelfClose, rspInfo);
        }

        void TraderApi::OnErrRtnOptionSelfCloseActionCallback(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo)
        {
            OptionSelfCloseActionField^ optionSelfCloseAction = safe_cast<OptionSelfCloseActionField^>(Marshal::PtrToStructure(IntPtr(pOptionSelfCloseAction), OptionSelfCloseActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnOptionSelfCloseAction(optionSelfCloseAction, rspInfo);
        }

        void TraderApi::OnRtnCombActionCallback(CThostFtdcCombActionField* pCombAction)
        {
            CombActionField^ combAction = safe_cast<CombActionField^>(Marshal::PtrToStructure(IntPtr(pCombAction), CombActionField::typeid));
            OnRtnCombAction(combAction);
        }

        void TraderApi::OnErrRtnCombActionInsertCallback(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo)
        {
            InputCombActionField^ inputCombAction = safe_cast<InputCombActionField^>(Marshal::PtrToStructure(IntPtr(pInputCombAction), InputCombActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnCombActionInsert(inputCombAction, rspInfo);
        }

        void TraderApi::OnRspQryContractBankCallback(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ContractBankField^ contractBank = safe_cast<ContractBankField^>(Marshal::PtrToStructure(IntPtr(pContractBank), ContractBankField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryContractBank(contractBank, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryParkedOrderCallback(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ParkedOrderField^ parkedOrder = safe_cast<ParkedOrderField^>(Marshal::PtrToStructure(IntPtr(pParkedOrder), ParkedOrderField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryParkedOrder(parkedOrder, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryParkedOrderActionCallback(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ParkedOrderActionField^ parkedOrderAction = safe_cast<ParkedOrderActionField^>(Marshal::PtrToStructure(IntPtr(pParkedOrderAction), ParkedOrderActionField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryParkedOrderAction(parkedOrderAction, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryTradingNoticeCallback(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            TradingNoticeField^ tradingNotice = safe_cast<TradingNoticeField^>(Marshal::PtrToStructure(IntPtr(pTradingNotice), TradingNoticeField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryTradingNotice(tradingNotice, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryBrokerTradingParamsCallback(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            BrokerTradingParamsField^ brokerTradingParams = safe_cast<BrokerTradingParamsField^>(Marshal::PtrToStructure(IntPtr(pBrokerTradingParams), BrokerTradingParamsField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryBrokerTradingParams(brokerTradingParams, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQryBrokerTradingAlgosCallback(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            BrokerTradingAlgosField^ brokerTradingAlgos = safe_cast<BrokerTradingAlgosField^>(Marshal::PtrToStructure(IntPtr(pBrokerTradingAlgos), BrokerTradingAlgosField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQryBrokerTradingAlgos(brokerTradingAlgos, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQueryCFMMCTradingAccountTokenCallback(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            QueryCFMMCTradingAccountTokenField^ queryCFMMCTradingAccountToken = safe_cast<QueryCFMMCTradingAccountTokenField^>(Marshal::PtrToStructure(IntPtr(pQueryCFMMCTradingAccountToken), QueryCFMMCTradingAccountTokenField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQueryCFMMCTradingAccountToken(queryCFMMCTradingAccountToken, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRtnFromBankToFutureByBankCallback(CThostFtdcRspTransferField* pRspTransfer)
        {
            RspTransferField^ rspTransfer = safe_cast<RspTransferField^>(Marshal::PtrToStructure(IntPtr(pRspTransfer), RspTransferField::typeid));
            OnRtnFromBankToFutureByBank(rspTransfer);
        }

        void TraderApi::OnRtnFromFutureToBankByBankCallback(CThostFtdcRspTransferField* pRspTransfer)
        {
            RspTransferField^ rspTransfer = safe_cast<RspTransferField^>(Marshal::PtrToStructure(IntPtr(pRspTransfer), RspTransferField::typeid));
            OnRtnFromFutureToBankByBank(rspTransfer);
        }

        void TraderApi::OnRtnRepealFromBankToFutureByBankCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromBankToFutureByBank(rspRepeal);
        }

        void TraderApi::OnRtnRepealFromFutureToBankByBankCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromFutureToBankByBank(rspRepeal);
        }

        void TraderApi::OnRtnFromBankToFutureByFutureCallback(CThostFtdcRspTransferField* pRspTransfer)
        {
            RspTransferField^ rspTransfer = safe_cast<RspTransferField^>(Marshal::PtrToStructure(IntPtr(pRspTransfer), RspTransferField::typeid));
            OnRtnFromBankToFutureByFuture(rspTransfer);
        }

        void TraderApi::OnRtnFromFutureToBankByFutureCallback(CThostFtdcRspTransferField* pRspTransfer)
        {
            RspTransferField^ rspTransfer = safe_cast<RspTransferField^>(Marshal::PtrToStructure(IntPtr(pRspTransfer), RspTransferField::typeid));
            OnRtnFromFutureToBankByFuture(rspTransfer);
        }

        void TraderApi::OnRtnRepealFromBankToFutureByFutureManualCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromBankToFutureByFutureManual(rspRepeal);
        }

        void TraderApi::OnRtnRepealFromFutureToBankByFutureManualCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromFutureToBankByFutureManual(rspRepeal);
        }

        void TraderApi::OnRtnQueryBankBalanceByFutureCallback(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount)
        {
            NotifyQueryAccountField^ notifyQueryAccount = safe_cast<NotifyQueryAccountField^>(Marshal::PtrToStructure(IntPtr(pNotifyQueryAccount), NotifyQueryAccountField::typeid));
            OnRtnQueryBankBalanceByFuture(notifyQueryAccount);
        }

        void TraderApi::OnErrRtnBankToFutureByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
        {
            ReqTransferField^ reqTransfer = safe_cast<ReqTransferField^>(Marshal::PtrToStructure(IntPtr(pReqTransfer), ReqTransferField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnBankToFutureByFuture(reqTransfer, rspInfo);
        }

        void TraderApi::OnErrRtnFutureToBankByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
        {
            ReqTransferField^ reqTransfer = safe_cast<ReqTransferField^>(Marshal::PtrToStructure(IntPtr(pReqTransfer), ReqTransferField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnFutureToBankByFuture(reqTransfer, rspInfo);
        }

        void TraderApi::OnErrRtnRepealBankToFutureByFutureManualCallback(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
        {
            ReqRepealField^ reqRepeal = safe_cast<ReqRepealField^>(Marshal::PtrToStructure(IntPtr(pReqRepeal), ReqRepealField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnRepealBankToFutureByFutureManual(reqRepeal, rspInfo);
        }

        void TraderApi::OnErrRtnRepealFutureToBankByFutureManualCallback(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
        {
            ReqRepealField^ reqRepeal = safe_cast<ReqRepealField^>(Marshal::PtrToStructure(IntPtr(pReqRepeal), ReqRepealField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnRepealFutureToBankByFutureManual(reqRepeal, rspInfo);
        }

        void TraderApi::OnErrRtnQueryBankBalanceByFutureCallback(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo)
        {
            ReqQueryAccountField^ reqQueryAccount = safe_cast<ReqQueryAccountField^>(Marshal::PtrToStructure(IntPtr(pReqQueryAccount), ReqQueryAccountField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnErrRtnQueryBankBalanceByFuture(reqQueryAccount, rspInfo);
        }

        void TraderApi::OnRtnRepealFromBankToFutureByFutureCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromBankToFutureByFuture(rspRepeal);
        }

        void TraderApi::OnRtnRepealFromFutureToBankByFutureCallback(CThostFtdcRspRepealField* pRspRepeal)
        {
            RspRepealField^ rspRepeal = safe_cast<RspRepealField^>(Marshal::PtrToStructure(IntPtr(pRspRepeal), RspRepealField::typeid));
            OnRtnRepealFromFutureToBankByFuture(rspRepeal);
        }

        void TraderApi::OnRspFromBankToFutureByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ReqTransferField^ reqTransfer = safe_cast<ReqTransferField^>(Marshal::PtrToStructure(IntPtr(pReqTransfer), ReqTransferField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspFromBankToFutureByFuture(reqTransfer, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspFromFutureToBankByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ReqTransferField^ reqTransfer = safe_cast<ReqTransferField^>(Marshal::PtrToStructure(IntPtr(pReqTransfer), ReqTransferField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspFromFutureToBankByFuture(reqTransfer, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRspQueryBankAccountMoneyByFutureCallback(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
        {
            ReqQueryAccountField^ reqQueryAccount = safe_cast<ReqQueryAccountField^>(Marshal::PtrToStructure(IntPtr(pReqQueryAccount), ReqQueryAccountField::typeid));
            RspInfoField^ rspInfo = safe_cast<RspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), RspInfoField::typeid));
            OnRspQueryBankAccountMoneyByFuture(reqQueryAccount, rspInfo, nRequestID, bIsLast);
        }

        void TraderApi::OnRtnOpenAccountByBankCallback(CThostFtdcOpenAccountField* pOpenAccount)
        {
            OpenAccountField^ openAccount = safe_cast<OpenAccountField^>(Marshal::PtrToStructure(IntPtr(pOpenAccount), OpenAccountField::typeid));
            OnRtnOpenAccountByBank(openAccount);
        }

        void TraderApi::OnRtnCancelAccountByBankCallback(CThostFtdcCancelAccountField* pCancelAccount)
        {
            CancelAccountField^ cancelAccount = safe_cast<CancelAccountField^>(Marshal::PtrToStructure(IntPtr(pCancelAccount), CancelAccountField::typeid));
            OnRtnCancelAccountByBank(cancelAccount);
        }

        void TraderApi::OnRtnChangeAccountByBankCallback(CThostFtdcChangeAccountField* pChangeAccount)
        {
            ChangeAccountField^ changeAccount = safe_cast<ChangeAccountField^>(Marshal::PtrToStructure(IntPtr(pChangeAccount), ChangeAccountField::typeid));
            OnRtnChangeAccountByBank(changeAccount);
        }

#pragma endregion
    }
}
