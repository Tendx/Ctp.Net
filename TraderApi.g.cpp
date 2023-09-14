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

        void TraderApi::RegisterFront(String^ frontAddress)
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

        void TraderApi::RegisterNameServer(String^ nsAddress)
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

        void TraderApi::RegisterFensUserInfo(FensUserInfoField^ fensUserInfo)
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

        void TraderApi::SubscribePrivateTopic(RESUME_TYPE resumeType)
        {
            return _api->SubscribePrivateTopic((THOST_TE_RESUME_TYPE)resumeType);
        }

        void TraderApi::SubscribePublicTopic(RESUME_TYPE resumeType)
        {
            return _api->SubscribePublicTopic((THOST_TE_RESUME_TYPE)resumeType);
        }

        int TraderApi::ReqAuthenticate(ReqAuthenticateField^ reqAuthenticateField, int requestID)
        {
            IntPtr reqAuthenticateFieldPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqAuthenticateField^>());
            Marshal::StructureToPtr(reqAuthenticateField, reqAuthenticateFieldPtr, false);
            try
            {
                return _api->ReqAuthenticate(static_cast<CThostFtdcReqAuthenticateField*>(reqAuthenticateFieldPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqAuthenticateFieldPtr);
            }
        }

        int TraderApi::RegisterUserSystemInfo(UserSystemInfoField^ userSystemInfo)
        {
            IntPtr userSystemInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserSystemInfoField^>());
            Marshal::StructureToPtr(userSystemInfo, userSystemInfoPtr, false);
            try
            {
                return _api->RegisterUserSystemInfo(static_cast<CThostFtdcUserSystemInfoField*>(userSystemInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(userSystemInfoPtr);
            }
        }

        int TraderApi::SubmitUserSystemInfo(UserSystemInfoField^ userSystemInfo)
        {
            IntPtr userSystemInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserSystemInfoField^>());
            Marshal::StructureToPtr(userSystemInfo, userSystemInfoPtr, false);
            try
            {
                return _api->SubmitUserSystemInfo(static_cast<CThostFtdcUserSystemInfoField*>(userSystemInfoPtr.ToPointer()));
            }
            finally
            {
                Marshal::FreeHGlobal(userSystemInfoPtr);
            }
        }

        int TraderApi::ReqUserLogin(ReqUserLoginField^ reqUserLoginField, int requestID)
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

        int TraderApi::ReqUserLogout(UserLogoutField^ userLogout, int requestID)
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

        int TraderApi::ReqUserPasswordUpdate(UserPasswordUpdateField^ userPasswordUpdate, int requestID)
        {
            IntPtr userPasswordUpdatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<UserPasswordUpdateField^>());
            Marshal::StructureToPtr(userPasswordUpdate, userPasswordUpdatePtr, false);
            try
            {
                return _api->ReqUserPasswordUpdate(static_cast<CThostFtdcUserPasswordUpdateField*>(userPasswordUpdatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(userPasswordUpdatePtr);
            }
        }

        int TraderApi::ReqTradingAccountPasswordUpdate(TradingAccountPasswordUpdateField^ tradingAccountPasswordUpdate, int requestID)
        {
            IntPtr tradingAccountPasswordUpdatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<TradingAccountPasswordUpdateField^>());
            Marshal::StructureToPtr(tradingAccountPasswordUpdate, tradingAccountPasswordUpdatePtr, false);
            try
            {
                return _api->ReqTradingAccountPasswordUpdate(static_cast<CThostFtdcTradingAccountPasswordUpdateField*>(tradingAccountPasswordUpdatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(tradingAccountPasswordUpdatePtr);
            }
        }

        int TraderApi::ReqUserAuthMethod(ReqUserAuthMethodField^ reqUserAuthMethod, int requestID)
        {
            IntPtr reqUserAuthMethodPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserAuthMethodField^>());
            Marshal::StructureToPtr(reqUserAuthMethod, reqUserAuthMethodPtr, false);
            try
            {
                return _api->ReqUserAuthMethod(static_cast<CThostFtdcReqUserAuthMethodField*>(reqUserAuthMethodPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqUserAuthMethodPtr);
            }
        }

        int TraderApi::ReqGenUserCaptcha(ReqGenUserCaptchaField^ reqGenUserCaptcha, int requestID)
        {
            IntPtr reqGenUserCaptchaPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqGenUserCaptchaField^>());
            Marshal::StructureToPtr(reqGenUserCaptcha, reqGenUserCaptchaPtr, false);
            try
            {
                return _api->ReqGenUserCaptcha(static_cast<CThostFtdcReqGenUserCaptchaField*>(reqGenUserCaptchaPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqGenUserCaptchaPtr);
            }
        }

        int TraderApi::ReqGenUserText(ReqGenUserTextField^ reqGenUserText, int requestID)
        {
            IntPtr reqGenUserTextPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqGenUserTextField^>());
            Marshal::StructureToPtr(reqGenUserText, reqGenUserTextPtr, false);
            try
            {
                return _api->ReqGenUserText(static_cast<CThostFtdcReqGenUserTextField*>(reqGenUserTextPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqGenUserTextPtr);
            }
        }

        int TraderApi::ReqUserLoginWithCaptcha(ReqUserLoginWithCaptchaField^ reqUserLoginWithCaptcha, int requestID)
        {
            IntPtr reqUserLoginWithCaptchaPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithCaptchaField^>());
            Marshal::StructureToPtr(reqUserLoginWithCaptcha, reqUserLoginWithCaptchaPtr, false);
            try
            {
                return _api->ReqUserLoginWithCaptcha(static_cast<CThostFtdcReqUserLoginWithCaptchaField*>(reqUserLoginWithCaptchaPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqUserLoginWithCaptchaPtr);
            }
        }

        int TraderApi::ReqUserLoginWithText(ReqUserLoginWithTextField^ reqUserLoginWithText, int requestID)
        {
            IntPtr reqUserLoginWithTextPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithTextField^>());
            Marshal::StructureToPtr(reqUserLoginWithText, reqUserLoginWithTextPtr, false);
            try
            {
                return _api->ReqUserLoginWithText(static_cast<CThostFtdcReqUserLoginWithTextField*>(reqUserLoginWithTextPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqUserLoginWithTextPtr);
            }
        }

        int TraderApi::ReqUserLoginWithOTP(ReqUserLoginWithOTPField^ reqUserLoginWithOTP, int requestID)
        {
            IntPtr reqUserLoginWithOTPPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqUserLoginWithOTPField^>());
            Marshal::StructureToPtr(reqUserLoginWithOTP, reqUserLoginWithOTPPtr, false);
            try
            {
                return _api->ReqUserLoginWithOTP(static_cast<CThostFtdcReqUserLoginWithOTPField*>(reqUserLoginWithOTPPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqUserLoginWithOTPPtr);
            }
        }

        int TraderApi::ReqOrderInsert(InputOrderField^ inputOrder, int requestID)
        {
            IntPtr inputOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOrderField^>());
            Marshal::StructureToPtr(inputOrder, inputOrderPtr, false);
            try
            {
                return _api->ReqOrderInsert(static_cast<CThostFtdcInputOrderField*>(inputOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputOrderPtr);
            }
        }

        int TraderApi::ReqParkedOrderInsert(ParkedOrderField^ parkedOrder, int requestID)
        {
            IntPtr parkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ParkedOrderField^>());
            Marshal::StructureToPtr(parkedOrder, parkedOrderPtr, false);
            try
            {
                return _api->ReqParkedOrderInsert(static_cast<CThostFtdcParkedOrderField*>(parkedOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(parkedOrderPtr);
            }
        }

        int TraderApi::ReqParkedOrderAction(ParkedOrderActionField^ parkedOrderAction, int requestID)
        {
            IntPtr parkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ParkedOrderActionField^>());
            Marshal::StructureToPtr(parkedOrderAction, parkedOrderActionPtr, false);
            try
            {
                return _api->ReqParkedOrderAction(static_cast<CThostFtdcParkedOrderActionField*>(parkedOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(parkedOrderActionPtr);
            }
        }

        int TraderApi::ReqOrderAction(InputOrderActionField^ inputOrderAction, int requestID)
        {
            IntPtr inputOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOrderActionField^>());
            Marshal::StructureToPtr(inputOrderAction, inputOrderActionPtr, false);
            try
            {
                return _api->ReqOrderAction(static_cast<CThostFtdcInputOrderActionField*>(inputOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputOrderActionPtr);
            }
        }

        int TraderApi::ReqQueryMaxOrderVolume(QueryMaxOrderVolumeField^ queryMaxOrderVolume, int requestID)
        {
            IntPtr queryMaxOrderVolumePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QueryMaxOrderVolumeField^>());
            Marshal::StructureToPtr(queryMaxOrderVolume, queryMaxOrderVolumePtr, false);
            try
            {
                return _api->ReqQueryMaxOrderVolume(static_cast<CThostFtdcQueryMaxOrderVolumeField*>(queryMaxOrderVolumePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(queryMaxOrderVolumePtr);
            }
        }

        int TraderApi::ReqSettlementInfoConfirm(SettlementInfoConfirmField^ settlementInfoConfirm, int requestID)
        {
            IntPtr settlementInfoConfirmPtr = Marshal::AllocHGlobal(Marshal::SizeOf<SettlementInfoConfirmField^>());
            Marshal::StructureToPtr(settlementInfoConfirm, settlementInfoConfirmPtr, false);
            try
            {
                return _api->ReqSettlementInfoConfirm(static_cast<CThostFtdcSettlementInfoConfirmField*>(settlementInfoConfirmPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(settlementInfoConfirmPtr);
            }
        }

        int TraderApi::ReqRemoveParkedOrder(RemoveParkedOrderField^ removeParkedOrder, int requestID)
        {
            IntPtr removeParkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<RemoveParkedOrderField^>());
            Marshal::StructureToPtr(removeParkedOrder, removeParkedOrderPtr, false);
            try
            {
                return _api->ReqRemoveParkedOrder(static_cast<CThostFtdcRemoveParkedOrderField*>(removeParkedOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(removeParkedOrderPtr);
            }
        }

        int TraderApi::ReqRemoveParkedOrderAction(RemoveParkedOrderActionField^ removeParkedOrderAction, int requestID)
        {
            IntPtr removeParkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<RemoveParkedOrderActionField^>());
            Marshal::StructureToPtr(removeParkedOrderAction, removeParkedOrderActionPtr, false);
            try
            {
                return _api->ReqRemoveParkedOrderAction(static_cast<CThostFtdcRemoveParkedOrderActionField*>(removeParkedOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(removeParkedOrderActionPtr);
            }
        }

        int TraderApi::ReqExecOrderInsert(InputExecOrderField^ inputExecOrder, int requestID)
        {
            IntPtr inputExecOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputExecOrderField^>());
            Marshal::StructureToPtr(inputExecOrder, inputExecOrderPtr, false);
            try
            {
                return _api->ReqExecOrderInsert(static_cast<CThostFtdcInputExecOrderField*>(inputExecOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputExecOrderPtr);
            }
        }

        int TraderApi::ReqExecOrderAction(InputExecOrderActionField^ inputExecOrderAction, int requestID)
        {
            IntPtr inputExecOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputExecOrderActionField^>());
            Marshal::StructureToPtr(inputExecOrderAction, inputExecOrderActionPtr, false);
            try
            {
                return _api->ReqExecOrderAction(static_cast<CThostFtdcInputExecOrderActionField*>(inputExecOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputExecOrderActionPtr);
            }
        }

        int TraderApi::ReqForQuoteInsert(InputForQuoteField^ inputForQuote, int requestID)
        {
            IntPtr inputForQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputForQuoteField^>());
            Marshal::StructureToPtr(inputForQuote, inputForQuotePtr, false);
            try
            {
                return _api->ReqForQuoteInsert(static_cast<CThostFtdcInputForQuoteField*>(inputForQuotePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputForQuotePtr);
            }
        }

        int TraderApi::ReqQuoteInsert(InputQuoteField^ inputQuote, int requestID)
        {
            IntPtr inputQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputQuoteField^>());
            Marshal::StructureToPtr(inputQuote, inputQuotePtr, false);
            try
            {
                return _api->ReqQuoteInsert(static_cast<CThostFtdcInputQuoteField*>(inputQuotePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputQuotePtr);
            }
        }

        int TraderApi::ReqQuoteAction(InputQuoteActionField^ inputQuoteAction, int requestID)
        {
            IntPtr inputQuoteActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputQuoteActionField^>());
            Marshal::StructureToPtr(inputQuoteAction, inputQuoteActionPtr, false);
            try
            {
                return _api->ReqQuoteAction(static_cast<CThostFtdcInputQuoteActionField*>(inputQuoteActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputQuoteActionPtr);
            }
        }

        int TraderApi::ReqBatchOrderAction(InputBatchOrderActionField^ inputBatchOrderAction, int requestID)
        {
            IntPtr inputBatchOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputBatchOrderActionField^>());
            Marshal::StructureToPtr(inputBatchOrderAction, inputBatchOrderActionPtr, false);
            try
            {
                return _api->ReqBatchOrderAction(static_cast<CThostFtdcInputBatchOrderActionField*>(inputBatchOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputBatchOrderActionPtr);
            }
        }

        int TraderApi::ReqOptionSelfCloseInsert(InputOptionSelfCloseField^ inputOptionSelfClose, int requestID)
        {
            IntPtr inputOptionSelfClosePtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOptionSelfCloseField^>());
            Marshal::StructureToPtr(inputOptionSelfClose, inputOptionSelfClosePtr, false);
            try
            {
                return _api->ReqOptionSelfCloseInsert(static_cast<CThostFtdcInputOptionSelfCloseField*>(inputOptionSelfClosePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputOptionSelfClosePtr);
            }
        }

        int TraderApi::ReqOptionSelfCloseAction(InputOptionSelfCloseActionField^ inputOptionSelfCloseAction, int requestID)
        {
            IntPtr inputOptionSelfCloseActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputOptionSelfCloseActionField^>());
            Marshal::StructureToPtr(inputOptionSelfCloseAction, inputOptionSelfCloseActionPtr, false);
            try
            {
                return _api->ReqOptionSelfCloseAction(static_cast<CThostFtdcInputOptionSelfCloseActionField*>(inputOptionSelfCloseActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputOptionSelfCloseActionPtr);
            }
        }

        int TraderApi::ReqCombActionInsert(InputCombActionField^ inputCombAction, int requestID)
        {
            IntPtr inputCombActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<InputCombActionField^>());
            Marshal::StructureToPtr(inputCombAction, inputCombActionPtr, false);
            try
            {
                return _api->ReqCombActionInsert(static_cast<CThostFtdcInputCombActionField*>(inputCombActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(inputCombActionPtr);
            }
        }

        int TraderApi::ReqQryOrder(QryOrderField^ qryOrder, int requestID)
        {
            IntPtr qryOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOrderField^>());
            Marshal::StructureToPtr(qryOrder, qryOrderPtr, false);
            try
            {
                return _api->ReqQryOrder(static_cast<CThostFtdcQryOrderField*>(qryOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryOrderPtr);
            }
        }

        int TraderApi::ReqQryTrade(QryTradeField^ qryTrade, int requestID)
        {
            IntPtr qryTradePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradeField^>());
            Marshal::StructureToPtr(qryTrade, qryTradePtr, false);
            try
            {
                return _api->ReqQryTrade(static_cast<CThostFtdcQryTradeField*>(qryTradePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTradePtr);
            }
        }

        int TraderApi::ReqQryInvestorPosition(QryInvestorPositionField^ qryInvestorPosition, int requestID)
        {
            IntPtr qryInvestorPositionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionField^>());
            Marshal::StructureToPtr(qryInvestorPosition, qryInvestorPositionPtr, false);
            try
            {
                return _api->ReqQryInvestorPosition(static_cast<CThostFtdcQryInvestorPositionField*>(qryInvestorPositionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestorPositionPtr);
            }
        }

        int TraderApi::ReqQryTradingAccount(QryTradingAccountField^ qryTradingAccount, int requestID)
        {
            IntPtr qryTradingAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingAccountField^>());
            Marshal::StructureToPtr(qryTradingAccount, qryTradingAccountPtr, false);
            try
            {
                return _api->ReqQryTradingAccount(static_cast<CThostFtdcQryTradingAccountField*>(qryTradingAccountPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTradingAccountPtr);
            }
        }

        int TraderApi::ReqQryInvestor(QryInvestorField^ qryInvestor, int requestID)
        {
            IntPtr qryInvestorPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorField^>());
            Marshal::StructureToPtr(qryInvestor, qryInvestorPtr, false);
            try
            {
                return _api->ReqQryInvestor(static_cast<CThostFtdcQryInvestorField*>(qryInvestorPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestorPtr);
            }
        }

        int TraderApi::ReqQryTradingCode(QryTradingCodeField^ qryTradingCode, int requestID)
        {
            IntPtr qryTradingCodePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingCodeField^>());
            Marshal::StructureToPtr(qryTradingCode, qryTradingCodePtr, false);
            try
            {
                return _api->ReqQryTradingCode(static_cast<CThostFtdcQryTradingCodeField*>(qryTradingCodePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTradingCodePtr);
            }
        }

        int TraderApi::ReqQryInstrumentMarginRate(QryInstrumentMarginRateField^ qryInstrumentMarginRate, int requestID)
        {
            IntPtr qryInstrumentMarginRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentMarginRateField^>());
            Marshal::StructureToPtr(qryInstrumentMarginRate, qryInstrumentMarginRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentMarginRate(static_cast<CThostFtdcQryInstrumentMarginRateField*>(qryInstrumentMarginRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInstrumentMarginRatePtr);
            }
        }

        int TraderApi::ReqQryInstrumentCommissionRate(QryInstrumentCommissionRateField^ qryInstrumentCommissionRate, int requestID)
        {
            IntPtr qryInstrumentCommissionRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentCommissionRateField^>());
            Marshal::StructureToPtr(qryInstrumentCommissionRate, qryInstrumentCommissionRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentCommissionRate(static_cast<CThostFtdcQryInstrumentCommissionRateField*>(qryInstrumentCommissionRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInstrumentCommissionRatePtr);
            }
        }

        int TraderApi::ReqQryExchange(QryExchangeField^ qryExchange, int requestID)
        {
            IntPtr qryExchangePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeField^>());
            Marshal::StructureToPtr(qryExchange, qryExchangePtr, false);
            try
            {
                return _api->ReqQryExchange(static_cast<CThostFtdcQryExchangeField*>(qryExchangePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryExchangePtr);
            }
        }

        int TraderApi::ReqQryProduct(QryProductField^ qryProduct, int requestID)
        {
            IntPtr qryProductPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductField^>());
            Marshal::StructureToPtr(qryProduct, qryProductPtr, false);
            try
            {
                return _api->ReqQryProduct(static_cast<CThostFtdcQryProductField*>(qryProductPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryProductPtr);
            }
        }

        int TraderApi::ReqQryInstrument(QryInstrumentField^ qryInstrument, int requestID)
        {
            IntPtr qryInstrumentPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentField^>());
            Marshal::StructureToPtr(qryInstrument, qryInstrumentPtr, false);
            try
            {
                return _api->ReqQryInstrument(static_cast<CThostFtdcQryInstrumentField*>(qryInstrumentPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInstrumentPtr);
            }
        }

        int TraderApi::ReqQryDepthMarketData(QryDepthMarketDataField^ qryDepthMarketData, int requestID)
        {
            IntPtr qryDepthMarketDataPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryDepthMarketDataField^>());
            Marshal::StructureToPtr(qryDepthMarketData, qryDepthMarketDataPtr, false);
            try
            {
                return _api->ReqQryDepthMarketData(static_cast<CThostFtdcQryDepthMarketDataField*>(qryDepthMarketDataPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryDepthMarketDataPtr);
            }
        }

        int TraderApi::ReqQrySettlementInfo(QrySettlementInfoField^ qrySettlementInfo, int requestID)
        {
            IntPtr qrySettlementInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySettlementInfoField^>());
            Marshal::StructureToPtr(qrySettlementInfo, qrySettlementInfoPtr, false);
            try
            {
                return _api->ReqQrySettlementInfo(static_cast<CThostFtdcQrySettlementInfoField*>(qrySettlementInfoPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qrySettlementInfoPtr);
            }
        }

        int TraderApi::ReqQryTransferBank(QryTransferBankField^ qryTransferBank, int requestID)
        {
            IntPtr qryTransferBankPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTransferBankField^>());
            Marshal::StructureToPtr(qryTransferBank, qryTransferBankPtr, false);
            try
            {
                return _api->ReqQryTransferBank(static_cast<CThostFtdcQryTransferBankField*>(qryTransferBankPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTransferBankPtr);
            }
        }

        int TraderApi::ReqQryInvestorPositionDetail(QryInvestorPositionDetailField^ qryInvestorPositionDetail, int requestID)
        {
            IntPtr qryInvestorPositionDetailPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionDetailField^>());
            Marshal::StructureToPtr(qryInvestorPositionDetail, qryInvestorPositionDetailPtr, false);
            try
            {
                return _api->ReqQryInvestorPositionDetail(static_cast<CThostFtdcQryInvestorPositionDetailField*>(qryInvestorPositionDetailPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestorPositionDetailPtr);
            }
        }

        int TraderApi::ReqQryNotice(QryNoticeField^ qryNotice, int requestID)
        {
            IntPtr qryNoticePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryNoticeField^>());
            Marshal::StructureToPtr(qryNotice, qryNoticePtr, false);
            try
            {
                return _api->ReqQryNotice(static_cast<CThostFtdcQryNoticeField*>(qryNoticePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryNoticePtr);
            }
        }

        int TraderApi::ReqQrySettlementInfoConfirm(QrySettlementInfoConfirmField^ qrySettlementInfoConfirm, int requestID)
        {
            IntPtr qrySettlementInfoConfirmPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySettlementInfoConfirmField^>());
            Marshal::StructureToPtr(qrySettlementInfoConfirm, qrySettlementInfoConfirmPtr, false);
            try
            {
                return _api->ReqQrySettlementInfoConfirm(static_cast<CThostFtdcQrySettlementInfoConfirmField*>(qrySettlementInfoConfirmPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qrySettlementInfoConfirmPtr);
            }
        }

        int TraderApi::ReqQryInvestorPositionCombineDetail(QryInvestorPositionCombineDetailField^ qryInvestorPositionCombineDetail, int requestID)
        {
            IntPtr qryInvestorPositionCombineDetailPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorPositionCombineDetailField^>());
            Marshal::StructureToPtr(qryInvestorPositionCombineDetail, qryInvestorPositionCombineDetailPtr, false);
            try
            {
                return _api->ReqQryInvestorPositionCombineDetail(static_cast<CThostFtdcQryInvestorPositionCombineDetailField*>(qryInvestorPositionCombineDetailPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestorPositionCombineDetailPtr);
            }
        }

        int TraderApi::ReqQryCFMMCTradingAccountKey(QryCFMMCTradingAccountKeyField^ qryCFMMCTradingAccountKey, int requestID)
        {
            IntPtr qryCFMMCTradingAccountKeyPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCFMMCTradingAccountKeyField^>());
            Marshal::StructureToPtr(qryCFMMCTradingAccountKey, qryCFMMCTradingAccountKeyPtr, false);
            try
            {
                return _api->ReqQryCFMMCTradingAccountKey(static_cast<CThostFtdcQryCFMMCTradingAccountKeyField*>(qryCFMMCTradingAccountKeyPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryCFMMCTradingAccountKeyPtr);
            }
        }

        int TraderApi::ReqQryEWarrantOffset(QryEWarrantOffsetField^ qryEWarrantOffset, int requestID)
        {
            IntPtr qryEWarrantOffsetPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryEWarrantOffsetField^>());
            Marshal::StructureToPtr(qryEWarrantOffset, qryEWarrantOffsetPtr, false);
            try
            {
                return _api->ReqQryEWarrantOffset(static_cast<CThostFtdcQryEWarrantOffsetField*>(qryEWarrantOffsetPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryEWarrantOffsetPtr);
            }
        }

        int TraderApi::ReqQryInvestorProductGroupMargin(QryInvestorProductGroupMarginField^ qryInvestorProductGroupMargin, int requestID)
        {
            IntPtr qryInvestorProductGroupMarginPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestorProductGroupMarginField^>());
            Marshal::StructureToPtr(qryInvestorProductGroupMargin, qryInvestorProductGroupMarginPtr, false);
            try
            {
                return _api->ReqQryInvestorProductGroupMargin(static_cast<CThostFtdcQryInvestorProductGroupMarginField*>(qryInvestorProductGroupMarginPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestorProductGroupMarginPtr);
            }
        }

        int TraderApi::ReqQryExchangeMarginRate(QryExchangeMarginRateField^ qryExchangeMarginRate, int requestID)
        {
            IntPtr qryExchangeMarginRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeMarginRateField^>());
            Marshal::StructureToPtr(qryExchangeMarginRate, qryExchangeMarginRatePtr, false);
            try
            {
                return _api->ReqQryExchangeMarginRate(static_cast<CThostFtdcQryExchangeMarginRateField*>(qryExchangeMarginRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryExchangeMarginRatePtr);
            }
        }

        int TraderApi::ReqQryExchangeMarginRateAdjust(QryExchangeMarginRateAdjustField^ qryExchangeMarginRateAdjust, int requestID)
        {
            IntPtr qryExchangeMarginRateAdjustPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeMarginRateAdjustField^>());
            Marshal::StructureToPtr(qryExchangeMarginRateAdjust, qryExchangeMarginRateAdjustPtr, false);
            try
            {
                return _api->ReqQryExchangeMarginRateAdjust(static_cast<CThostFtdcQryExchangeMarginRateAdjustField*>(qryExchangeMarginRateAdjustPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryExchangeMarginRateAdjustPtr);
            }
        }

        int TraderApi::ReqQryExchangeRate(QryExchangeRateField^ qryExchangeRate, int requestID)
        {
            IntPtr qryExchangeRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExchangeRateField^>());
            Marshal::StructureToPtr(qryExchangeRate, qryExchangeRatePtr, false);
            try
            {
                return _api->ReqQryExchangeRate(static_cast<CThostFtdcQryExchangeRateField*>(qryExchangeRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryExchangeRatePtr);
            }
        }

        int TraderApi::ReqQrySecAgentACIDMap(QrySecAgentACIDMapField^ qrySecAgentACIDMap, int requestID)
        {
            IntPtr qrySecAgentACIDMapPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentACIDMapField^>());
            Marshal::StructureToPtr(qrySecAgentACIDMap, qrySecAgentACIDMapPtr, false);
            try
            {
                return _api->ReqQrySecAgentACIDMap(static_cast<CThostFtdcQrySecAgentACIDMapField*>(qrySecAgentACIDMapPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qrySecAgentACIDMapPtr);
            }
        }

        int TraderApi::ReqQryProductExchRate(QryProductExchRateField^ qryProductExchRate, int requestID)
        {
            IntPtr qryProductExchRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductExchRateField^>());
            Marshal::StructureToPtr(qryProductExchRate, qryProductExchRatePtr, false);
            try
            {
                return _api->ReqQryProductExchRate(static_cast<CThostFtdcQryProductExchRateField*>(qryProductExchRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryProductExchRatePtr);
            }
        }

        int TraderApi::ReqQryProductGroup(QryProductGroupField^ qryProductGroup, int requestID)
        {
            IntPtr qryProductGroupPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryProductGroupField^>());
            Marshal::StructureToPtr(qryProductGroup, qryProductGroupPtr, false);
            try
            {
                return _api->ReqQryProductGroup(static_cast<CThostFtdcQryProductGroupField*>(qryProductGroupPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryProductGroupPtr);
            }
        }

        int TraderApi::ReqQryMMInstrumentCommissionRate(QryMMInstrumentCommissionRateField^ qryMMInstrumentCommissionRate, int requestID)
        {
            IntPtr qryMMInstrumentCommissionRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryMMInstrumentCommissionRateField^>());
            Marshal::StructureToPtr(qryMMInstrumentCommissionRate, qryMMInstrumentCommissionRatePtr, false);
            try
            {
                return _api->ReqQryMMInstrumentCommissionRate(static_cast<CThostFtdcQryMMInstrumentCommissionRateField*>(qryMMInstrumentCommissionRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryMMInstrumentCommissionRatePtr);
            }
        }

        int TraderApi::ReqQryMMOptionInstrCommRate(QryMMOptionInstrCommRateField^ qryMMOptionInstrCommRate, int requestID)
        {
            IntPtr qryMMOptionInstrCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryMMOptionInstrCommRateField^>());
            Marshal::StructureToPtr(qryMMOptionInstrCommRate, qryMMOptionInstrCommRatePtr, false);
            try
            {
                return _api->ReqQryMMOptionInstrCommRate(static_cast<CThostFtdcQryMMOptionInstrCommRateField*>(qryMMOptionInstrCommRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryMMOptionInstrCommRatePtr);
            }
        }

        int TraderApi::ReqQryInstrumentOrderCommRate(QryInstrumentOrderCommRateField^ qryInstrumentOrderCommRate, int requestID)
        {
            IntPtr qryInstrumentOrderCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInstrumentOrderCommRateField^>());
            Marshal::StructureToPtr(qryInstrumentOrderCommRate, qryInstrumentOrderCommRatePtr, false);
            try
            {
                return _api->ReqQryInstrumentOrderCommRate(static_cast<CThostFtdcQryInstrumentOrderCommRateField*>(qryInstrumentOrderCommRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInstrumentOrderCommRatePtr);
            }
        }

        int TraderApi::ReqQrySecAgentTradingAccount(QryTradingAccountField^ qryTradingAccount, int requestID)
        {
            IntPtr qryTradingAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingAccountField^>());
            Marshal::StructureToPtr(qryTradingAccount, qryTradingAccountPtr, false);
            try
            {
                return _api->ReqQrySecAgentTradingAccount(static_cast<CThostFtdcQryTradingAccountField*>(qryTradingAccountPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTradingAccountPtr);
            }
        }

        int TraderApi::ReqQrySecAgentCheckMode(QrySecAgentCheckModeField^ qrySecAgentCheckMode, int requestID)
        {
            IntPtr qrySecAgentCheckModePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentCheckModeField^>());
            Marshal::StructureToPtr(qrySecAgentCheckMode, qrySecAgentCheckModePtr, false);
            try
            {
                return _api->ReqQrySecAgentCheckMode(static_cast<CThostFtdcQrySecAgentCheckModeField*>(qrySecAgentCheckModePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qrySecAgentCheckModePtr);
            }
        }

        int TraderApi::ReqQrySecAgentTradeInfo(QrySecAgentTradeInfoField^ qrySecAgentTradeInfo, int requestID)
        {
            IntPtr qrySecAgentTradeInfoPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QrySecAgentTradeInfoField^>());
            Marshal::StructureToPtr(qrySecAgentTradeInfo, qrySecAgentTradeInfoPtr, false);
            try
            {
                return _api->ReqQrySecAgentTradeInfo(static_cast<CThostFtdcQrySecAgentTradeInfoField*>(qrySecAgentTradeInfoPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qrySecAgentTradeInfoPtr);
            }
        }

        int TraderApi::ReqQryOptionInstrTradeCost(QryOptionInstrTradeCostField^ qryOptionInstrTradeCost, int requestID)
        {
            IntPtr qryOptionInstrTradeCostPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionInstrTradeCostField^>());
            Marshal::StructureToPtr(qryOptionInstrTradeCost, qryOptionInstrTradeCostPtr, false);
            try
            {
                return _api->ReqQryOptionInstrTradeCost(static_cast<CThostFtdcQryOptionInstrTradeCostField*>(qryOptionInstrTradeCostPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryOptionInstrTradeCostPtr);
            }
        }

        int TraderApi::ReqQryOptionInstrCommRate(QryOptionInstrCommRateField^ qryOptionInstrCommRate, int requestID)
        {
            IntPtr qryOptionInstrCommRatePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionInstrCommRateField^>());
            Marshal::StructureToPtr(qryOptionInstrCommRate, qryOptionInstrCommRatePtr, false);
            try
            {
                return _api->ReqQryOptionInstrCommRate(static_cast<CThostFtdcQryOptionInstrCommRateField*>(qryOptionInstrCommRatePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryOptionInstrCommRatePtr);
            }
        }

        int TraderApi::ReqQryExecOrder(QryExecOrderField^ qryExecOrder, int requestID)
        {
            IntPtr qryExecOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryExecOrderField^>());
            Marshal::StructureToPtr(qryExecOrder, qryExecOrderPtr, false);
            try
            {
                return _api->ReqQryExecOrder(static_cast<CThostFtdcQryExecOrderField*>(qryExecOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryExecOrderPtr);
            }
        }

        int TraderApi::ReqQryForQuote(QryForQuoteField^ qryForQuote, int requestID)
        {
            IntPtr qryForQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryForQuoteField^>());
            Marshal::StructureToPtr(qryForQuote, qryForQuotePtr, false);
            try
            {
                return _api->ReqQryForQuote(static_cast<CThostFtdcQryForQuoteField*>(qryForQuotePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryForQuotePtr);
            }
        }

        int TraderApi::ReqQryQuote(QryQuoteField^ qryQuote, int requestID)
        {
            IntPtr qryQuotePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryQuoteField^>());
            Marshal::StructureToPtr(qryQuote, qryQuotePtr, false);
            try
            {
                return _api->ReqQryQuote(static_cast<CThostFtdcQryQuoteField*>(qryQuotePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryQuotePtr);
            }
        }

        int TraderApi::ReqQryOptionSelfClose(QryOptionSelfCloseField^ qryOptionSelfClose, int requestID)
        {
            IntPtr qryOptionSelfClosePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryOptionSelfCloseField^>());
            Marshal::StructureToPtr(qryOptionSelfClose, qryOptionSelfClosePtr, false);
            try
            {
                return _api->ReqQryOptionSelfClose(static_cast<CThostFtdcQryOptionSelfCloseField*>(qryOptionSelfClosePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryOptionSelfClosePtr);
            }
        }

        int TraderApi::ReqQryInvestUnit(QryInvestUnitField^ qryInvestUnit, int requestID)
        {
            IntPtr qryInvestUnitPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryInvestUnitField^>());
            Marshal::StructureToPtr(qryInvestUnit, qryInvestUnitPtr, false);
            try
            {
                return _api->ReqQryInvestUnit(static_cast<CThostFtdcQryInvestUnitField*>(qryInvestUnitPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryInvestUnitPtr);
            }
        }

        int TraderApi::ReqQryCombInstrumentGuard(QryCombInstrumentGuardField^ qryCombInstrumentGuard, int requestID)
        {
            IntPtr qryCombInstrumentGuardPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCombInstrumentGuardField^>());
            Marshal::StructureToPtr(qryCombInstrumentGuard, qryCombInstrumentGuardPtr, false);
            try
            {
                return _api->ReqQryCombInstrumentGuard(static_cast<CThostFtdcQryCombInstrumentGuardField*>(qryCombInstrumentGuardPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryCombInstrumentGuardPtr);
            }
        }

        int TraderApi::ReqQryCombAction(QryCombActionField^ qryCombAction, int requestID)
        {
            IntPtr qryCombActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryCombActionField^>());
            Marshal::StructureToPtr(qryCombAction, qryCombActionPtr, false);
            try
            {
                return _api->ReqQryCombAction(static_cast<CThostFtdcQryCombActionField*>(qryCombActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryCombActionPtr);
            }
        }

        int TraderApi::ReqQryTransferSerial(QryTransferSerialField^ qryTransferSerial, int requestID)
        {
            IntPtr qryTransferSerialPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTransferSerialField^>());
            Marshal::StructureToPtr(qryTransferSerial, qryTransferSerialPtr, false);
            try
            {
                return _api->ReqQryTransferSerial(static_cast<CThostFtdcQryTransferSerialField*>(qryTransferSerialPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTransferSerialPtr);
            }
        }

        int TraderApi::ReqQryAccountregister(QryAccountregisterField^ qryAccountregister, int requestID)
        {
            IntPtr qryAccountregisterPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryAccountregisterField^>());
            Marshal::StructureToPtr(qryAccountregister, qryAccountregisterPtr, false);
            try
            {
                return _api->ReqQryAccountregister(static_cast<CThostFtdcQryAccountregisterField*>(qryAccountregisterPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryAccountregisterPtr);
            }
        }

        int TraderApi::ReqQryContractBank(QryContractBankField^ qryContractBank, int requestID)
        {
            IntPtr qryContractBankPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryContractBankField^>());
            Marshal::StructureToPtr(qryContractBank, qryContractBankPtr, false);
            try
            {
                return _api->ReqQryContractBank(static_cast<CThostFtdcQryContractBankField*>(qryContractBankPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryContractBankPtr);
            }
        }

        int TraderApi::ReqQryParkedOrder(QryParkedOrderField^ qryParkedOrder, int requestID)
        {
            IntPtr qryParkedOrderPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryParkedOrderField^>());
            Marshal::StructureToPtr(qryParkedOrder, qryParkedOrderPtr, false);
            try
            {
                return _api->ReqQryParkedOrder(static_cast<CThostFtdcQryParkedOrderField*>(qryParkedOrderPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryParkedOrderPtr);
            }
        }

        int TraderApi::ReqQryParkedOrderAction(QryParkedOrderActionField^ qryParkedOrderAction, int requestID)
        {
            IntPtr qryParkedOrderActionPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryParkedOrderActionField^>());
            Marshal::StructureToPtr(qryParkedOrderAction, qryParkedOrderActionPtr, false);
            try
            {
                return _api->ReqQryParkedOrderAction(static_cast<CThostFtdcQryParkedOrderActionField*>(qryParkedOrderActionPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryParkedOrderActionPtr);
            }
        }

        int TraderApi::ReqQryTradingNotice(QryTradingNoticeField^ qryTradingNotice, int requestID)
        {
            IntPtr qryTradingNoticePtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryTradingNoticeField^>());
            Marshal::StructureToPtr(qryTradingNotice, qryTradingNoticePtr, false);
            try
            {
                return _api->ReqQryTradingNotice(static_cast<CThostFtdcQryTradingNoticeField*>(qryTradingNoticePtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryTradingNoticePtr);
            }
        }

        int TraderApi::ReqQryBrokerTradingParams(QryBrokerTradingParamsField^ qryBrokerTradingParams, int requestID)
        {
            IntPtr qryBrokerTradingParamsPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryBrokerTradingParamsField^>());
            Marshal::StructureToPtr(qryBrokerTradingParams, qryBrokerTradingParamsPtr, false);
            try
            {
                return _api->ReqQryBrokerTradingParams(static_cast<CThostFtdcQryBrokerTradingParamsField*>(qryBrokerTradingParamsPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryBrokerTradingParamsPtr);
            }
        }

        int TraderApi::ReqQryBrokerTradingAlgos(QryBrokerTradingAlgosField^ qryBrokerTradingAlgos, int requestID)
        {
            IntPtr qryBrokerTradingAlgosPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QryBrokerTradingAlgosField^>());
            Marshal::StructureToPtr(qryBrokerTradingAlgos, qryBrokerTradingAlgosPtr, false);
            try
            {
                return _api->ReqQryBrokerTradingAlgos(static_cast<CThostFtdcQryBrokerTradingAlgosField*>(qryBrokerTradingAlgosPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(qryBrokerTradingAlgosPtr);
            }
        }

        int TraderApi::ReqQueryCFMMCTradingAccountToken(QueryCFMMCTradingAccountTokenField^ queryCFMMCTradingAccountToken, int requestID)
        {
            IntPtr queryCFMMCTradingAccountTokenPtr = Marshal::AllocHGlobal(Marshal::SizeOf<QueryCFMMCTradingAccountTokenField^>());
            Marshal::StructureToPtr(queryCFMMCTradingAccountToken, queryCFMMCTradingAccountTokenPtr, false);
            try
            {
                return _api->ReqQueryCFMMCTradingAccountToken(static_cast<CThostFtdcQueryCFMMCTradingAccountTokenField*>(queryCFMMCTradingAccountTokenPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(queryCFMMCTradingAccountTokenPtr);
            }
        }

        int TraderApi::ReqFromBankToFutureByFuture(ReqTransferField^ reqTransfer, int requestID)
        {
            IntPtr reqTransferPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqTransferField^>());
            Marshal::StructureToPtr(reqTransfer, reqTransferPtr, false);
            try
            {
                return _api->ReqFromBankToFutureByFuture(static_cast<CThostFtdcReqTransferField*>(reqTransferPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqTransferPtr);
            }
        }

        int TraderApi::ReqFromFutureToBankByFuture(ReqTransferField^ reqTransfer, int requestID)
        {
            IntPtr reqTransferPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqTransferField^>());
            Marshal::StructureToPtr(reqTransfer, reqTransferPtr, false);
            try
            {
                return _api->ReqFromFutureToBankByFuture(static_cast<CThostFtdcReqTransferField*>(reqTransferPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqTransferPtr);
            }
        }

        int TraderApi::ReqQueryBankAccountMoneyByFuture(ReqQueryAccountField^ reqQueryAccount, int requestID)
        {
            IntPtr reqQueryAccountPtr = Marshal::AllocHGlobal(Marshal::SizeOf<ReqQueryAccountField^>());
            Marshal::StructureToPtr(reqQueryAccount, reqQueryAccountPtr, false);
            try
            {
                return _api->ReqQueryBankAccountMoneyByFuture(static_cast<CThostFtdcReqQueryAccountField*>(reqQueryAccountPtr.ToPointer()), requestID);
            }
            finally
            {
                Marshal::FreeHGlobal(reqQueryAccountPtr);
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
