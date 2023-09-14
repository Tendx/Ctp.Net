#pragma once
#include <Windows.h>
#include "Objects.g.h"
#include "Delegates.g.h"
#include "TraderSpi.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace Ctp
{
    namespace Net
    {
        public ref class TraderApi
        {
        public:
#pragma region
            /// <summary>创建Api</summary>
            /// <param name="dllPath">thostmduserapi_se.dll路径</param>
            /// <param name="flowPath">存贮订阅信息文件的目录，默认为当前目录</param>
            /// <returns>创建出的TraderApi</returns>
            static TraderApi^ CreateApi(String^ dllPath, String^ flowPath);

            /// <summary>获取API的版本信息</summary>
            /// <returns>获取到的版本号</returns>
            String^ GetApiVersion();

            /// <summary>删除接口对象本身</summary>
            /// <remarks>不再使用本接口对象时,调用该函数删除接口对象</remarks>
            void Release();

            /// <summary>初始化</summary>
            /// <remarks>初始化运行环境,只有调用后,接口才开始工作</remarks>
            void Init();

            /// <summary>等待接口线程结束运行</summary>
            /// <returns>线程退出代码</returns>
            int Join();

            /// <summary>获取当前交易日</summary>
            /// <returns>获取到的交易日</returns>
            /// <remarks>只有登录成功后,才能得到正确的交易日</remarks>
            String^ GetTradingDay();

            /// <summary>注册前置机网络地址</summary>
            /// <param name="frontAddress">前置机网络地址。</param>
            /// <remarks>网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。</remarks>
            /// <remarks>“tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。</remarks>
            void RegisterFront(String^ frontAddress);

            /// <summary>注册名字服务器网络地址</summary>
            /// <param name="nsAddress">名字服务器网络地址。</param>
            /// <remarks>网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。</remarks>
            /// <remarks>“tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。</remarks>
            /// <remarks>RegisterNameServer优先于RegisterFront</remarks>
            void RegisterNameServer(String^ nsAddress);

            /// <summary>注册名字服务器用户信息</summary>
            /// <param name="fensUserInfo">用户信息。</param>
            void RegisterFensUserInfo(FensUserInfoField^ fensUserInfo);

            /// <summary>订阅私有流。</summary>
            /// <param name="resumeType">私有流重传方式</param>
            /// THOST_TERT_RESTART:从本交易日开始重传
            /// THOST_TERT_RESUME:从上次收到的续传
            /// THOST_TERT_QUICK:只传送登录后私有流的内容
            /// <remarks>该方法要在Init方法前调用。若不调用则不会收到私有流的数据。</remarks>
            void SubscribePrivateTopic(RESUME_TYPE resumeType);

            /// <summary>订阅公共流。</summary>
            /// <param name="resumeType">公共流重传方式</param>
            /// THOST_TERT_RESTART:从本交易日开始重传
            /// THOST_TERT_RESUME:从上次收到的续传
            /// THOST_TERT_QUICK:只传送登录后公共流的内容
            /// <remarks>该方法要在Init方法前调用。若不调用则不会收到公共流的数据。</remarks>
            void SubscribePublicTopic(RESUME_TYPE resumeType);

            /// <summary>客户端认证请求</summary>
            int ReqAuthenticate(ReqAuthenticateField^ reqAuthenticateField, int requestID);

            /// <summary>注册用户终端信息，用于中继服务器多连接模式</summary>
            /// 需要在终端认证成功后，用户登录前调用该接口
            int RegisterUserSystemInfo(UserSystemInfoField^ userSystemInfo);

            /// <summary>上报用户终端信息，用于中继服务器操作员登录模式</summary>
            /// 操作员登录后，可以多次调用该接口上报客户信息
            int SubmitUserSystemInfo(UserSystemInfoField^ userSystemInfo);

            /// <summary>用户登录请求</summary>
            int ReqUserLogin(ReqUserLoginField^ reqUserLoginField, int requestID);

            /// <summary>登出请求</summary>
            int ReqUserLogout(UserLogoutField^ userLogout, int requestID);

            /// <summary>用户口令更新请求</summary>
            int ReqUserPasswordUpdate(UserPasswordUpdateField^ userPasswordUpdate, int requestID);

            /// <summary>资金账户口令更新请求</summary>
            int ReqTradingAccountPasswordUpdate(TradingAccountPasswordUpdateField^ tradingAccountPasswordUpdate, int requestID);

            /// <summary>查询用户当前支持的认证模式</summary>
            int ReqUserAuthMethod(ReqUserAuthMethodField^ reqUserAuthMethod, int requestID);

            /// <summary>用户发出获取图形验证码请求</summary>
            int ReqGenUserCaptcha(ReqGenUserCaptchaField^ reqGenUserCaptcha, int requestID);

            /// <summary>用户发出获取短信验证码请求</summary>
            int ReqGenUserText(ReqGenUserTextField^ reqGenUserText, int requestID);

            /// <summary>用户发出带有图片验证码的登陆请求</summary>
            int ReqUserLoginWithCaptcha(ReqUserLoginWithCaptchaField^ reqUserLoginWithCaptcha, int requestID);

            /// <summary>用户发出带有短信验证码的登陆请求</summary>
            int ReqUserLoginWithText(ReqUserLoginWithTextField^ reqUserLoginWithText, int requestID);

            /// <summary>用户发出带有动态口令的登陆请求</summary>
            int ReqUserLoginWithOTP(ReqUserLoginWithOTPField^ reqUserLoginWithOTP, int requestID);

            /// <summary>报单录入请求</summary>
            int ReqOrderInsert(InputOrderField^ inputOrder, int requestID);

            /// <summary>预埋单录入请求</summary>
            int ReqParkedOrderInsert(ParkedOrderField^ parkedOrder, int requestID);

            /// <summary>预埋撤单录入请求</summary>
            int ReqParkedOrderAction(ParkedOrderActionField^ parkedOrderAction, int requestID);

            /// <summary>报单操作请求</summary>
            int ReqOrderAction(InputOrderActionField^ inputOrderAction, int requestID);

            /// <summary>查询最大报单数量请求</summary>
            int ReqQueryMaxOrderVolume(QueryMaxOrderVolumeField^ queryMaxOrderVolume, int requestID);

            /// <summary>投资者结算结果确认</summary>
            int ReqSettlementInfoConfirm(SettlementInfoConfirmField^ settlementInfoConfirm, int requestID);

            /// <summary>请求删除预埋单</summary>
            int ReqRemoveParkedOrder(RemoveParkedOrderField^ removeParkedOrder, int requestID);

            /// <summary>请求删除预埋撤单</summary>
            int ReqRemoveParkedOrderAction(RemoveParkedOrderActionField^ removeParkedOrderAction, int requestID);

            /// <summary>执行宣告录入请求</summary>
            int ReqExecOrderInsert(InputExecOrderField^ inputExecOrder, int requestID);

            /// <summary>执行宣告操作请求</summary>
            int ReqExecOrderAction(InputExecOrderActionField^ inputExecOrderAction, int requestID);

            /// <summary>询价录入请求</summary>
            int ReqForQuoteInsert(InputForQuoteField^ inputForQuote, int requestID);

            /// <summary>报价录入请求</summary>
            int ReqQuoteInsert(InputQuoteField^ inputQuote, int requestID);

            /// <summary>报价操作请求</summary>
            int ReqQuoteAction(InputQuoteActionField^ inputQuoteAction, int requestID);

            /// <summary>批量报单操作请求</summary>
            int ReqBatchOrderAction(InputBatchOrderActionField^ inputBatchOrderAction, int requestID);

            /// <summary>期权自对冲录入请求</summary>
            int ReqOptionSelfCloseInsert(InputOptionSelfCloseField^ inputOptionSelfClose, int requestID);

            /// <summary>期权自对冲操作请求</summary>
            int ReqOptionSelfCloseAction(InputOptionSelfCloseActionField^ inputOptionSelfCloseAction, int requestID);

            /// <summary>申请组合录入请求</summary>
            int ReqCombActionInsert(InputCombActionField^ inputCombAction, int requestID);

            /// <summary>请求查询报单</summary>
            int ReqQryOrder(QryOrderField^ qryOrder, int requestID);

            /// <summary>请求查询成交</summary>
            int ReqQryTrade(QryTradeField^ qryTrade, int requestID);

            /// <summary>请求查询投资者持仓</summary>
            int ReqQryInvestorPosition(QryInvestorPositionField^ qryInvestorPosition, int requestID);

            /// <summary>请求查询资金账户</summary>
            int ReqQryTradingAccount(QryTradingAccountField^ qryTradingAccount, int requestID);

            /// <summary>请求查询投资者</summary>
            int ReqQryInvestor(QryInvestorField^ qryInvestor, int requestID);

            /// <summary>请求查询交易编码</summary>
            int ReqQryTradingCode(QryTradingCodeField^ qryTradingCode, int requestID);

            /// <summary>请求查询合约保证金率</summary>
            int ReqQryInstrumentMarginRate(QryInstrumentMarginRateField^ qryInstrumentMarginRate, int requestID);

            /// <summary>请求查询合约手续费率</summary>
            int ReqQryInstrumentCommissionRate(QryInstrumentCommissionRateField^ qryInstrumentCommissionRate, int requestID);

            /// <summary>请求查询交易所</summary>
            int ReqQryExchange(QryExchangeField^ qryExchange, int requestID);

            /// <summary>请求查询产品</summary>
            int ReqQryProduct(QryProductField^ qryProduct, int requestID);

            /// <summary>请求查询合约</summary>
            int ReqQryInstrument(QryInstrumentField^ qryInstrument, int requestID);

            /// <summary>请求查询行情</summary>
            int ReqQryDepthMarketData(QryDepthMarketDataField^ qryDepthMarketData, int requestID);

            /// <summary>请求查询投资者结算结果</summary>
            int ReqQrySettlementInfo(QrySettlementInfoField^ qrySettlementInfo, int requestID);

            /// <summary>请求查询转帐银行</summary>
            int ReqQryTransferBank(QryTransferBankField^ qryTransferBank, int requestID);

            /// <summary>请求查询投资者持仓明细</summary>
            int ReqQryInvestorPositionDetail(QryInvestorPositionDetailField^ qryInvestorPositionDetail, int requestID);

            /// <summary>请求查询客户通知</summary>
            int ReqQryNotice(QryNoticeField^ qryNotice, int requestID);

            /// <summary>请求查询结算信息确认</summary>
            int ReqQrySettlementInfoConfirm(QrySettlementInfoConfirmField^ qrySettlementInfoConfirm, int requestID);

            /// <summary>请求查询投资者持仓明细</summary>
            int ReqQryInvestorPositionCombineDetail(QryInvestorPositionCombineDetailField^ qryInvestorPositionCombineDetail, int requestID);

            /// <summary>请求查询保证金监管系统经纪公司资金账户密钥</summary>
            int ReqQryCFMMCTradingAccountKey(QryCFMMCTradingAccountKeyField^ qryCFMMCTradingAccountKey, int requestID);

            /// <summary>请求查询仓单折抵信息</summary>
            int ReqQryEWarrantOffset(QryEWarrantOffsetField^ qryEWarrantOffset, int requestID);

            /// <summary>请求查询投资者品种/跨品种保证金</summary>
            int ReqQryInvestorProductGroupMargin(QryInvestorProductGroupMarginField^ qryInvestorProductGroupMargin, int requestID);

            /// <summary>请求查询交易所保证金率</summary>
            int ReqQryExchangeMarginRate(QryExchangeMarginRateField^ qryExchangeMarginRate, int requestID);

            /// <summary>请求查询交易所调整保证金率</summary>
            int ReqQryExchangeMarginRateAdjust(QryExchangeMarginRateAdjustField^ qryExchangeMarginRateAdjust, int requestID);

            /// <summary>请求查询汇率</summary>
            int ReqQryExchangeRate(QryExchangeRateField^ qryExchangeRate, int requestID);

            /// <summary>请求查询二级代理操作员银期权限</summary>
            int ReqQrySecAgentACIDMap(QrySecAgentACIDMapField^ qrySecAgentACIDMap, int requestID);

            /// <summary>请求查询产品报价汇率</summary>
            int ReqQryProductExchRate(QryProductExchRateField^ qryProductExchRate, int requestID);

            /// <summary>请求查询产品组</summary>
            int ReqQryProductGroup(QryProductGroupField^ qryProductGroup, int requestID);

            /// <summary>请求查询做市商合约手续费率</summary>
            int ReqQryMMInstrumentCommissionRate(QryMMInstrumentCommissionRateField^ qryMMInstrumentCommissionRate, int requestID);

            /// <summary>请求查询做市商期权合约手续费</summary>
            int ReqQryMMOptionInstrCommRate(QryMMOptionInstrCommRateField^ qryMMOptionInstrCommRate, int requestID);

            /// <summary>请求查询报单手续费</summary>
            int ReqQryInstrumentOrderCommRate(QryInstrumentOrderCommRateField^ qryInstrumentOrderCommRate, int requestID);

            /// <summary>请求查询资金账户</summary>
            int ReqQrySecAgentTradingAccount(QryTradingAccountField^ qryTradingAccount, int requestID);

            /// <summary>请求查询二级代理商资金校验模式</summary>
            int ReqQrySecAgentCheckMode(QrySecAgentCheckModeField^ qrySecAgentCheckMode, int requestID);

            /// <summary>请求查询二级代理商信息</summary>
            int ReqQrySecAgentTradeInfo(QrySecAgentTradeInfoField^ qrySecAgentTradeInfo, int requestID);

            /// <summary>请求查询期权交易成本</summary>
            int ReqQryOptionInstrTradeCost(QryOptionInstrTradeCostField^ qryOptionInstrTradeCost, int requestID);

            /// <summary>请求查询期权合约手续费</summary>
            int ReqQryOptionInstrCommRate(QryOptionInstrCommRateField^ qryOptionInstrCommRate, int requestID);

            /// <summary>请求查询执行宣告</summary>
            int ReqQryExecOrder(QryExecOrderField^ qryExecOrder, int requestID);

            /// <summary>请求查询询价</summary>
            int ReqQryForQuote(QryForQuoteField^ qryForQuote, int requestID);

            /// <summary>请求查询报价</summary>
            int ReqQryQuote(QryQuoteField^ qryQuote, int requestID);

            /// <summary>请求查询期权自对冲</summary>
            int ReqQryOptionSelfClose(QryOptionSelfCloseField^ qryOptionSelfClose, int requestID);

            /// <summary>请求查询投资单元</summary>
            int ReqQryInvestUnit(QryInvestUnitField^ qryInvestUnit, int requestID);

            /// <summary>请求查询组合合约安全系数</summary>
            int ReqQryCombInstrumentGuard(QryCombInstrumentGuardField^ qryCombInstrumentGuard, int requestID);

            /// <summary>请求查询申请组合</summary>
            int ReqQryCombAction(QryCombActionField^ qryCombAction, int requestID);

            /// <summary>请求查询转帐流水</summary>
            int ReqQryTransferSerial(QryTransferSerialField^ qryTransferSerial, int requestID);

            /// <summary>请求查询银期签约关系</summary>
            int ReqQryAccountregister(QryAccountregisterField^ qryAccountregister, int requestID);

            /// <summary>请求查询签约银行</summary>
            int ReqQryContractBank(QryContractBankField^ qryContractBank, int requestID);

            /// <summary>请求查询预埋单</summary>
            int ReqQryParkedOrder(QryParkedOrderField^ qryParkedOrder, int requestID);

            /// <summary>请求查询预埋撤单</summary>
            int ReqQryParkedOrderAction(QryParkedOrderActionField^ qryParkedOrderAction, int requestID);

            /// <summary>请求查询交易通知</summary>
            int ReqQryTradingNotice(QryTradingNoticeField^ qryTradingNotice, int requestID);

            /// <summary>请求查询经纪公司交易参数</summary>
            int ReqQryBrokerTradingParams(QryBrokerTradingParamsField^ qryBrokerTradingParams, int requestID);

            /// <summary>请求查询经纪公司交易算法</summary>
            int ReqQryBrokerTradingAlgos(QryBrokerTradingAlgosField^ qryBrokerTradingAlgos, int requestID);

            /// <summary>请求查询监控中心用户令牌</summary>
            int ReqQueryCFMMCTradingAccountToken(QueryCFMMCTradingAccountTokenField^ queryCFMMCTradingAccountToken, int requestID);

            /// <summary>期货发起银行资金转期货请求</summary>
            int ReqFromBankToFutureByFuture(ReqTransferField^ reqTransfer, int requestID);

            /// <summary>期货发起期货资金转银行请求</summary>
            int ReqFromFutureToBankByFuture(ReqTransferField^ reqTransfer, int requestID);

            /// <summary>期货发起查询银行余额请求</summary>
            int ReqQueryBankAccountMoneyByFuture(ReqQueryAccountField^ reqQueryAccount, int requestID);

#pragma endregion

#pragma region
            /// <summary>当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。</summary>
            event OnFrontConnected^ OnFrontConnected;

            /// <summary>当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。</summary>
            /// <param name="nReason">错误原因</param>
            /// <remarks>0x1001 网络读失败</remarks>
            /// <remarks>0x1002 网络写失败</remarks>
            /// <remarks>0x2001 接收心跳超时</remarks>
            /// <remarks>0x2002 发送心跳失败</remarks>
            /// <remarks>0x2003 收到错误报文</remarks>
            event OnFrontDisconnected^ OnFrontDisconnected;

            /// <summary>心跳超时警告。当长时间未收到报文时，该方法被调用。</summary>
            /// <param name="nTimeLapse">距离上次接收报文的时间</param>
            event OnHeartBeatWarning^ OnHeartBeatWarning;

            /// <summary>客户端认证响应</summary>
            event OnRspAuthenticate^ OnRspAuthenticate;

            /// <summary>登录请求响应</summary>
            event OnRspUserLogin^ OnRspUserLogin;

            /// <summary>登出请求响应</summary>
            event OnRspUserLogout^ OnRspUserLogout;

            /// <summary>用户口令更新请求响应</summary>
            event OnRspUserPasswordUpdate^ OnRspUserPasswordUpdate;

            /// <summary>资金账户口令更新请求响应</summary>
            event OnRspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate;

            /// <summary>查询用户当前支持的认证模式的回复</summary>
            event OnRspUserAuthMethod^ OnRspUserAuthMethod;

            /// <summary>获取图形验证码请求的回复</summary>
            event OnRspGenUserCaptcha^ OnRspGenUserCaptcha;

            /// <summary>获取短信验证码请求的回复</summary>
            event OnRspGenUserText^ OnRspGenUserText;

            /// <summary>报单录入请求响应</summary>
            event OnRspOrderInsert^ OnRspOrderInsert;

            /// <summary>预埋单录入请求响应</summary>
            event OnRspParkedOrderInsert^ OnRspParkedOrderInsert;

            /// <summary>预埋撤单录入请求响应</summary>
            event OnRspParkedOrderAction^ OnRspParkedOrderAction;

            /// <summary>报单操作请求响应</summary>
            event OnRspOrderAction^ OnRspOrderAction;

            /// <summary>查询最大报单数量响应</summary>
            event OnRspQueryMaxOrderVolume^ OnRspQueryMaxOrderVolume;

            /// <summary>投资者结算结果确认响应</summary>
            event OnRspSettlementInfoConfirm^ OnRspSettlementInfoConfirm;

            /// <summary>删除预埋单响应</summary>
            event OnRspRemoveParkedOrder^ OnRspRemoveParkedOrder;

            /// <summary>删除预埋撤单响应</summary>
            event OnRspRemoveParkedOrderAction^ OnRspRemoveParkedOrderAction;

            /// <summary>执行宣告录入请求响应</summary>
            event OnRspExecOrderInsert^ OnRspExecOrderInsert;

            /// <summary>执行宣告操作请求响应</summary>
            event OnRspExecOrderAction^ OnRspExecOrderAction;

            /// <summary>询价录入请求响应</summary>
            event OnRspForQuoteInsert^ OnRspForQuoteInsert;

            /// <summary>报价录入请求响应</summary>
            event OnRspQuoteInsert^ OnRspQuoteInsert;

            /// <summary>报价操作请求响应</summary>
            event OnRspQuoteAction^ OnRspQuoteAction;

            /// <summary>批量报单操作请求响应</summary>
            event OnRspBatchOrderAction^ OnRspBatchOrderAction;

            /// <summary>期权自对冲录入请求响应</summary>
            event OnRspOptionSelfCloseInsert^ OnRspOptionSelfCloseInsert;

            /// <summary>期权自对冲操作请求响应</summary>
            event OnRspOptionSelfCloseAction^ OnRspOptionSelfCloseAction;

            /// <summary>申请组合录入请求响应</summary>
            event OnRspCombActionInsert^ OnRspCombActionInsert;

            /// <summary>请求查询报单响应</summary>
            event OnRspQryOrder^ OnRspQryOrder;

            /// <summary>请求查询成交响应</summary>
            event OnRspQryTrade^ OnRspQryTrade;

            /// <summary>请求查询投资者持仓响应</summary>
            event OnRspQryInvestorPosition^ OnRspQryInvestorPosition;

            /// <summary>请求查询资金账户响应</summary>
            event OnRspQryTradingAccount^ OnRspQryTradingAccount;

            /// <summary>请求查询投资者响应</summary>
            event OnRspQryInvestor^ OnRspQryInvestor;

            /// <summary>请求查询交易编码响应</summary>
            event OnRspQryTradingCode^ OnRspQryTradingCode;

            /// <summary>请求查询合约保证金率响应</summary>
            event OnRspQryInstrumentMarginRate^ OnRspQryInstrumentMarginRate;

            /// <summary>请求查询合约手续费率响应</summary>
            event OnRspQryInstrumentCommissionRate^ OnRspQryInstrumentCommissionRate;

            /// <summary>请求查询交易所响应</summary>
            event OnRspQryExchange^ OnRspQryExchange;

            /// <summary>请求查询产品响应</summary>
            event OnRspQryProduct^ OnRspQryProduct;

            /// <summary>请求查询合约响应</summary>
            event OnRspQryInstrument^ OnRspQryInstrument;

            /// <summary>请求查询行情响应</summary>
            event OnRspQryDepthMarketData^ OnRspQryDepthMarketData;

            /// <summary>请求查询投资者结算结果响应</summary>
            event OnRspQrySettlementInfo^ OnRspQrySettlementInfo;

            /// <summary>请求查询转帐银行响应</summary>
            event OnRspQryTransferBank^ OnRspQryTransferBank;

            /// <summary>请求查询投资者持仓明细响应</summary>
            event OnRspQryInvestorPositionDetail^ OnRspQryInvestorPositionDetail;

            /// <summary>请求查询客户通知响应</summary>
            event OnRspQryNotice^ OnRspQryNotice;

            /// <summary>请求查询结算信息确认响应</summary>
            event OnRspQrySettlementInfoConfirm^ OnRspQrySettlementInfoConfirm;

            /// <summary>请求查询投资者持仓明细响应</summary>
            event OnRspQryInvestorPositionCombineDetail^ OnRspQryInvestorPositionCombineDetail;

            /// <summary>查询保证金监管系统经纪公司资金账户密钥响应</summary>
            event OnRspQryCFMMCTradingAccountKey^ OnRspQryCFMMCTradingAccountKey;

            /// <summary>请求查询仓单折抵信息响应</summary>
            event OnRspQryEWarrantOffset^ OnRspQryEWarrantOffset;

            /// <summary>请求查询投资者品种/跨品种保证金响应</summary>
            event OnRspQryInvestorProductGroupMargin^ OnRspQryInvestorProductGroupMargin;

            /// <summary>请求查询交易所保证金率响应</summary>
            event OnRspQryExchangeMarginRate^ OnRspQryExchangeMarginRate;

            /// <summary>请求查询交易所调整保证金率响应</summary>
            event OnRspQryExchangeMarginRateAdjust^ OnRspQryExchangeMarginRateAdjust;

            /// <summary>请求查询汇率响应</summary>
            event OnRspQryExchangeRate^ OnRspQryExchangeRate;

            /// <summary>请求查询二级代理操作员银期权限响应</summary>
            event OnRspQrySecAgentACIDMap^ OnRspQrySecAgentACIDMap;

            /// <summary>请求查询产品报价汇率</summary>
            event OnRspQryProductExchRate^ OnRspQryProductExchRate;

            /// <summary>请求查询产品组</summary>
            event OnRspQryProductGroup^ OnRspQryProductGroup;

            /// <summary>请求查询做市商合约手续费率响应</summary>
            event OnRspQryMMInstrumentCommissionRate^ OnRspQryMMInstrumentCommissionRate;

            /// <summary>请求查询做市商期权合约手续费响应</summary>
            event OnRspQryMMOptionInstrCommRate^ OnRspQryMMOptionInstrCommRate;

            /// <summary>请求查询报单手续费响应</summary>
            event OnRspQryInstrumentOrderCommRate^ OnRspQryInstrumentOrderCommRate;

            /// <summary>请求查询资金账户响应</summary>
            event OnRspQrySecAgentTradingAccount^ OnRspQrySecAgentTradingAccount;

            /// <summary>请求查询二级代理商资金校验模式响应</summary>
            event OnRspQrySecAgentCheckMode^ OnRspQrySecAgentCheckMode;

            /// <summary>请求查询二级代理商信息响应</summary>
            event OnRspQrySecAgentTradeInfo^ OnRspQrySecAgentTradeInfo;

            /// <summary>请求查询期权交易成本响应</summary>
            event OnRspQryOptionInstrTradeCost^ OnRspQryOptionInstrTradeCost;

            /// <summary>请求查询期权合约手续费响应</summary>
            event OnRspQryOptionInstrCommRate^ OnRspQryOptionInstrCommRate;

            /// <summary>请求查询执行宣告响应</summary>
            event OnRspQryExecOrder^ OnRspQryExecOrder;

            /// <summary>请求查询询价响应</summary>
            event OnRspQryForQuote^ OnRspQryForQuote;

            /// <summary>请求查询报价响应</summary>
            event OnRspQryQuote^ OnRspQryQuote;

            /// <summary>请求查询期权自对冲响应</summary>
            event OnRspQryOptionSelfClose^ OnRspQryOptionSelfClose;

            /// <summary>请求查询投资单元响应</summary>
            event OnRspQryInvestUnit^ OnRspQryInvestUnit;

            /// <summary>请求查询组合合约安全系数响应</summary>
            event OnRspQryCombInstrumentGuard^ OnRspQryCombInstrumentGuard;

            /// <summary>请求查询申请组合响应</summary>
            event OnRspQryCombAction^ OnRspQryCombAction;

            /// <summary>请求查询转帐流水响应</summary>
            event OnRspQryTransferSerial^ OnRspQryTransferSerial;

            /// <summary>请求查询银期签约关系响应</summary>
            event OnRspQryAccountregister^ OnRspQryAccountregister;

            /// <summary>错误应答</summary>
            event OnRspError^ OnRspError;

            /// <summary>报单通知</summary>
            event OnRtnOrder^ OnRtnOrder;

            /// <summary>成交通知</summary>
            event OnRtnTrade^ OnRtnTrade;

            /// <summary>报单录入错误回报</summary>
            event OnErrRtnOrderInsert^ OnErrRtnOrderInsert;

            /// <summary>报单操作错误回报</summary>
            event OnErrRtnOrderAction^ OnErrRtnOrderAction;

            /// <summary>合约交易状态通知</summary>
            event OnRtnInstrumentStatus^ OnRtnInstrumentStatus;

            /// <summary>交易所公告通知</summary>
            event OnRtnBulletin^ OnRtnBulletin;

            /// <summary>交易通知</summary>
            event OnRtnTradingNotice^ OnRtnTradingNotice;

            /// <summary>提示条件单校验错误</summary>
            event OnRtnErrorConditionalOrder^ OnRtnErrorConditionalOrder;

            /// <summary>执行宣告通知</summary>
            event OnRtnExecOrder^ OnRtnExecOrder;

            /// <summary>执行宣告录入错误回报</summary>
            event OnErrRtnExecOrderInsert^ OnErrRtnExecOrderInsert;

            /// <summary>执行宣告操作错误回报</summary>
            event OnErrRtnExecOrderAction^ OnErrRtnExecOrderAction;

            /// <summary>询价录入错误回报</summary>
            event OnErrRtnForQuoteInsert^ OnErrRtnForQuoteInsert;

            /// <summary>报价通知</summary>
            event OnRtnQuote^ OnRtnQuote;

            /// <summary>报价录入错误回报</summary>
            event OnErrRtnQuoteInsert^ OnErrRtnQuoteInsert;

            /// <summary>报价操作错误回报</summary>
            event OnErrRtnQuoteAction^ OnErrRtnQuoteAction;

            /// <summary>询价通知</summary>
            event OnRtnForQuoteRsp^ OnRtnForQuoteRsp;

            /// <summary>保证金监控中心用户令牌</summary>
            event OnRtnCFMMCTradingAccountToken^ OnRtnCFMMCTradingAccountToken;

            /// <summary>批量报单操作错误回报</summary>
            event OnErrRtnBatchOrderAction^ OnErrRtnBatchOrderAction;

            /// <summary>期权自对冲通知</summary>
            event OnRtnOptionSelfClose^ OnRtnOptionSelfClose;

            /// <summary>期权自对冲录入错误回报</summary>
            event OnErrRtnOptionSelfCloseInsert^ OnErrRtnOptionSelfCloseInsert;

            /// <summary>期权自对冲操作错误回报</summary>
            event OnErrRtnOptionSelfCloseAction^ OnErrRtnOptionSelfCloseAction;

            /// <summary>申请组合通知</summary>
            event OnRtnCombAction^ OnRtnCombAction;

            /// <summary>申请组合录入错误回报</summary>
            event OnErrRtnCombActionInsert^ OnErrRtnCombActionInsert;

            /// <summary>请求查询签约银行响应</summary>
            event OnRspQryContractBank^ OnRspQryContractBank;

            /// <summary>请求查询预埋单响应</summary>
            event OnRspQryParkedOrder^ OnRspQryParkedOrder;

            /// <summary>请求查询预埋撤单响应</summary>
            event OnRspQryParkedOrderAction^ OnRspQryParkedOrderAction;

            /// <summary>请求查询交易通知响应</summary>
            event OnRspQryTradingNotice^ OnRspQryTradingNotice;

            /// <summary>请求查询经纪公司交易参数响应</summary>
            event OnRspQryBrokerTradingParams^ OnRspQryBrokerTradingParams;

            /// <summary>请求查询经纪公司交易算法响应</summary>
            event OnRspQryBrokerTradingAlgos^ OnRspQryBrokerTradingAlgos;

            /// <summary>请求查询监控中心用户令牌</summary>
            event OnRspQueryCFMMCTradingAccountToken^ OnRspQueryCFMMCTradingAccountToken;

            /// <summary>银行发起银行资金转期货通知</summary>
            event OnRtnFromBankToFutureByBank^ OnRtnFromBankToFutureByBank;

            /// <summary>银行发起期货资金转银行通知</summary>
            event OnRtnFromFutureToBankByBank^ OnRtnFromFutureToBankByBank;

            /// <summary>银行发起冲正银行转期货通知</summary>
            event OnRtnRepealFromBankToFutureByBank^ OnRtnRepealFromBankToFutureByBank;

            /// <summary>银行发起冲正期货转银行通知</summary>
            event OnRtnRepealFromFutureToBankByBank^ OnRtnRepealFromFutureToBankByBank;

            /// <summary>期货发起银行资金转期货通知</summary>
            event OnRtnFromBankToFutureByFuture^ OnRtnFromBankToFutureByFuture;

            /// <summary>期货发起期货资金转银行通知</summary>
            event OnRtnFromFutureToBankByFuture^ OnRtnFromFutureToBankByFuture;

            /// <summary>系统运行时期货端手工发起冲正银行转期货请求，银行处理完毕后报盘发回的通知</summary>
            event OnRtnRepealFromBankToFutureByFutureManual^ OnRtnRepealFromBankToFutureByFutureManual;

            /// <summary>系统运行时期货端手工发起冲正期货转银行请求，银行处理完毕后报盘发回的通知</summary>
            event OnRtnRepealFromFutureToBankByFutureManual^ OnRtnRepealFromFutureToBankByFutureManual;

            /// <summary>期货发起查询银行余额通知</summary>
            event OnRtnQueryBankBalanceByFuture^ OnRtnQueryBankBalanceByFuture;

            /// <summary>期货发起银行资金转期货错误回报</summary>
            event OnErrRtnBankToFutureByFuture^ OnErrRtnBankToFutureByFuture;

            /// <summary>期货发起期货资金转银行错误回报</summary>
            event OnErrRtnFutureToBankByFuture^ OnErrRtnFutureToBankByFuture;

            /// <summary>系统运行时期货端手工发起冲正银行转期货错误回报</summary>
            event OnErrRtnRepealBankToFutureByFutureManual^ OnErrRtnRepealBankToFutureByFutureManual;

            /// <summary>系统运行时期货端手工发起冲正期货转银行错误回报</summary>
            event OnErrRtnRepealFutureToBankByFutureManual^ OnErrRtnRepealFutureToBankByFutureManual;

            /// <summary>期货发起查询银行余额错误回报</summary>
            event OnErrRtnQueryBankBalanceByFuture^ OnErrRtnQueryBankBalanceByFuture;

            /// <summary>期货发起冲正银行转期货请求，银行处理完毕后报盘发回的通知</summary>
            event OnRtnRepealFromBankToFutureByFuture^ OnRtnRepealFromBankToFutureByFuture;

            /// <summary>期货发起冲正期货转银行请求，银行处理完毕后报盘发回的通知</summary>
            event OnRtnRepealFromFutureToBankByFuture^ OnRtnRepealFromFutureToBankByFuture;

            /// <summary>期货发起银行资金转期货应答</summary>
            event OnRspFromBankToFutureByFuture^ OnRspFromBankToFutureByFuture;

            /// <summary>期货发起期货资金转银行应答</summary>
            event OnRspFromFutureToBankByFuture^ OnRspFromFutureToBankByFuture;

            /// <summary>期货发起查询银行余额应答</summary>
            event OnRspQueryBankAccountMoneyByFuture^ OnRspQueryBankAccountMoneyByFuture;

            /// <summary>银行发起银期开户通知</summary>
            event OnRtnOpenAccountByBank^ OnRtnOpenAccountByBank;

            /// <summary>银行发起银期销户通知</summary>
            event OnRtnCancelAccountByBank^ OnRtnCancelAccountByBank;

            /// <summary>银行发起变更银行账号通知</summary>
            event OnRtnChangeAccountByBank^ OnRtnChangeAccountByBank;

#pragma endregion

#pragma region
        private:
            void OnFrontConnectedCallback();
            void OnFrontDisconnectedCallback(int nReason);
            void OnHeartBeatWarningCallback(int nTimeLapse);
            void OnRspAuthenticateCallback(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUserLoginCallback(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUserLogoutCallback(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUserPasswordUpdateCallback(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspTradingAccountPasswordUpdateCallback(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUserAuthMethodCallback(CThostFtdcRspUserAuthMethodField* pRspUserAuthMethod, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspGenUserCaptchaCallback(CThostFtdcRspGenUserCaptchaField* pRspGenUserCaptcha, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspGenUserTextCallback(CThostFtdcRspGenUserTextField* pRspGenUserText, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspOrderInsertCallback(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspParkedOrderInsertCallback(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspParkedOrderActionCallback(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspOrderActionCallback(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQueryMaxOrderVolumeCallback(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspSettlementInfoConfirmCallback(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspRemoveParkedOrderCallback(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspRemoveParkedOrderActionCallback(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspExecOrderInsertCallback(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspExecOrderActionCallback(CThostFtdcInputExecOrderActionField* pInputExecOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspForQuoteInsertCallback(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQuoteInsertCallback(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQuoteActionCallback(CThostFtdcInputQuoteActionField* pInputQuoteAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspBatchOrderActionCallback(CThostFtdcInputBatchOrderActionField* pInputBatchOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspOptionSelfCloseInsertCallback(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspOptionSelfCloseActionCallback(CThostFtdcInputOptionSelfCloseActionField* pInputOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspCombActionInsertCallback(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryOrderCallback(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTradeCallback(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestorPositionCallback(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTradingAccountCallback(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestorCallback(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTradingCodeCallback(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInstrumentMarginRateCallback(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInstrumentCommissionRateCallback(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryExchangeCallback(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryProductCallback(CThostFtdcProductField* pProduct, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInstrumentCallback(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryDepthMarketDataCallback(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySettlementInfoCallback(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTransferBankCallback(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestorPositionDetailCallback(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryNoticeCallback(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySettlementInfoConfirmCallback(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestorPositionCombineDetailCallback(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryCFMMCTradingAccountKeyCallback(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryEWarrantOffsetCallback(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestorProductGroupMarginCallback(CThostFtdcInvestorProductGroupMarginField* pInvestorProductGroupMargin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryExchangeMarginRateCallback(CThostFtdcExchangeMarginRateField* pExchangeMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryExchangeMarginRateAdjustCallback(CThostFtdcExchangeMarginRateAdjustField* pExchangeMarginRateAdjust, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryExchangeRateCallback(CThostFtdcExchangeRateField* pExchangeRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySecAgentACIDMapCallback(CThostFtdcSecAgentACIDMapField* pSecAgentACIDMap, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryProductExchRateCallback(CThostFtdcProductExchRateField* pProductExchRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryProductGroupCallback(CThostFtdcProductGroupField* pProductGroup, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryMMInstrumentCommissionRateCallback(CThostFtdcMMInstrumentCommissionRateField* pMMInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryMMOptionInstrCommRateCallback(CThostFtdcMMOptionInstrCommRateField* pMMOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInstrumentOrderCommRateCallback(CThostFtdcInstrumentOrderCommRateField* pInstrumentOrderCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySecAgentTradingAccountCallback(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySecAgentCheckModeCallback(CThostFtdcSecAgentCheckModeField* pSecAgentCheckMode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQrySecAgentTradeInfoCallback(CThostFtdcSecAgentTradeInfoField* pSecAgentTradeInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryOptionInstrTradeCostCallback(CThostFtdcOptionInstrTradeCostField* pOptionInstrTradeCost, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryOptionInstrCommRateCallback(CThostFtdcOptionInstrCommRateField* pOptionInstrCommRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryExecOrderCallback(CThostFtdcExecOrderField* pExecOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryForQuoteCallback(CThostFtdcForQuoteField* pForQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryQuoteCallback(CThostFtdcQuoteField* pQuote, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryOptionSelfCloseCallback(CThostFtdcOptionSelfCloseField* pOptionSelfClose, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryInvestUnitCallback(CThostFtdcInvestUnitField* pInvestUnit, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryCombInstrumentGuardCallback(CThostFtdcCombInstrumentGuardField* pCombInstrumentGuard, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryCombActionCallback(CThostFtdcCombActionField* pCombAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTransferSerialCallback(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryAccountregisterCallback(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspErrorCallback(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRtnOrderCallback(CThostFtdcOrderField* pOrder);
            void OnRtnTradeCallback(CThostFtdcTradeField* pTrade);
            void OnErrRtnOrderInsertCallback(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnOrderActionCallback(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnInstrumentStatusCallback(CThostFtdcInstrumentStatusField* pInstrumentStatus);
            void OnRtnBulletinCallback(CThostFtdcBulletinField* pBulletin);
            void OnRtnTradingNoticeCallback(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo);
            void OnRtnErrorConditionalOrderCallback(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder);
            void OnRtnExecOrderCallback(CThostFtdcExecOrderField* pExecOrder);
            void OnErrRtnExecOrderInsertCallback(CThostFtdcInputExecOrderField* pInputExecOrder, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnExecOrderActionCallback(CThostFtdcExecOrderActionField* pExecOrderAction, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnForQuoteInsertCallback(CThostFtdcInputForQuoteField* pInputForQuote, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnQuoteCallback(CThostFtdcQuoteField* pQuote);
            void OnErrRtnQuoteInsertCallback(CThostFtdcInputQuoteField* pInputQuote, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnQuoteActionCallback(CThostFtdcQuoteActionField* pQuoteAction, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnForQuoteRspCallback(CThostFtdcForQuoteRspField* pForQuoteRsp);
            void OnRtnCFMMCTradingAccountTokenCallback(CThostFtdcCFMMCTradingAccountTokenField* pCFMMCTradingAccountToken);
            void OnErrRtnBatchOrderActionCallback(CThostFtdcBatchOrderActionField* pBatchOrderAction, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnOptionSelfCloseCallback(CThostFtdcOptionSelfCloseField* pOptionSelfClose);
            void OnErrRtnOptionSelfCloseInsertCallback(CThostFtdcInputOptionSelfCloseField* pInputOptionSelfClose, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnOptionSelfCloseActionCallback(CThostFtdcOptionSelfCloseActionField* pOptionSelfCloseAction, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnCombActionCallback(CThostFtdcCombActionField* pCombAction);
            void OnErrRtnCombActionInsertCallback(CThostFtdcInputCombActionField* pInputCombAction, CThostFtdcRspInfoField* pRspInfo);
            void OnRspQryContractBankCallback(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryParkedOrderCallback(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryParkedOrderActionCallback(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryTradingNoticeCallback(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryBrokerTradingParamsCallback(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryBrokerTradingAlgosCallback(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQueryCFMMCTradingAccountTokenCallback(CThostFtdcQueryCFMMCTradingAccountTokenField* pQueryCFMMCTradingAccountToken, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRtnFromBankToFutureByBankCallback(CThostFtdcRspTransferField* pRspTransfer);
            void OnRtnFromFutureToBankByBankCallback(CThostFtdcRspTransferField* pRspTransfer);
            void OnRtnRepealFromBankToFutureByBankCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRtnRepealFromFutureToBankByBankCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRtnFromBankToFutureByFutureCallback(CThostFtdcRspTransferField* pRspTransfer);
            void OnRtnFromFutureToBankByFutureCallback(CThostFtdcRspTransferField* pRspTransfer);
            void OnRtnRepealFromBankToFutureByFutureManualCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRtnRepealFromFutureToBankByFutureManualCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRtnQueryBankBalanceByFutureCallback(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount);
            void OnErrRtnBankToFutureByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnFutureToBankByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnRepealBankToFutureByFutureManualCallback(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnRepealFutureToBankByFutureManualCallback(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo);
            void OnErrRtnQueryBankBalanceByFutureCallback(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo);
            void OnRtnRepealFromBankToFutureByFutureCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRtnRepealFromFutureToBankByFutureCallback(CThostFtdcRspRepealField* pRspRepeal);
            void OnRspFromBankToFutureByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspFromFutureToBankByFutureCallback(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQueryBankAccountMoneyByFutureCallback(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRtnOpenAccountByBankCallback(CThostFtdcOpenAccountField* pOpenAccount);
            void OnRtnCancelAccountByBankCallback(CThostFtdcCancelAccountField* pCancelAccount);
            void OnRtnChangeAccountByBankCallback(CThostFtdcChangeAccountField* pChangeAccount);
#pragma endregion

            TraderApi();
            ~TraderApi();

            HMODULE _hmodule = __nullptr;
            CThostFtdcTraderApi* _api = __nullptr;
            TraderSpi* _spi = __nullptr;
            List<GCHandle>^ _gchandles = gcnew List<GCHandle>();
        };
    }
}
