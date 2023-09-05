#pragma once
#include "Enums.g.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace Ctp
{
    namespace Net
    {
        /// <summary>用户登录请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqUserLoginField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>接口端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ InterfaceProductInfo;

            /// <summary>协议信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ProtocolInfo;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>动态密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ OneTimePassword;

            /// <summary>终端IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ClientIPAddress;

            /// <summary>登录备注</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ LoginRemark;

            /// <summary>终端IP端口</summary>
            int ClientIPPort;
        };

        /// <summary>用户登录应答</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspUserLoginField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>登录成功时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ LoginTime;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>交易系统名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ SystemName;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>最大报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ MaxOrderRef;

            /// <summary>上期所时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SHFETime;

            /// <summary>大商所时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ DCETime;

            /// <summary>郑商所时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CZCETime;

            /// <summary>中金所时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ FFEXTime;

            /// <summary>能源中心时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ INETime;
        };

        /// <summary>用户登出请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class UserLogoutField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;
        };

        /// <summary>客户端认证请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqAuthenticateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>认证码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ AuthCode;

            /// <summary>App代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ AppID;
        };

        /// <summary>客户端认证响应</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspAuthenticateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>App代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ AppID;

            /// <summary>App类型</summary>
            AppTypeType AppType;
        };

        /// <summary>响应信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspInfoField
        {
        public:
            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;
        };

        /// <summary>交易所</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExchangeField
        {
        public:
            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>交易所名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 61)]
            String^ ExchangeName;

            /// <summary>交易所属性</summary>
            ExchangePropertyType ExchangeProperty;
        };

        /// <summary>产品</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ProductField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>产品名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ProductName;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>产品类型</summary>
            ProductClassType ProductClass;

            /// <summary>合约数量乘数</summary>
            int VolumeMultiple;

            /// <summary>最小变动价位</summary>
            double PriceTick;

            /// <summary>市价单最大下单量</summary>
            int MaxMarketOrderVolume;

            /// <summary>市价单最小下单量</summary>
            int MinMarketOrderVolume;

            /// <summary>限价单最大下单量</summary>
            int MaxLimitOrderVolume;

            /// <summary>限价单最小下单量</summary>
            int MinLimitOrderVolume;

            /// <summary>持仓类型</summary>
            PositionTypeType PositionType;

            /// <summary>持仓日期类型</summary>
            PositionDateTypeType PositionDateType;

            /// <summary>平仓处理类型</summary>
            CloseDealTypeType CloseDealType;

            /// <summary>交易币种类型</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ TradeCurrencyID;

            /// <summary>质押资金可用范围</summary>
            MortgageFundUseRangeType MortgageFundUseRange;

            /// <summary>交易所产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeProductID;

            /// <summary>合约基础商品乘数</summary>
            double UnderlyingMultiple;
        };

        /// <summary>合约</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InstrumentField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ InstrumentName;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>产品类型</summary>
            ProductClassType ProductClass;

            /// <summary>交割年份</summary>
            int DeliveryYear;

            /// <summary>交割月</summary>
            int DeliveryMonth;

            /// <summary>市价单最大下单量</summary>
            int MaxMarketOrderVolume;

            /// <summary>市价单最小下单量</summary>
            int MinMarketOrderVolume;

            /// <summary>限价单最大下单量</summary>
            int MaxLimitOrderVolume;

            /// <summary>限价单最小下单量</summary>
            int MinLimitOrderVolume;

            /// <summary>合约数量乘数</summary>
            int VolumeMultiple;

            /// <summary>最小变动价位</summary>
            double PriceTick;

            /// <summary>创建日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CreateDate;

            /// <summary>上市日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ OpenDate;

            /// <summary>到期日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExpireDate;

            /// <summary>开始交割日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ StartDelivDate;

            /// <summary>结束交割日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ EndDelivDate;

            /// <summary>合约生命周期状态</summary>
            InstLifePhaseType InstLifePhase;

            /// <summary>当前是否交易</summary>
            int IsTrading;

            /// <summary>持仓类型</summary>
            PositionTypeType PositionType;

            /// <summary>持仓日期类型</summary>
            PositionDateTypeType PositionDateType;

            /// <summary>多头保证金率</summary>
            double LongMarginRatio;

            /// <summary>空头保证金率</summary>
            double ShortMarginRatio;

            /// <summary>是否使用大额单边保证金算法</summary>
            MaxMarginSideAlgorithmType MaxMarginSideAlgorithm;

            /// <summary>基础商品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ UnderlyingInstrID;

            /// <summary>执行价</summary>
            double StrikePrice;

            /// <summary>期权类型</summary>
            OptionsTypeType OptionsType;

            /// <summary>合约基础商品乘数</summary>
            double UnderlyingMultiple;

            /// <summary>组合类型</summary>
            CombinationTypeType CombinationType;
        };

        /// <summary>投资者</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestorField
        {
        public:
            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者分组代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorGroupID;

            /// <summary>投资者名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ InvestorName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdentifiedCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>是否活跃</summary>
            int IsActive;

            /// <summary>联系电话</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Telephone;

            /// <summary>通讯地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ Address;

            /// <summary>开户日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ OpenDate;

            /// <summary>手机</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Mobile;

            /// <summary>手续费率模板代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ CommModelID;

            /// <summary>保证金率模板代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ MarginModelID;
        };

        /// <summary>交易编码</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradingCodeField
        {
        public:
            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>是否活跃</summary>
            int IsActive;

            /// <summary>交易编码类型</summary>
            ClientIDTypeType ClientIDType;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>业务类型</summary>
            BizTypeType BizType;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>资金账户</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradingAccountField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>上次质押金额</summary>
            double PreMortgage;

            /// <summary>上次信用额度</summary>
            double PreCredit;

            /// <summary>上次存款额</summary>
            double PreDeposit;

            /// <summary>上次结算准备金</summary>
            double PreBalance;

            /// <summary>上次占用的保证金</summary>
            double PreMargin;

            /// <summary>利息基数</summary>
            double InterestBase;

            /// <summary>利息收入</summary>
            double Interest;

            /// <summary>入金金额</summary>
            double Deposit;

            /// <summary>出金金额</summary>
            double Withdraw;

            /// <summary>冻结的保证金</summary>
            double FrozenMargin;

            /// <summary>冻结的资金</summary>
            double FrozenCash;

            /// <summary>冻结的手续费</summary>
            double FrozenCommission;

            /// <summary>当前保证金总额</summary>
            double CurrMargin;

            /// <summary>资金差额</summary>
            double CashIn;

            /// <summary>手续费</summary>
            double Commission;

            /// <summary>平仓盈亏</summary>
            double CloseProfit;

            /// <summary>持仓盈亏</summary>
            double PositionProfit;

            /// <summary>期货结算准备金</summary>
            double Balance;

            /// <summary>可用资金</summary>
            double Available;

            /// <summary>可取资金</summary>
            double WithdrawQuota;

            /// <summary>基本准备金</summary>
            double Reserve;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>信用额度</summary>
            double Credit;

            /// <summary>质押金额</summary>
            double Mortgage;

            /// <summary>交易所保证金</summary>
            double ExchangeMargin;

            /// <summary>投资者交割保证金</summary>
            double DeliveryMargin;

            /// <summary>交易所交割保证金</summary>
            double ExchangeDeliveryMargin;

            /// <summary>保底期货结算准备金</summary>
            double ReserveBalance;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>上次货币质入金额</summary>
            double PreFundMortgageIn;

            /// <summary>上次货币质出金额</summary>
            double PreFundMortgageOut;

            /// <summary>货币质入金额</summary>
            double FundMortgageIn;

            /// <summary>货币质出金额</summary>
            double FundMortgageOut;

            /// <summary>货币质押余额</summary>
            double FundMortgageAvailable;

            /// <summary>可质押货币金额</summary>
            double MortgageableFund;

            /// <summary>特殊产品占用保证金</summary>
            double SpecProductMargin;

            /// <summary>特殊产品冻结保证金</summary>
            double SpecProductFrozenMargin;

            /// <summary>特殊产品手续费</summary>
            double SpecProductCommission;

            /// <summary>特殊产品冻结手续费</summary>
            double SpecProductFrozenCommission;

            /// <summary>特殊产品持仓盈亏</summary>
            double SpecProductPositionProfit;

            /// <summary>特殊产品平仓盈亏</summary>
            double SpecProductCloseProfit;

            /// <summary>根据持仓盈亏算法计算的特殊产品持仓盈亏</summary>
            double SpecProductPositionProfitByAlg;

            /// <summary>特殊产品交易所保证金</summary>
            double SpecProductExchangeMargin;

            /// <summary>业务类型</summary>
            BizTypeType BizType;

            /// <summary>延时换汇冻结金额</summary>
            double FrozenSwap;

            /// <summary>剩余换汇额度</summary>
            double RemainSwap;
        };

        /// <summary>投资者持仓</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestorPositionField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>持仓多空方向</summary>
            PosiDirectionType PosiDirection;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>持仓日期</summary>
            PositionDateType PositionDate;

            /// <summary>上日持仓</summary>
            int YdPosition;

            /// <summary>今日持仓</summary>
            int Position;

            /// <summary>多头冻结</summary>
            int LongFrozen;

            /// <summary>空头冻结</summary>
            int ShortFrozen;

            /// <summary>开仓冻结金额</summary>
            double LongFrozenAmount;

            /// <summary>开仓冻结金额</summary>
            double ShortFrozenAmount;

            /// <summary>开仓量</summary>
            int OpenVolume;

            /// <summary>平仓量</summary>
            int CloseVolume;

            /// <summary>开仓金额</summary>
            double OpenAmount;

            /// <summary>平仓金额</summary>
            double CloseAmount;

            /// <summary>持仓成本</summary>
            double PositionCost;

            /// <summary>上次占用的保证金</summary>
            double PreMargin;

            /// <summary>占用的保证金</summary>
            double UseMargin;

            /// <summary>冻结的保证金</summary>
            double FrozenMargin;

            /// <summary>冻结的资金</summary>
            double FrozenCash;

            /// <summary>冻结的手续费</summary>
            double FrozenCommission;

            /// <summary>资金差额</summary>
            double CashIn;

            /// <summary>手续费</summary>
            double Commission;

            /// <summary>平仓盈亏</summary>
            double CloseProfit;

            /// <summary>持仓盈亏</summary>
            double PositionProfit;

            /// <summary>上次结算价</summary>
            double PreSettlementPrice;

            /// <summary>本次结算价</summary>
            double SettlementPrice;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>开仓成本</summary>
            double OpenCost;

            /// <summary>交易所保证金</summary>
            double ExchangeMargin;

            /// <summary>组合成交形成的持仓</summary>
            int CombPosition;

            /// <summary>组合多头冻结</summary>
            int CombLongFrozen;

            /// <summary>组合空头冻结</summary>
            int CombShortFrozen;

            /// <summary>逐日盯市平仓盈亏</summary>
            double CloseProfitByDate;

            /// <summary>逐笔对冲平仓盈亏</summary>
            double CloseProfitByTrade;

            /// <summary>今日持仓</summary>
            int TodayPosition;

            /// <summary>保证金率</summary>
            double MarginRateByMoney;

            /// <summary>保证金率(按手数)</summary>
            double MarginRateByVolume;

            /// <summary>执行冻结</summary>
            int StrikeFrozen;

            /// <summary>执行冻结金额</summary>
            double StrikeFrozenAmount;

            /// <summary>放弃执行冻结</summary>
            int AbandonFrozen;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>执行冻结的昨仓</summary>
            int YdStrikeFrozen;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>大商所持仓成本差值，只有大商所使用</summary>
            double PositionCostOffset;

            /// <summary>tas持仓手数</summary>
            int TasPosition;

            /// <summary>tas持仓成本</summary>
            double TasPositionCost;
        };

        /// <summary>合约保证金率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InstrumentMarginRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>多头保证金率</summary>
            double LongMarginRatioByMoney;

            /// <summary>多头保证金费</summary>
            double LongMarginRatioByVolume;

            /// <summary>空头保证金率</summary>
            double ShortMarginRatioByMoney;

            /// <summary>空头保证金费</summary>
            double ShortMarginRatioByVolume;

            /// <summary>是否相对交易所收取</summary>
            int IsRelative;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>合约手续费率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InstrumentCommissionRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>开仓手续费率</summary>
            double OpenRatioByMoney;

            /// <summary>开仓手续费</summary>
            double OpenRatioByVolume;

            /// <summary>平仓手续费率</summary>
            double CloseRatioByMoney;

            /// <summary>平仓手续费</summary>
            double CloseRatioByVolume;

            /// <summary>平今手续费率</summary>
            double CloseTodayRatioByMoney;

            /// <summary>平今手续费</summary>
            double CloseTodayRatioByVolume;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>业务类型</summary>
            BizTypeType BizType;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>深度行情</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class DepthMarketDataField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>最新价</summary>
            double LastPrice;

            /// <summary>上次结算价</summary>
            double PreSettlementPrice;

            /// <summary>昨收盘</summary>
            double PreClosePrice;

            /// <summary>昨持仓量</summary>
            double PreOpenInterest;

            /// <summary>今开盘</summary>
            double OpenPrice;

            /// <summary>最高价</summary>
            double HighestPrice;

            /// <summary>最低价</summary>
            double LowestPrice;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>成交金额</summary>
            double Turnover;

            /// <summary>持仓量</summary>
            double OpenInterest;

            /// <summary>今收盘</summary>
            double ClosePrice;

            /// <summary>本次结算价</summary>
            double SettlementPrice;

            /// <summary>涨停板价</summary>
            double UpperLimitPrice;

            /// <summary>跌停板价</summary>
            double LowerLimitPrice;

            /// <summary>昨虚实度</summary>
            double PreDelta;

            /// <summary>今虚实度</summary>
            double CurrDelta;

            /// <summary>最后修改时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ UpdateTime;

            /// <summary>最后修改毫秒</summary>
            int UpdateMillisec;

            /// <summary>申买价一</summary>
            double BidPrice1;

            /// <summary>申买量一</summary>
            int BidVolume1;

            /// <summary>申卖价一</summary>
            double AskPrice1;

            /// <summary>申卖量一</summary>
            int AskVolume1;

            /// <summary>申买价二</summary>
            double BidPrice2;

            /// <summary>申买量二</summary>
            int BidVolume2;

            /// <summary>申卖价二</summary>
            double AskPrice2;

            /// <summary>申卖量二</summary>
            int AskVolume2;

            /// <summary>申买价三</summary>
            double BidPrice3;

            /// <summary>申买量三</summary>
            int BidVolume3;

            /// <summary>申卖价三</summary>
            double AskPrice3;

            /// <summary>申卖量三</summary>
            int AskVolume3;

            /// <summary>申买价四</summary>
            double BidPrice4;

            /// <summary>申买量四</summary>
            int BidVolume4;

            /// <summary>申卖价四</summary>
            double AskPrice4;

            /// <summary>申卖量四</summary>
            int AskVolume4;

            /// <summary>申买价五</summary>
            double BidPrice5;

            /// <summary>申买量五</summary>
            int BidVolume5;

            /// <summary>申卖价五</summary>
            double AskPrice5;

            /// <summary>申卖量五</summary>
            int AskVolume5;

            /// <summary>当日均价</summary>
            double AveragePrice;

            /// <summary>业务日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDay;
        };

        /// <summary>投资者结算结果</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SettlementInfoField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>消息正文</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
            String^ Content;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>交易所保证金率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExchangeMarginRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>多头保证金率</summary>
            double LongMarginRatioByMoney;

            /// <summary>多头保证金费</summary>
            double LongMarginRatioByVolume;

            /// <summary>空头保证金率</summary>
            double ShortMarginRatioByMoney;

            /// <summary>空头保证金费</summary>
            double ShortMarginRatioByVolume;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>交易所保证金率调整</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExchangeMarginRateAdjustField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>跟随交易所投资者多头保证金率</summary>
            double LongMarginRatioByMoney;

            /// <summary>跟随交易所投资者多头保证金费</summary>
            double LongMarginRatioByVolume;

            /// <summary>跟随交易所投资者空头保证金率</summary>
            double ShortMarginRatioByMoney;

            /// <summary>跟随交易所投资者空头保证金费</summary>
            double ShortMarginRatioByVolume;

            /// <summary>交易所多头保证金率</summary>
            double ExchLongMarginRatioByMoney;

            /// <summary>交易所多头保证金费</summary>
            double ExchLongMarginRatioByVolume;

            /// <summary>交易所空头保证金率</summary>
            double ExchShortMarginRatioByMoney;

            /// <summary>交易所空头保证金费</summary>
            double ExchShortMarginRatioByVolume;

            /// <summary>不跟随交易所投资者多头保证金率</summary>
            double NoLongMarginRatioByMoney;

            /// <summary>不跟随交易所投资者多头保证金费</summary>
            double NoLongMarginRatioByVolume;

            /// <summary>不跟随交易所投资者空头保证金率</summary>
            double NoShortMarginRatioByMoney;

            /// <summary>不跟随交易所投资者空头保证金费</summary>
            double NoShortMarginRatioByVolume;
        };

        /// <summary>汇率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExchangeRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>源币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ FromCurrencyID;

            /// <summary>源币种单位数量</summary>
            double FromCurrencyUnit;

            /// <summary>目标币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ ToCurrencyID;

            /// <summary>汇率</summary>
            double ExchangeRate;
        };

        /// <summary>用户口令变更</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class UserPasswordUpdateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>原来的口令</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ OldPassword;

            /// <summary>新的口令</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ NewPassword;
        };

        /// <summary>输入报单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>报单价格条件</summary>
            OrderPriceTypeType OrderPriceType;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>组合开平标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombOffsetFlag;

            /// <summary>组合投机套保标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombHedgeFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量</summary>
            int VolumeTotalOriginal;

            /// <summary>有效期类型</summary>
            TimeConditionType TimeCondition;

            /// <summary>GTD日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ GTDDate;

            /// <summary>成交量类型</summary>
            VolumeConditionType VolumeCondition;

            /// <summary>最小成交量</summary>
            int MinVolume;

            /// <summary>触发条件</summary>
            ContingentConditionType ContingentCondition;

            /// <summary>止损价</summary>
            double StopPrice;

            /// <summary>强平原因</summary>
            ForceCloseReasonType ForceCloseReason;

            /// <summary>自动挂起标志</summary>
            int IsAutoSuspend;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>用户强评标志</summary>
            int UserForceClose;

            /// <summary>互换单标志</summary>
            int IsSwapOrder;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>报单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>报单价格条件</summary>
            OrderPriceTypeType OrderPriceType;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>组合开平标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombOffsetFlag;

            /// <summary>组合投机套保标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombHedgeFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量</summary>
            int VolumeTotalOriginal;

            /// <summary>有效期类型</summary>
            TimeConditionType TimeCondition;

            /// <summary>GTD日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ GTDDate;

            /// <summary>成交量类型</summary>
            VolumeConditionType VolumeCondition;

            /// <summary>最小成交量</summary>
            int MinVolume;

            /// <summary>触发条件</summary>
            ContingentConditionType ContingentCondition;

            /// <summary>止损价</summary>
            double StopPrice;

            /// <summary>强平原因</summary>
            ForceCloseReasonType ForceCloseReason;

            /// <summary>自动挂起标志</summary>
            int IsAutoSuspend;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>本地报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>报单提交状态</summary>
            OrderSubmitStatusType OrderSubmitStatus;

            /// <summary>报单提示序号</summary>
            int NotifySequence;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>报单来源</summary>
            OrderSourceType OrderSource;

            /// <summary>报单状态</summary>
            OrderStatusType OrderStatus;

            /// <summary>报单类型</summary>
            OrderTypeType OrderType;

            /// <summary>今成交数量</summary>
            int VolumeTraded;

            /// <summary>剩余数量</summary>
            int VolumeTotal;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>委托时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>激活时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActiveTime;

            /// <summary>挂起时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SuspendTime;

            /// <summary>最后修改时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ UpdateTime;

            /// <summary>撤销时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CancelTime;

            /// <summary>最后修改交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ActiveTraderID;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>用户强评标志</summary>
            int UserForceClose;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司报单编号</summary>
            int BrokerOrderSeq;

            /// <summary>相关报单</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ RelativeOrderSysID;

            /// <summary>郑商所成交数量</summary>
            int ZCETotalTradedVolume;

            /// <summary>互换单标志</summary>
            int IsSwapOrder;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>输入报单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报单操作引用</summary>
            int OrderActionRef;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量变化</summary>
            int VolumeChange;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>报单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报单操作引用</summary>
            int OrderActionRef;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量变化</summary>
            int VolumeChange;

            /// <summary>操作日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDate;

            /// <summary>操作时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionTime;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>本地报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderLocalID;

            /// <summary>操作本地编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>报单操作状态</summary>
            OrderActionStatusType OrderActionStatus;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>成交</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>成交编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TradeID;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>交易角色</summary>
            TradingRoleType TradingRole;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>开平标志</summary>
            OffsetFlagType OffsetFlag;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>价格</summary>
            double Price;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>成交时期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>成交时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>成交类型</summary>
            TradeTypeType TradeType;

            /// <summary>成交价来源</summary>
            PriceSourceType PriceSource;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>本地报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderLocalID;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>经纪公司报单编号</summary>
            int BrokerOrderSeq;

            /// <summary>成交来源</summary>
            TradeSourceType TradeSource;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询最大报单数量</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QueryMaxOrderVolumeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>开平标志</summary>
            OffsetFlagType OffsetFlag;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>最大允许报单数量</summary>
            int MaxVolume;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>投资者结算结果确认信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SettlementInfoConfirmField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>确认日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ConfirmDate;

            /// <summary>确认时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ConfirmTime;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>查询报单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeEnd;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询成交</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTradeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>成交编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TradeID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTimeEnd;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询投资者持仓</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestorPositionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询资金账户</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTradingAccountField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>业务类型</summary>
            BizTypeType BizType;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;
        };

        /// <summary>查询投资者</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestorField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;
        };

        /// <summary>查询交易编码</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTradingCodeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>交易编码类型</summary>
            ClientIDTypeType ClientIDType;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询合约保证金率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInstrumentMarginRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询手续费率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInstrumentCommissionRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询交易所</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryExchangeField
        {
        public:
            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>查询产品</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryProductField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>产品类型</summary>
            ProductClassType ProductClass;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>查询合约</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInstrumentField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;
        };

        /// <summary>查询行情</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryDepthMarketDataField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>查询投资者结算结果</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QrySettlementInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>查询交易所保证金率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryExchangeMarginRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>查询交易所调整保证金率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryExchangeMarginRateAdjustField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;
        };

        /// <summary>查询汇率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryExchangeRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>源币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ FromCurrencyID;

            /// <summary>目标币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ ToCurrencyID;
        };

        /// <summary>当前期权合约手续费的详细内容</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OptionInstrCommRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>开仓手续费率</summary>
            double OpenRatioByMoney;

            /// <summary>开仓手续费</summary>
            double OpenRatioByVolume;

            /// <summary>平仓手续费率</summary>
            double CloseRatioByMoney;

            /// <summary>平仓手续费</summary>
            double CloseRatioByVolume;

            /// <summary>平今手续费率</summary>
            double CloseTodayRatioByMoney;

            /// <summary>平今手续费</summary>
            double CloseTodayRatioByVolume;

            /// <summary>执行手续费率</summary>
            double StrikeRatioByMoney;

            /// <summary>执行手续费</summary>
            double StrikeRatioByVolume;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>期权交易成本</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OptionInstrTradeCostField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>期权合约保证金不变部分</summary>
            double FixedMargin;

            /// <summary>期权合约最小保证金</summary>
            double MiniMargin;

            /// <summary>期权合约权利金</summary>
            double Royalty;

            /// <summary>交易所期权合约保证金不变部分</summary>
            double ExchFixedMargin;

            /// <summary>交易所期权合约最小保证金</summary>
            double ExchMiniMargin;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>期权交易成本查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryOptionInstrTradeCostField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>期权合约报价</summary>
            double InputPrice;

            /// <summary>标的价格,填0则用昨结算价</summary>
            double UnderlyingPrice;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>期权手续费率查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryOptionInstrCommRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>输入的执行宣告</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputExecOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>执行宣告引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>开平标志</summary>
            OffsetFlagType OffsetFlag;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>执行类型</summary>
            ActionTypeType ActionType;

            /// <summary>保留头寸申请的持仓方向</summary>
            PosiDirectionType PosiDirection;

            /// <summary>期权行权后是否保留期货头寸的标记,该字段已废弃</summary>
            ExecOrderPositionFlagType ReservePositionFlag;

            /// <summary>期权行权后生成的头寸是否自动平仓</summary>
            ExecOrderCloseFlagType CloseFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>输入执行宣告操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputExecOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>执行宣告操作引用</summary>
            int ExecOrderActionRef;

            /// <summary>执行宣告引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>执行宣告操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ExecOrderSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>执行宣告</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExecOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>执行宣告引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>开平标志</summary>
            OffsetFlagType OffsetFlag;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>执行类型</summary>
            ActionTypeType ActionType;

            /// <summary>保留头寸申请的持仓方向</summary>
            PosiDirectionType PosiDirection;

            /// <summary>期权行权后是否保留期货头寸的标记,该字段已废弃</summary>
            ExecOrderPositionFlagType ReservePositionFlag;

            /// <summary>期权行权后生成的头寸是否自动平仓</summary>
            ExecOrderCloseFlagType CloseFlag;

            /// <summary>本地执行宣告编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>执行宣告提交状态</summary>
            OrderSubmitStatusType OrderSubmitStatus;

            /// <summary>报单提示序号</summary>
            int NotifySequence;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>执行宣告编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ExecOrderSysID;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>插入时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>撤销时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CancelTime;

            /// <summary>执行结果</summary>
            ExecResultType ExecResult;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司报单编号</summary>
            int BrokerExecOrderSeq;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>执行宣告操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ExecOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>执行宣告操作引用</summary>
            int ExecOrderActionRef;

            /// <summary>执行宣告引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>执行宣告操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ExecOrderSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>操作日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDate;

            /// <summary>操作时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionTime;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>本地执行宣告编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ExecOrderLocalID;

            /// <summary>操作本地编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>报单操作状态</summary>
            OrderActionStatusType OrderActionStatus;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>执行类型</summary>
            ActionTypeType ActionType;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>执行宣告查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryExecOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>执行宣告编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ExecOrderSysID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeEnd;
        };

        /// <summary>输入的询价</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputForQuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>询价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ForQuoteRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>询价</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ForQuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>询价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ForQuoteRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>本地询价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ForQuoteLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>插入时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>询价状态</summary>
            ForQuoteStatusType ForQuoteStatus;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司询价编号</summary>
            int BrokerForQutoSeq;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>询价查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryForQuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeEnd;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>输入的报价</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputQuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>卖价格</summary>
            double AskPrice;

            /// <summary>买价格</summary>
            double BidPrice;

            /// <summary>卖数量</summary>
            int AskVolume;

            /// <summary>买数量</summary>
            int BidVolume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>卖开平标志</summary>
            OffsetFlagType AskOffsetFlag;

            /// <summary>买开平标志</summary>
            OffsetFlagType BidOffsetFlag;

            /// <summary>卖投机套保标志</summary>
            HedgeFlagType AskHedgeFlag;

            /// <summary>买投机套保标志</summary>
            HedgeFlagType BidHedgeFlag;

            /// <summary>衍生卖报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AskOrderRef;

            /// <summary>衍生买报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BidOrderRef;

            /// <summary>应价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ForQuoteSysID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>输入报价操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputQuoteActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报价操作引用</summary>
            int QuoteActionRef;

            /// <summary>报价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报价操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ QuoteSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>报价</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>卖价格</summary>
            double AskPrice;

            /// <summary>买价格</summary>
            double BidPrice;

            /// <summary>卖数量</summary>
            int AskVolume;

            /// <summary>买数量</summary>
            int BidVolume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>卖开平标志</summary>
            OffsetFlagType AskOffsetFlag;

            /// <summary>买开平标志</summary>
            OffsetFlagType BidOffsetFlag;

            /// <summary>卖投机套保标志</summary>
            HedgeFlagType AskHedgeFlag;

            /// <summary>买投机套保标志</summary>
            HedgeFlagType BidHedgeFlag;

            /// <summary>本地报价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>报价提示序号</summary>
            int NotifySequence;

            /// <summary>报价提交状态</summary>
            OrderSubmitStatusType OrderSubmitStatus;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>报价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ QuoteSysID;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>插入时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>撤销时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CancelTime;

            /// <summary>报价状态</summary>
            OrderStatusType QuoteStatus;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>卖方报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ AskOrderSysID;

            /// <summary>买方报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BidOrderSysID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司报价编号</summary>
            int BrokerQuoteSeq;

            /// <summary>衍生卖报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AskOrderRef;

            /// <summary>衍生买报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BidOrderRef;

            /// <summary>应价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ForQuoteSysID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>报价操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QuoteActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报价操作引用</summary>
            int QuoteActionRef;

            /// <summary>报价引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报价操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ QuoteSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>操作日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDate;

            /// <summary>操作时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionTime;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>本地报价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ QuoteLocalID;

            /// <summary>操作本地编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>报单操作状态</summary>
            OrderActionStatusType OrderActionStatus;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>报价查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryQuoteField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ QuoteSysID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeEnd;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>发给做市商的询价请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ForQuoteRspField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>询价编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ForQuoteSysID;

            /// <summary>询价时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ForQuoteTime;

            /// <summary>业务日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDay;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>输入批量报单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputBatchOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报单操作引用</summary>
            int OrderActionRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>批量报单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class BatchOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报单操作引用</summary>
            int OrderActionRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>操作日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDate;

            /// <summary>操作时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionTime;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>操作本地编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>报单操作状态</summary>
            OrderActionStatusType OrderActionStatus;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>组合合约安全系数</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class CombInstrumentGuardField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary></summary>
            double GuarantRatio;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>组合合约安全系数查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryCombInstrumentGuardField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>输入的申请组合</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputCombActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>组合引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ CombActionRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>组合指令方向</summary>
            CombDirectionType CombDirection;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;
        };

        /// <summary>申请组合</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class CombActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>组合引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ CombActionRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>组合指令方向</summary>
            CombDirectionType CombDirection;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>本地申请组合编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>组合状态</summary>
            OrderActionStatusType ActionStatus;

            /// <summary>报单提示序号</summary>
            int NotifySequence;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>组合编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ComTradeID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>申请组合查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryCombActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>产品报价汇率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ProductExchRateField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>报价币种类型</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ QuoteCurrencyID;

            /// <summary>汇率</summary>
            double ExchangeRate;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>产品报价汇率查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryProductExchRateField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>当前做市商期权合约手续费的详细内容</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class MMOptionInstrCommRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>开仓手续费率</summary>
            double OpenRatioByMoney;

            /// <summary>开仓手续费</summary>
            double OpenRatioByVolume;

            /// <summary>平仓手续费率</summary>
            double CloseRatioByMoney;

            /// <summary>平仓手续费</summary>
            double CloseRatioByVolume;

            /// <summary>平今手续费率</summary>
            double CloseTodayRatioByMoney;

            /// <summary>平今手续费</summary>
            double CloseTodayRatioByVolume;

            /// <summary>执行手续费率</summary>
            double StrikeRatioByMoney;

            /// <summary>执行手续费</summary>
            double StrikeRatioByVolume;
        };

        /// <summary>做市商期权手续费率查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryMMOptionInstrCommRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>做市商合约手续费率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class MMInstrumentCommissionRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>开仓手续费率</summary>
            double OpenRatioByMoney;

            /// <summary>开仓手续费</summary>
            double OpenRatioByVolume;

            /// <summary>平仓手续费率</summary>
            double CloseRatioByMoney;

            /// <summary>平仓手续费</summary>
            double CloseRatioByVolume;

            /// <summary>平今手续费率</summary>
            double CloseTodayRatioByMoney;

            /// <summary>平今手续费</summary>
            double CloseTodayRatioByVolume;
        };

        /// <summary>查询做市商合约手续费率</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryMMInstrumentCommissionRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>当前报单手续费的详细内容</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InstrumentOrderCommRateField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>报单手续费</summary>
            double OrderCommByVolume;

            /// <summary>撤单手续费</summary>
            double OrderActionCommByVolume;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>报单手续费率查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInstrumentOrderCommRateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>输入的期权自对冲</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputOptionSelfCloseField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>期权自对冲引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>期权行权的头寸是否自对冲</summary>
            OptSelfCloseFlagType OptSelfCloseFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>输入期权自对冲操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InputOptionSelfCloseActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>期权自对冲操作引用</summary>
            int OptionSelfCloseActionRef;

            /// <summary>期权自对冲引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>期权自对冲操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OptionSelfCloseSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>期权自对冲</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OptionSelfCloseField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>期权自对冲引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>期权行权的头寸是否自对冲</summary>
            OptSelfCloseFlagType OptSelfCloseFlag;

            /// <summary>本地期权自对冲编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>期权自对冲提交状态</summary>
            OrderSubmitStatusType OrderSubmitStatus;

            /// <summary>报单提示序号</summary>
            int NotifySequence;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>期权自对冲编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OptionSelfCloseSysID;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>插入时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>撤销时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CancelTime;

            /// <summary>自对冲结果</summary>
            ExecResultType ExecResult;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司报单编号</summary>
            int BrokerOptionSelfCloseSeq;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>期权自对冲操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OptionSelfCloseActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>期权自对冲操作引用</summary>
            int OptionSelfCloseActionRef;

            /// <summary>期权自对冲引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>期权自对冲操作编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OptionSelfCloseSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>操作日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionDate;

            /// <summary>操作时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActionTime;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>本地期权自对冲编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OptionSelfCloseLocalID;

            /// <summary>操作本地编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ActionLocalID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>报单操作状态</summary>
            OrderActionStatusType OrderActionStatus;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>期权自对冲查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryOptionSelfCloseField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>期权自对冲编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OptionSelfCloseSysID;

            /// <summary>开始时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeStart;

            /// <summary>结束时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTimeEnd;
        };

        /// <summary>投资单元</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestUnitField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>投资者单元名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ InvestorUnitName;

            /// <summary>投资者分组代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorGroupID;

            /// <summary>手续费率模板代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ CommModelID;

            /// <summary>保证金率模板代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ MarginModelID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>查询投资单元</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestUnitField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>二级代理商资金校验模式</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SecAgentCheckModeField
        {
        public:
            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>境外中介机构资金帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BrokerSecAgentID;

            /// <summary>是否需要校验自己的资金账户</summary>
            int CheckSelfAccount;
        };

        /// <summary>二级代理商信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SecAgentTradeInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>境外中介机构资金帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BrokerSecAgentID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>二级代理商姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>指定的合约</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SpecificInstrumentField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>合约状态</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InstrumentStatusField
        {
        public:
            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>结算组代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SettlementGroupID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>合约交易状态</summary>
            InstrumentStatusType InstrumentStatus;

            /// <summary>交易阶段编号</summary>
            int TradingSegmentSN;

            /// <summary>进入本状态时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ EnterTime;

            /// <summary>进入本状态原因</summary>
            InstStatusEnterReasonType EnterReason;
        };

        /// <summary>查询转帐银行</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTransferBankField
        {
        public:
            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分中心代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBrchID;
        };

        /// <summary>转帐银行</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TransferBankField
        {
        public:
            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分中心代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBrchID;

            /// <summary>银行名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ BankName;

            /// <summary>是否活跃</summary>
            int IsActive;
        };

        /// <summary>查询投资者持仓明细</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestorPositionDetailField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>投资者持仓明细</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestorPositionDetailField
        {
        public:
            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>买卖</summary>
            DirectionType Direction;

            /// <summary>开仓日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ OpenDate;

            /// <summary>成交编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TradeID;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>开仓价</summary>
            double OpenPrice;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>成交类型</summary>
            TradeTypeType TradeType;

            /// <summary>组合合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ CombInstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>逐日盯市平仓盈亏</summary>
            double CloseProfitByDate;

            /// <summary>逐笔对冲平仓盈亏</summary>
            double CloseProfitByTrade;

            /// <summary>逐日盯市持仓盈亏</summary>
            double PositionProfitByDate;

            /// <summary>逐笔对冲持仓盈亏</summary>
            double PositionProfitByTrade;

            /// <summary>投资者保证金</summary>
            double Margin;

            /// <summary>交易所保证金</summary>
            double ExchMargin;

            /// <summary>保证金率</summary>
            double MarginRateByMoney;

            /// <summary>保证金率(按手数)</summary>
            double MarginRateByVolume;

            /// <summary>昨结算价</summary>
            double LastSettlementPrice;

            /// <summary>结算价</summary>
            double SettlementPrice;

            /// <summary>平仓量</summary>
            int CloseVolume;

            /// <summary>平仓金额</summary>
            double CloseAmount;

            /// <summary>先开先平剩余数量（DCE）</summary>
            int TimeFirstVolume;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>特殊持仓标志</summary>
            SpecPosiTypeType SpecPosiType;
        };

        /// <summary>查询客户通知</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryNoticeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;
        };

        /// <summary>客户通知</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class NoticeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>消息正文</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
            String^ Content;

            /// <summary>经纪公司通知内容序列号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
            String^ SequenceLabel;
        };

        /// <summary>查询结算信息确认域</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QrySettlementInfoConfirmField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>资金账户口令变更域</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradingAccountPasswordUpdateField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>原来的口令</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ OldPassword;

            /// <summary>新的口令</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ NewPassword;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>查询签约银行请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryContractBankField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分中心代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBrchID;
        };

        /// <summary>查询签约银行响应</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ContractBankField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分中心代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBrchID;

            /// <summary>银行名称</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ BankName;
        };

        /// <summary>投资者组合持仓明细</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestorPositionCombineDetailField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>开仓日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ OpenDate;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>组合编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ComTradeID;

            /// <summary>撮合编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TradeID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>买卖</summary>
            DirectionType Direction;

            /// <summary>持仓量</summary>
            int TotalAmt;

            /// <summary>投资者保证金</summary>
            double Margin;

            /// <summary>交易所保证金</summary>
            double ExchMargin;

            /// <summary>保证金率</summary>
            double MarginRateByMoney;

            /// <summary>保证金率(按手数)</summary>
            double MarginRateByVolume;

            /// <summary>单腿编号</summary>
            int LegID;

            /// <summary>单腿乘数</summary>
            int LegMultiple;

            /// <summary>组合持仓合约编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ CombInstrumentID;

            /// <summary>成交组号</summary>
            int TradeGroupID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>预埋单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ParkedOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>报单价格条件</summary>
            OrderPriceTypeType OrderPriceType;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>组合开平标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombOffsetFlag;

            /// <summary>组合投机套保标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombHedgeFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量</summary>
            int VolumeTotalOriginal;

            /// <summary>有效期类型</summary>
            TimeConditionType TimeCondition;

            /// <summary>GTD日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ GTDDate;

            /// <summary>成交量类型</summary>
            VolumeConditionType VolumeCondition;

            /// <summary>最小成交量</summary>
            int MinVolume;

            /// <summary>触发条件</summary>
            ContingentConditionType ContingentCondition;

            /// <summary>止损价</summary>
            double StopPrice;

            /// <summary>强平原因</summary>
            ForceCloseReasonType ForceCloseReason;

            /// <summary>自动挂起标志</summary>
            int IsAutoSuspend;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>用户强评标志</summary>
            int UserForceClose;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>预埋报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ParkedOrderID;

            /// <summary>用户类型</summary>
            UserTypeType UserType;

            /// <summary>预埋单状态</summary>
            ParkedOrderStatusType Status;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>互换单标志</summary>
            int IsSwapOrder;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>交易编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>输入预埋单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ParkedOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>报单操作引用</summary>
            int OrderActionRef;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>操作标志</summary>
            ActionFlagType ActionFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量变化</summary>
            int VolumeChange;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>预埋撤单单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ParkedOrderActionID;

            /// <summary>用户类型</summary>
            UserTypeType UserType;

            /// <summary>预埋撤单状态</summary>
            ParkedOrderStatusType Status;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>查询预埋单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryParkedOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询预埋撤单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryParkedOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>删除预埋单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RemoveParkedOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>预埋报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ParkedOrderID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>删除预埋撤单</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RemoveParkedOrderActionField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>预埋撤单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ ParkedOrderActionID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询组合持仓明细</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestorPositionCombineDetailField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>组合持仓合约编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ CombInstrumentID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>用户事件通知信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradingNoticeInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>发送时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SendTime;

            /// <summary>消息正文</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
            String^ FieldContent;

            /// <summary>序列系列号</summary>
            short SequenceSeries;

            /// <summary>序列号</summary>
            int SequenceNo;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>用户事件通知</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TradingNoticeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者范围</summary>
            InvestorRangeType InvestorRange;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>序列系列号</summary>
            short SequenceSeries;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>发送时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SendTime;

            /// <summary>序列号</summary>
            int SequenceNo;

            /// <summary>消息正文</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
            String^ FieldContent;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询交易事件通知</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTradingNoticeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询错误报单操作</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ErrorConditionalOrderField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>报单引用</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderRef;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>报单价格条件</summary>
            OrderPriceTypeType OrderPriceType;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>组合开平标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombOffsetFlag;

            /// <summary>组合投机套保标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ CombHedgeFlag;

            /// <summary>价格</summary>
            double LimitPrice;

            /// <summary>数量</summary>
            int VolumeTotalOriginal;

            /// <summary>有效期类型</summary>
            TimeConditionType TimeCondition;

            /// <summary>GTD日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ GTDDate;

            /// <summary>成交量类型</summary>
            VolumeConditionType VolumeCondition;

            /// <summary>最小成交量</summary>
            int MinVolume;

            /// <summary>触发条件</summary>
            ContingentConditionType ContingentCondition;

            /// <summary>止损价</summary>
            double StopPrice;

            /// <summary>强平原因</summary>
            ForceCloseReasonType ForceCloseReason;

            /// <summary>自动挂起标志</summary>
            int IsAutoSuspend;

            /// <summary>业务单元</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ BusinessUnit;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>本地报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ OrderLocalID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>会员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>客户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClientID;

            /// <summary>合约在交易所的代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ExchangeInstID;

            /// <summary>交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ TraderID;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>报单提交状态</summary>
            OrderSubmitStatusType OrderSubmitStatus;

            /// <summary>报单提示序号</summary>
            int NotifySequence;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>报单编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ OrderSysID;

            /// <summary>报单来源</summary>
            OrderSourceType OrderSource;

            /// <summary>报单状态</summary>
            OrderStatusType OrderStatus;

            /// <summary>报单类型</summary>
            OrderTypeType OrderType;

            /// <summary>今成交数量</summary>
            int VolumeTraded;

            /// <summary>剩余数量</summary>
            int VolumeTotal;

            /// <summary>报单日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertDate;

            /// <summary>委托时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ InsertTime;

            /// <summary>激活时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ActiveTime;

            /// <summary>挂起时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SuspendTime;

            /// <summary>最后修改时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ UpdateTime;

            /// <summary>撤销时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ CancelTime;

            /// <summary>最后修改交易所交易员代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ActiveTraderID;

            /// <summary>结算会员编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ClearingPartID;

            /// <summary>序号</summary>
            int SequenceNo;

            /// <summary>前置编号</summary>
            int FrontID;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>状态信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ StatusMsg;

            /// <summary>用户强评标志</summary>
            int UserForceClose;

            /// <summary>操作用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ActiveUserID;

            /// <summary>经纪公司报单编号</summary>
            int BrokerOrderSeq;

            /// <summary>相关报单</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ RelativeOrderSysID;

            /// <summary>郑商所成交数量</summary>
            int ZCETotalTradedVolume;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>互换单标志</summary>
            int IsSwapOrder;

            /// <summary>营业部编号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ BranchID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;

            /// <summary>资金账号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ IPAddress;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;
        };

        /// <summary>查询经纪公司交易参数</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryBrokerTradingParamsField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;
        };

        /// <summary>经纪公司交易参数</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class BrokerTradingParamsField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>保证金价格类型</summary>
            MarginPriceTypeType MarginPriceType;

            /// <summary>盈亏算法</summary>
            AlgorithmType Algorithm;

            /// <summary>可用是否包含平仓盈利</summary>
            IncludeCloseProfitType AvailIncludeCloseProfit;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>期权权利金价格类型</summary>
            OptionRoyaltyPriceTypeType OptionRoyaltyPriceType;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;
        };

        /// <summary>查询经纪公司交易算法</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryBrokerTradingAlgosField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>经纪公司交易算法</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class BrokerTradingAlgosField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>持仓处理算法编号</summary>
            HandlePositionAlgoIDType HandlePositionAlgoID;

            /// <summary>寻找保证金率算法编号</summary>
            FindMarginRateAlgoIDType FindMarginRateAlgoID;

            /// <summary>资金处理算法编号</summary>
            HandleTradingAccountAlgoIDType HandleTradingAccountAlgoID;
        };

        /// <summary>保证金监管系统经纪公司资金账户密钥</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class CFMMCTradingAccountKeyField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>经纪公司统一编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>密钥编号</summary>
            int KeyID;

            /// <summary>动态密钥</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ CurrentKey;
        };

        /// <summary>请求查询保证金监管系统经纪公司资金账户密钥</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryCFMMCTradingAccountKeyField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;
        };

        /// <summary>仓单折抵信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class EWarrantOffsetField
        {
        public:
            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>买卖方向</summary>
            DirectionType Direction;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>数量</summary>
            int Volume;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询仓单折抵信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryEWarrantOffsetField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询投资者品种/跨品种保证金</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryInvestorProductGroupMarginField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>品种/跨品种标示</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductGroupID;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>投资者品种/跨品种保证金</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class InvestorProductGroupMarginField
        {
        public:
            /// <summary>品种/跨品种标示</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductGroupID;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>结算编号</summary>
            int SettlementID;

            /// <summary>冻结的保证金</summary>
            double FrozenMargin;

            /// <summary>多头冻结的保证金</summary>
            double LongFrozenMargin;

            /// <summary>空头冻结的保证金</summary>
            double ShortFrozenMargin;

            /// <summary>占用的保证金</summary>
            double UseMargin;

            /// <summary>多头保证金</summary>
            double LongUseMargin;

            /// <summary>空头保证金</summary>
            double ShortUseMargin;

            /// <summary>交易所保证金</summary>
            double ExchMargin;

            /// <summary>交易所多头保证金</summary>
            double LongExchMargin;

            /// <summary>交易所空头保证金</summary>
            double ShortExchMargin;

            /// <summary>平仓盈亏</summary>
            double CloseProfit;

            /// <summary>冻结的手续费</summary>
            double FrozenCommission;

            /// <summary>手续费</summary>
            double Commission;

            /// <summary>冻结的资金</summary>
            double FrozenCash;

            /// <summary>资金差额</summary>
            double CashIn;

            /// <summary>持仓盈亏</summary>
            double PositionProfit;

            /// <summary>折抵总金额</summary>
            double OffsetAmount;

            /// <summary>多头折抵总金额</summary>
            double LongOffsetAmount;

            /// <summary>空头折抵总金额</summary>
            double ShortOffsetAmount;

            /// <summary>交易所折抵总金额</summary>
            double ExchOffsetAmount;

            /// <summary>交易所多头折抵总金额</summary>
            double LongExchOffsetAmount;

            /// <summary>交易所空头折抵总金额</summary>
            double ShortExchOffsetAmount;

            /// <summary>投机套保标志</summary>
            HedgeFlagType HedgeFlag;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>查询监控中心用户令牌</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QueryCFMMCTradingAccountTokenField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>投资单元代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ InvestUnitID;
        };

        /// <summary>监控中心用户令牌</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class CFMMCTradingAccountTokenField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>经纪公司统一编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ParticipantID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>密钥编号</summary>
            int KeyID;

            /// <summary>动态令牌</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ Token;
        };

        /// <summary>查询产品组</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryProductGroupField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;
        };

        /// <summary>投资者品种/跨品种保证金产品组</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ProductGroupField
        {
        public:
            /// <summary>产品代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductID;

            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>产品组代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ ProductGroupID;
        };

        /// <summary>交易所公告</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class BulletinField
        {
        public:
            /// <summary>交易所代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ExchangeID;

            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>公告编号</summary>
            int BulletinID;

            /// <summary>序列号</summary>
            int SequenceNo;

            /// <summary>公告类型</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ NewsType;

            /// <summary>紧急程度</summary>
            char NewsUrgency;

            /// <summary>发送时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ SendTime;

            /// <summary>消息摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ Abstract;

            /// <summary>消息来源</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ ComeFrom;

            /// <summary>消息正文</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
            String^ Content;

            /// <summary>WEB地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 201)]
            String^ URLLink;

            /// <summary>市场代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ MarketID;
        };

        /// <summary>MulticastInstrument</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class MulticastInstrumentField
        {
        public:
            /// <summary>主题号</summary>
            int TopicID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;

            /// <summary>合约编号</summary>
            int InstrumentNo;

            /// <summary>基准价</summary>
            double CodePrice;

            /// <summary>合约数量乘数</summary>
            int VolumeMultiple;

            /// <summary>最小变动价位</summary>
            double PriceTick;
        };

        /// <summary>QryMulticastInstrument</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryMulticastInstrumentField
        {
        public:
            /// <summary>主题号</summary>
            int TopicID;

            /// <summary>合约代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ InstrumentID;
        };

        /// <summary>转账请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqTransferField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>转帐金额</summary>
            double TradeAmount;

            /// <summary>期货可取金额</summary>
            double FutureFetchAmount;

            /// <summary>费用支付标志</summary>
            FeePayFlagType FeePayFlag;

            /// <summary>应收客户费用</summary>
            double CustFee;

            /// <summary>应收期货公司费用</summary>
            double BrokerFee;

            /// <summary>发送方给接收方的消息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
            String^ Message;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>转账交易状态</summary>
            TransferStatusType TransferStatus;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>银行发起银行资金转期货响应</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspTransferField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>转帐金额</summary>
            double TradeAmount;

            /// <summary>期货可取金额</summary>
            double FutureFetchAmount;

            /// <summary>费用支付标志</summary>
            FeePayFlagType FeePayFlag;

            /// <summary>应收客户费用</summary>
            double CustFee;

            /// <summary>应收期货公司费用</summary>
            double BrokerFee;

            /// <summary>发送方给接收方的消息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
            String^ Message;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>转账交易状态</summary>
            TransferStatusType TransferStatus;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>冲正请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqRepealField
        {
        public:
            /// <summary>冲正时间间隔</summary>
            int RepealTimeInterval;

            /// <summary>已经冲正次数</summary>
            int RepealedTimes;

            /// <summary>银行冲正标志</summary>
            BankRepealFlagType BankRepealFlag;

            /// <summary>期商冲正标志</summary>
            BrokerRepealFlagType BrokerRepealFlag;

            /// <summary>被冲正平台流水号</summary>
            int PlateRepealSerial;

            /// <summary>被冲正银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankRepealSerial;

            /// <summary>被冲正期货流水号</summary>
            int FutureRepealSerial;

            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>转帐金额</summary>
            double TradeAmount;

            /// <summary>期货可取金额</summary>
            double FutureFetchAmount;

            /// <summary>费用支付标志</summary>
            FeePayFlagType FeePayFlag;

            /// <summary>应收客户费用</summary>
            double CustFee;

            /// <summary>应收期货公司费用</summary>
            double BrokerFee;

            /// <summary>发送方给接收方的消息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
            String^ Message;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>转账交易状态</summary>
            TransferStatusType TransferStatus;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>冲正响应</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspRepealField
        {
        public:
            /// <summary>冲正时间间隔</summary>
            int RepealTimeInterval;

            /// <summary>已经冲正次数</summary>
            int RepealedTimes;

            /// <summary>银行冲正标志</summary>
            BankRepealFlagType BankRepealFlag;

            /// <summary>期商冲正标志</summary>
            BrokerRepealFlagType BrokerRepealFlag;

            /// <summary>被冲正平台流水号</summary>
            int PlateRepealSerial;

            /// <summary>被冲正银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankRepealSerial;

            /// <summary>被冲正期货流水号</summary>
            int FutureRepealSerial;

            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>转帐金额</summary>
            double TradeAmount;

            /// <summary>期货可取金额</summary>
            double FutureFetchAmount;

            /// <summary>费用支付标志</summary>
            FeePayFlagType FeePayFlag;

            /// <summary>应收客户费用</summary>
            double CustFee;

            /// <summary>应收期货公司费用</summary>
            double BrokerFee;

            /// <summary>发送方给接收方的消息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
            String^ Message;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>转账交易状态</summary>
            TransferStatusType TransferStatus;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>查询账户信息请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqQueryAccountField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>查询账户信息通知</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class NotifyQueryAccountField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>请求编号</summary>
            int RequestID;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>银行可用金额</summary>
            double BankUseAmount;

            /// <summary>银行可取金额</summary>
            double BankFetchAmount;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>银期转账交易流水表</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class TransferSerialField
        {
        public:
            /// <summary>平台流水号</summary>
            int PlateSerial;

            /// <summary>交易发起方日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>交易代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>会话编号</summary>
            int SessionID;

            /// <summary>银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>期货公司编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>期货公司帐号类型</summary>
            FutureAccTypeType FutureAccType;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;

            /// <summary>期货公司流水号</summary>
            int FutureSerial;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>交易金额</summary>
            double TradeAmount;

            /// <summary>应收客户费用</summary>
            double CustFee;

            /// <summary>应收期货公司费用</summary>
            double BrokerFee;

            /// <summary>有效标志</summary>
            AvailabilityFlagType AvailabilityFlag;

            /// <summary>操作员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperatorCode;

            /// <summary>新银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankNewAccount;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;
        };

        /// <summary>请求查询转帐流水</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryTransferSerialField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>请求查询银期签约关系</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QryAccountregisterField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>客户开销户信息表</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class AccountregisterField
        {
        public:
            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDay;

            /// <summary>银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>期货公司编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期货公司分支机构编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>开销户类别</summary>
            OpenOrDestroyType OpenOrDestroy;

            /// <summary>签约日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ RegDate;

            /// <summary>解约日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ OutDate;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>银期开户信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class OpenAccountField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>性别</summary>
            GenderType Gender;

            /// <summary>国家代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ CountryCode;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ Address;

            /// <summary>邮编</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ ZipCode;

            /// <summary>电话号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Telephone;

            /// <summary>手机</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MobilePhone;

            /// <summary>传真</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Fax;

            /// <summary>电子邮件</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ EMail;

            /// <summary>资金账户状态</summary>
            MoneyAccountStatusType MoneyAccountStatus;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>汇钞标志</summary>
            CashExchangeCodeType CashExchangeCode;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>银期销户信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class CancelAccountField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>性别</summary>
            GenderType Gender;

            /// <summary>国家代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ CountryCode;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ Address;

            /// <summary>邮编</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ ZipCode;

            /// <summary>电话号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Telephone;

            /// <summary>手机</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MobilePhone;

            /// <summary>传真</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Fax;

            /// <summary>电子邮件</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ EMail;

            /// <summary>资金账户状态</summary>
            MoneyAccountStatusType MoneyAccountStatus;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>汇钞标志</summary>
            CashExchangeCodeType CashExchangeCode;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>渠道标志</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
            String^ DeviceID;

            /// <summary>期货单位帐号类型</summary>
            BankAccTypeType BankSecuAccType;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>期货单位帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankSecuAcc;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易柜员</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
            String^ OperNo;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>用户标识</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>银期变更银行账号信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ChangeAccountField
        {
        public:
            /// <summary>业务功能码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ TradeCode;

            /// <summary>银行代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ BankID;

            /// <summary>银行分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
            String^ BankBranchID;

            /// <summary>期商代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>期商分支机构代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
            String^ BrokerBranchID;

            /// <summary>交易日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeDate;

            /// <summary>交易时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradeTime;

            /// <summary>银行流水号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BankSerial;

            /// <summary>交易系统日期</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>银期平台消息流水号</summary>
            int PlateSerial;

            /// <summary>最后分片标志</summary>
            LastFragmentType LastFragment;

            /// <summary>会话号</summary>
            int SessionID;

            /// <summary>客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ CustomerName;

            /// <summary>证件类型</summary>
            IdCardTypeType IdCardType;

            /// <summary>证件号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
            String^ IdentifiedCardNo;

            /// <summary>性别</summary>
            GenderType Gender;

            /// <summary>国家代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ CountryCode;

            /// <summary>客户类型</summary>
            CustTypeType CustType;

            /// <summary>地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
            String^ Address;

            /// <summary>邮编</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
            String^ ZipCode;

            /// <summary>电话号码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Telephone;

            /// <summary>手机</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MobilePhone;

            /// <summary>传真</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Fax;

            /// <summary>电子邮件</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ EMail;

            /// <summary>资金账户状态</summary>
            MoneyAccountStatusType MoneyAccountStatus;

            /// <summary>银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankAccount;

            /// <summary>银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ BankPassWord;

            /// <summary>新银行帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ NewBankAccount;

            /// <summary>新银行密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ NewBankPassWord;

            /// <summary>投资者帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>期货密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>银行帐号类型</summary>
            BankAccTypeType BankAccType;

            /// <summary>安装编号</summary>
            int InstallID;

            /// <summary>验证客户证件号码标志</summary>
            YesNoIndicatorType VerifyCertNoFlag;

            /// <summary>币种代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>期货公司银行编码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ BrokerIDByBank;

            /// <summary>银行密码标志</summary>
            PwdFlagType BankPwdFlag;

            /// <summary>期货资金密码核对标志</summary>
            PwdFlagType SecuPwdFlag;

            /// <summary>交易ID</summary>
            int TID;

            /// <summary>摘要</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ Digest;

            /// <summary>错误代码</summary>
            int ErrorID;

            /// <summary>错误信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
            String^ ErrorMsg;

            /// <summary>长客户姓名</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
            String^ LongCustomerName;
        };

        /// <summary>二级代理操作员银期权限</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class SecAgentACIDMapField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>资金账户</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;

            /// <summary>境外中介机构资金帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BrokerSecAgentID;
        };

        /// <summary>二级代理操作员银期权限查询</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QrySecAgentACIDMapField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>资金账户</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ AccountID;

            /// <summary>币种</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
            String^ CurrencyID;
        };

        /// <summary>Fens用户信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class FensUserInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>登录模式</summary>
            LoginModeType LoginMode;
        };

        /// <summary>查询二级代理商资金校验模式</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QrySecAgentCheckModeField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>投资者代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ InvestorID;
        };

        /// <summary>查询二级代理商信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class QrySecAgentTradeInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>境外中介机构资金帐号</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
            String^ BrokerSecAgentID;
        };

        /// <summary>用户系统信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class UserSystemInfoField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>用户端系统内部信息长度</summary>
            int ClientSystemInfoLen;

            /// <summary>用户端系统内部信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 273)]
            String^ ClientSystemInfo;

            /// <summary>用户公网IP</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ClientPublicIP;

            /// <summary>终端IP端口</summary>
            int ClientIPPort;

            /// <summary>登录成功时间</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ ClientLoginTime;

            /// <summary>App代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
            String^ ClientAppID;
        };

        /// <summary>用户发出获取安全安全登陆方法请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqUserAuthMethodField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;
        };

        /// <summary>用户发出获取安全安全登陆方法回复</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspUserAuthMethodField
        {
        public:
            /// <summary>当前可以用的认证模式</summary>
            int UsableAuthMethod;
        };

        /// <summary>用户发出获取安全安全登陆方法请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqGenUserCaptchaField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;
        };

        /// <summary>生成的图片验证码信息</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspGenUserCaptchaField
        {
        public:
            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>图片信息长度</summary>
            int CaptchaInfoLen;

            /// <summary>图片信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2561)]
            String^ CaptchaInfo;
        };

        /// <summary>用户发出获取安全安全登陆方法请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqGenUserTextField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;
        };

        /// <summary>短信验证码生成的回复</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class RspGenUserTextField
        {
        public:
            /// <summary>短信验证码序号</summary>
            int UserTextSeq;
        };

        /// <summary>用户发出带图形验证码的登录请求请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqUserLoginWithCaptchaField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>接口端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ InterfaceProductInfo;

            /// <summary>协议信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ProtocolInfo;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>终端IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ClientIPAddress;

            /// <summary>登录备注</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ LoginRemark;

            /// <summary>图形验证码的文字内容</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Captcha;

            /// <summary>终端IP端口</summary>
            int ClientIPPort;
        };

        /// <summary>用户发出带短信验证码的登录请求请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqUserLoginWithTextField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>接口端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ InterfaceProductInfo;

            /// <summary>协议信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ProtocolInfo;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>终端IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ClientIPAddress;

            /// <summary>登录备注</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ LoginRemark;

            /// <summary>短信验证码文字内容</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Text;

            /// <summary>终端IP端口</summary>
            int ClientIPPort;
        };

        /// <summary>用户发出带动态验证码的登录请求请求</summary>
        [StructLayout(LayoutKind::Sequential)]
        public ref class ReqUserLoginWithOTPField
        {
        public:
            /// <summary>交易日</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
            String^ TradingDay;

            /// <summary>经纪公司代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ BrokerID;

            /// <summary>用户代码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ UserID;

            /// <summary>密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ Password;

            /// <summary>用户端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ UserProductInfo;

            /// <summary>接口端产品信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ InterfaceProductInfo;

            /// <summary>协议信息</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
            String^ ProtocolInfo;

            /// <summary>Mac地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
            String^ MacAddress;

            /// <summary>终端IP地址</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
            String^ ClientIPAddress;

            /// <summary>登录备注</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
            String^ LoginRemark;

            /// <summary>OTP密码</summary>
            [MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
            String^ OTPPassword;

            /// <summary>终端IP端口</summary>
            int ClientIPPort;
        };

    }
}
