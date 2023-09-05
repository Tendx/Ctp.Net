#pragma once

using namespace System;

namespace Ctp
{
    namespace Net
    {
        /// <summary></summary>
        public enum struct RESUME_TYPE : char
        {
            /// <summary></summary>
            RESTART = 0,

            /// <summary></summary>
            RESUME,

            /// <summary></summary>
            QUICK,
        };

        /// <summary>TFtdcExchangePropertyType是一个交易所属性类型</summary>
        public enum struct ExchangePropertyType : char
        {
            /// <summary>正常</summary>
            EXP_Normal = '0',

            /// <summary>根据成交生成报单</summary>
            EXP_GenOrderByTrade = '1',
        };

        /// <summary>TFtdcIdCardTypeType是一个证件类型类型</summary>
        public enum struct IdCardTypeType : char
        {
            /// <summary>组织机构代码</summary>
            ICT_EID = '0',

            /// <summary>中国公民身份证</summary>
            ICT_IDCard = '1',

            /// <summary>军官证</summary>
            ICT_OfficerIDCard = '2',

            /// <summary>警官证</summary>
            ICT_PoliceIDCard = '3',

            /// <summary>士兵证</summary>
            ICT_SoldierIDCard = '4',

            /// <summary>户口簿</summary>
            ICT_HouseholdRegister = '5',

            /// <summary>护照</summary>
            ICT_Passport = '6',

            /// <summary>台胞证</summary>
            ICT_TaiwanCompatriotIDCard = '7',

            /// <summary>回乡证</summary>
            ICT_HomeComingCard = '8',

            /// <summary>营业执照号</summary>
            ICT_LicenseNo = '9',

            /// <summary>税务登记号/当地纳税ID</summary>
            ICT_TaxNo = 'A',

            /// <summary>港澳居民来往内地通行证</summary>
            ICT_HMMainlandTravelPermit = 'B',

            /// <summary>台湾居民来往大陆通行证</summary>
            ICT_TwMainlandTravelPermit = 'C',

            /// <summary>驾照</summary>
            ICT_DrivingLicense = 'D',

            /// <summary>当地社保ID</summary>
            ICT_SocialID = 'F',

            /// <summary>当地身份证</summary>
            ICT_LocalID = 'G',

            /// <summary>商业登记证</summary>
            ICT_BusinessRegistration = 'H',

            /// <summary>港澳永久性居民身份证</summary>
            ICT_HKMCIDCard = 'I',

            /// <summary>人行开户许可证</summary>
            ICT_AccountsPermits = 'J',

            /// <summary>外国人永久居留证</summary>
            ICT_FrgPrmtRdCard = 'K',

            /// <summary>资管产品备案函</summary>
            ICT_CptMngPrdLetter = 'L',

            /// <summary>统一社会信用代码</summary>
            ICT_UniformSocialCreditCode = 'N',

            /// <summary>机构成立证明文件</summary>
            ICT_CorporationCertNo = 'O',

            /// <summary>其他证件</summary>
            ICT_OtherCard = 'x',
        };

        /// <summary>TFtdcInvestorRangeType是一个投资者范围类型</summary>
        public enum struct InvestorRangeType : char
        {
            /// <summary>所有</summary>
            IR_All = '1',

            /// <summary>投资者组</summary>
            IR_Group = '2',

            /// <summary>单一投资者</summary>
            IR_Single = '3',
        };

        /// <summary>TFtdcOrderActionStatusType是一个报单操作状态类型</summary>
        public enum struct OrderActionStatusType : char
        {
            /// <summary>已经提交</summary>
            OAS_Submitted = 'a',

            /// <summary>已经接受</summary>
            OAS_Accepted = 'b',

            /// <summary>已经被拒绝</summary>
            OAS_Rejected = 'c',
        };

        /// <summary>TFtdcOrderStatusType是一个报单状态类型</summary>
        public enum struct OrderStatusType : char
        {
            /// <summary>全部成交</summary>
            OST_AllTraded = '0',

            /// <summary>部分成交还在队列中</summary>
            OST_PartTradedQueueing = '1',

            /// <summary>部分成交不在队列中</summary>
            OST_PartTradedNotQueueing = '2',

            /// <summary>未成交还在队列中</summary>
            OST_NoTradeQueueing = '3',

            /// <summary>未成交不在队列中</summary>
            OST_NoTradeNotQueueing = '4',

            /// <summary>撤单</summary>
            OST_Canceled = '5',

            /// <summary>未知</summary>
            OST_Unknown = 'a',

            /// <summary>尚未触发</summary>
            OST_NotTouched = 'b',

            /// <summary>已触发</summary>
            OST_Touched = 'c',
        };

        /// <summary>TFtdcOrderSubmitStatusType是一个报单提交状态类型</summary>
        public enum struct OrderSubmitStatusType : char
        {
            /// <summary>已经提交</summary>
            OSS_InsertSubmitted = '0',

            /// <summary>撤单已经提交</summary>
            OSS_CancelSubmitted = '1',

            /// <summary>修改已经提交</summary>
            OSS_ModifySubmitted = '2',

            /// <summary>已经接受</summary>
            OSS_Accepted = '3',

            /// <summary>报单已经被拒绝</summary>
            OSS_InsertRejected = '4',

            /// <summary>撤单已经被拒绝</summary>
            OSS_CancelRejected = '5',

            /// <summary>改单已经被拒绝</summary>
            OSS_ModifyRejected = '6',
        };

        /// <summary>TFtdcPositionDateType是一个持仓日期类型</summary>
        public enum struct PositionDateType : char
        {
            /// <summary>今日持仓</summary>
            PSD_Today = '1',

            /// <summary>历史持仓</summary>
            PSD_History = '2',
        };

        /// <summary>TFtdcPositionDateTypeType是一个持仓日期类型类型</summary>
        public enum struct PositionDateTypeType : char
        {
            /// <summary>使用历史持仓</summary>
            PDT_UseHistory = '1',

            /// <summary>不使用历史持仓</summary>
            PDT_NoUseHistory = '2',
        };

        /// <summary>TFtdcTradingRoleType是一个交易角色类型</summary>
        public enum struct TradingRoleType : char
        {
            /// <summary>代理</summary>
            ER_Broker = '1',

            /// <summary>自营</summary>
            ER_Host = '2',

            /// <summary>做市商</summary>
            ER_Maker = '3',
        };

        /// <summary>TFtdcProductClassType是一个产品类型类型</summary>
        public enum struct ProductClassType : char
        {
            /// <summary>期货</summary>
            PC_Futures = '1',

            /// <summary>期货期权</summary>
            PC_Options = '2',

            /// <summary>组合</summary>
            PC_Combination = '3',

            /// <summary>即期</summary>
            PC_Spot = '4',

            /// <summary>期转现</summary>
            PC_EFP = '5',

            /// <summary>现货期权</summary>
            PC_SpotOption = '6',

            /// <summary>TAS合约</summary>
            PC_TAS = '7',

            /// <summary>金属指数</summary>
            PC_MI = 'I',
        };

        /// <summary>TFtdcInstLifePhaseType是一个合约生命周期状态类型</summary>
        public enum struct InstLifePhaseType : char
        {
            /// <summary>未上市</summary>
            IP_NotStart = '0',

            /// <summary>上市</summary>
            IP_Started = '1',

            /// <summary>停牌</summary>
            IP_Pause = '2',

            /// <summary>到期</summary>
            IP_Expired = '3',
        };

        /// <summary>TFtdcDirectionType是一个买卖方向类型</summary>
        public enum struct DirectionType : char
        {
            /// <summary>买</summary>
            D_Buy = '0',

            /// <summary>卖</summary>
            D_Sell = '1',
        };

        /// <summary>TFtdcPositionTypeType是一个持仓类型类型</summary>
        public enum struct PositionTypeType : char
        {
            /// <summary>净持仓</summary>
            PT_Net = '1',

            /// <summary>综合持仓</summary>
            PT_Gross = '2',
        };

        /// <summary>TFtdcPosiDirectionType是一个持仓多空方向类型</summary>
        public enum struct PosiDirectionType : char
        {
            /// <summary>净</summary>
            PD_Net = '1',

            /// <summary>多头</summary>
            PD_Long = '2',

            /// <summary>空头</summary>
            PD_Short = '3',
        };

        /// <summary>TFtdcHedgeFlagType是一个投机套保标志类型</summary>
        public enum struct HedgeFlagType : char
        {
            /// <summary>投机</summary>
            HF_Speculation = '1',

            /// <summary>套利</summary>
            HF_Arbitrage = '2',

            /// <summary>套保</summary>
            HF_Hedge = '3',

            /// <summary>做市商</summary>
            HF_MarketMaker = '5',

            /// <summary>第一腿投机第二腿套保 大商所专用</summary>
            HF_SpecHedge = '6',

            /// <summary>第一腿套保第二腿投机  大商所专用</summary>
            HF_HedgeSpec = '7',
        };

        /// <summary>TFtdcClientIDTypeType是一个交易编码类型类型</summary>
        public enum struct ClientIDTypeType : char
        {
            /// <summary>投机</summary>
            CIDT_Speculation = '1',

            /// <summary>套利</summary>
            CIDT_Arbitrage = '2',

            /// <summary>套保</summary>
            CIDT_Hedge = '3',

            /// <summary>做市商</summary>
            CIDT_MarketMaker = '5',
        };

        /// <summary>TFtdcOrderPriceTypeType是一个报单价格条件类型</summary>
        public enum struct OrderPriceTypeType : char
        {
            /// <summary>任意价</summary>
            OPT_AnyPrice = '1',

            /// <summary>限价</summary>
            OPT_LimitPrice = '2',

            /// <summary>最优价</summary>
            OPT_BestPrice = '3',

            /// <summary>最新价</summary>
            OPT_LastPrice = '4',

            /// <summary>最新价浮动上浮1个ticks</summary>
            OPT_LastPricePlusOneTicks = '5',

            /// <summary>最新价浮动上浮2个ticks</summary>
            OPT_LastPricePlusTwoTicks = '6',

            /// <summary>最新价浮动上浮3个ticks</summary>
            OPT_LastPricePlusThreeTicks = '7',

            /// <summary>卖一价</summary>
            OPT_AskPrice1 = '8',

            /// <summary>卖一价浮动上浮1个ticks</summary>
            OPT_AskPrice1PlusOneTicks = '9',

            /// <summary>卖一价浮动上浮2个ticks</summary>
            OPT_AskPrice1PlusTwoTicks = 'A',

            /// <summary>卖一价浮动上浮3个ticks</summary>
            OPT_AskPrice1PlusThreeTicks = 'B',

            /// <summary>买一价</summary>
            OPT_BidPrice1 = 'C',

            /// <summary>买一价浮动上浮1个ticks</summary>
            OPT_BidPrice1PlusOneTicks = 'D',

            /// <summary>买一价浮动上浮2个ticks</summary>
            OPT_BidPrice1PlusTwoTicks = 'E',

            /// <summary>买一价浮动上浮3个ticks</summary>
            OPT_BidPrice1PlusThreeTicks = 'F',

            /// <summary>五档价</summary>
            OPT_FiveLevelPrice = 'G',
        };

        /// <summary>TFtdcOffsetFlagType是一个开平标志类型</summary>
        public enum struct OffsetFlagType : char
        {
            /// <summary>开仓</summary>
            OF_Open = '0',

            /// <summary>平仓</summary>
            OF_Close = '1',

            /// <summary>强平</summary>
            OF_ForceClose = '2',

            /// <summary>平今</summary>
            OF_CloseToday = '3',

            /// <summary>平昨</summary>
            OF_CloseYesterday = '4',

            /// <summary>强减</summary>
            OF_ForceOff = '5',

            /// <summary>本地强平</summary>
            OF_LocalForceClose = '6',
        };

        /// <summary>TFtdcForceCloseReasonType是一个强平原因类型</summary>
        public enum struct ForceCloseReasonType : char
        {
            /// <summary>非强平</summary>
            FCC_NotForceClose = '0',

            /// <summary>资金不足</summary>
            FCC_LackDeposit = '1',

            /// <summary>客户超仓</summary>
            FCC_ClientOverPositionLimit = '2',

            /// <summary>会员超仓</summary>
            FCC_MemberOverPositionLimit = '3',

            /// <summary>持仓非整数倍</summary>
            FCC_NotMultiple = '4',

            /// <summary>违规</summary>
            FCC_Violation = '5',

            /// <summary>其它</summary>
            FCC_Other = '6',

            /// <summary>自然人临近交割</summary>
            FCC_PersonDeliv = '7',
        };

        /// <summary>TFtdcOrderTypeType是一个报单类型类型</summary>
        public enum struct OrderTypeType : char
        {
            /// <summary>正常</summary>
            ORDT_Normal = '0',

            /// <summary>报价衍生</summary>
            ORDT_DeriveFromQuote = '1',

            /// <summary>组合衍生</summary>
            ORDT_DeriveFromCombination = '2',

            /// <summary>组合报单</summary>
            ORDT_Combination = '3',

            /// <summary>条件单</summary>
            ORDT_ConditionalOrder = '4',

            /// <summary>互换单</summary>
            ORDT_Swap = '5',

            /// <summary>大宗交易成交衍生</summary>
            ORDT_DeriveFromBlockTrade = '6',

            /// <summary>期转现成交衍生</summary>
            ORDT_DeriveFromEFPTrade = '7',
        };

        /// <summary>TFtdcTimeConditionType是一个有效期类型类型</summary>
        public enum struct TimeConditionType : char
        {
            /// <summary>立即完成，否则撤销</summary>
            TC_IOC = '1',

            /// <summary>本节有效</summary>
            TC_GFS = '2',

            /// <summary>当日有效</summary>
            TC_GFD = '3',

            /// <summary>指定日期前有效</summary>
            TC_GTD = '4',

            /// <summary>撤销前有效</summary>
            TC_GTC = '5',

            /// <summary>集合竞价有效</summary>
            TC_GFA = '6',
        };

        /// <summary>TFtdcVolumeConditionType是一个成交量类型类型</summary>
        public enum struct VolumeConditionType : char
        {
            /// <summary>任何数量</summary>
            VC_AV = '1',

            /// <summary>最小数量</summary>
            VC_MV = '2',

            /// <summary>全部数量</summary>
            VC_CV = '3',
        };

        /// <summary>TFtdcContingentConditionType是一个触发条件类型</summary>
        public enum struct ContingentConditionType : char
        {
            /// <summary>立即</summary>
            CC_Immediately = '1',

            /// <summary>止损</summary>
            CC_Touch = '2',

            /// <summary>止赢</summary>
            CC_TouchProfit = '3',

            /// <summary>预埋单</summary>
            CC_ParkedOrder = '4',

            /// <summary>最新价大于条件价</summary>
            CC_LastPriceGreaterThanStopPrice = '5',

            /// <summary>最新价大于等于条件价</summary>
            CC_LastPriceGreaterEqualStopPrice = '6',

            /// <summary>最新价小于条件价</summary>
            CC_LastPriceLesserThanStopPrice = '7',

            /// <summary>最新价小于等于条件价</summary>
            CC_LastPriceLesserEqualStopPrice = '8',

            /// <summary>卖一价大于条件价</summary>
            CC_AskPriceGreaterThanStopPrice = '9',

            /// <summary>卖一价大于等于条件价</summary>
            CC_AskPriceGreaterEqualStopPrice = 'A',

            /// <summary>卖一价小于条件价</summary>
            CC_AskPriceLesserThanStopPrice = 'B',

            /// <summary>卖一价小于等于条件价</summary>
            CC_AskPriceLesserEqualStopPrice = 'C',

            /// <summary>买一价大于条件价</summary>
            CC_BidPriceGreaterThanStopPrice = 'D',

            /// <summary>买一价大于等于条件价</summary>
            CC_BidPriceGreaterEqualStopPrice = 'E',

            /// <summary>买一价小于条件价</summary>
            CC_BidPriceLesserThanStopPrice = 'F',

            /// <summary>买一价小于等于条件价</summary>
            CC_BidPriceLesserEqualStopPrice = 'H',
        };

        /// <summary>TFtdcActionFlagType是一个操作标志类型</summary>
        public enum struct ActionFlagType : char
        {
            /// <summary>删除</summary>
            AF_Delete = '0',

            /// <summary>修改</summary>
            AF_Modify = '3',
        };

        /// <summary>TFtdcOrderSourceType是一个报单来源类型</summary>
        public enum struct OrderSourceType : char
        {
            /// <summary>来自参与者</summary>
            OSRC_Participant = '0',

            /// <summary>来自管理员</summary>
            OSRC_Administrator = '1',
        };

        /// <summary>组合持仓拆分为单一持仓,初始化不应包含该类型的持仓</summary>
        public enum struct TradeTypeType : char
        {
            /// <summary>普通成交</summary>
            TRDT_Common = '0',

            /// <summary>期权执行</summary>
            TRDT_OptionsExecution = '1',

            /// <summary>OTC成交</summary>
            TRDT_OTC = '2',

            /// <summary>期转现衍生成交</summary>
            TRDT_EFPDerived = '3',

            /// <summary>组合衍生成交</summary>
            TRDT_CombinationDerived = '4',

            /// <summary>大宗交易成交</summary>
            TRDT_BlockTrade = '5',
        };

        /// <summary>普通持仓明细</summary>
        public enum struct SpecPosiTypeType : char
        {
            /// <summary>TAS合约成交产生的标的合约持仓明细</summary>
            SPOST_Tas = '0',
        };

        /// <summary>TFtdcPriceSourceType是一个成交价来源类型</summary>
        public enum struct PriceSourceType : char
        {
            /// <summary>前成交价</summary>
            PSRC_LastPrice = '0',

            /// <summary>买委托价</summary>
            PSRC_Buy = '1',

            /// <summary>卖委托价</summary>
            PSRC_Sell = '2',

            /// <summary>场外成交价</summary>
            PSRC_OTC = '3',
        };

        /// <summary>TFtdcInstrumentStatusType是一个合约交易状态类型</summary>
        public enum struct InstrumentStatusType : char
        {
            /// <summary>开盘前</summary>
            IS_BeforeTrading = '0',

            /// <summary>非交易</summary>
            IS_NoTrading = '1',

            /// <summary>连续交易</summary>
            IS_Continous = '2',

            /// <summary>集合竞价报单</summary>
            IS_AuctionOrdering = '3',

            /// <summary>集合竞价价格平衡</summary>
            IS_AuctionBalance = '4',

            /// <summary>集合竞价撮合</summary>
            IS_AuctionMatch = '5',

            /// <summary>收盘</summary>
            IS_Closed = '6',
        };

        /// <summary>TFtdcInstStatusEnterReasonType是一个品种进入交易状态原因类型</summary>
        public enum struct InstStatusEnterReasonType : char
        {
            /// <summary>自动切换</summary>
            IER_Automatic = '1',

            /// <summary>手动切换</summary>
            IER_Manual = '2',

            /// <summary>熔断</summary>
            IER_Fuse = '3',
        };

        /// <summary>TFtdcAlgorithmType是一个盈亏算法类型</summary>
        public enum struct AlgorithmType : char
        {
            /// <summary>浮盈浮亏都计算</summary>
            AG_All = '1',

            /// <summary>浮盈不计，浮亏计</summary>
            AG_OnlyLost = '2',

            /// <summary>浮盈计，浮亏不计</summary>
            AG_OnlyGain = '3',

            /// <summary>浮盈浮亏都不计算</summary>
            AG_None = '4',
        };

        /// <summary>TFtdcIncludeCloseProfitType是一个是否包含平仓盈利类型</summary>
        public enum struct IncludeCloseProfitType : char
        {
            /// <summary>包含平仓盈利</summary>
            ICP_Include = '0',

            /// <summary>不包含平仓盈利</summary>
            ICP_NotInclude = '2',
        };

        /// <summary>TFtdcUserTypeType是一个用户类型类型</summary>
        public enum struct UserTypeType : char
        {
            /// <summary>投资者</summary>
            UT_Investor = '0',

            /// <summary>操作员</summary>
            UT_Operator = '1',

            /// <summary>管理员</summary>
            UT_SuperUser = '2',
        };

        /// <summary>TFtdcMarginPriceTypeType是一个保证金价格类型类型</summary>
        public enum struct MarginPriceTypeType : char
        {
            /// <summary>昨结算价</summary>
            MPT_PreSettlementPrice = '1',

            /// <summary>最新价</summary>
            MPT_SettlementPrice = '2',

            /// <summary>成交均价</summary>
            MPT_AveragePrice = '3',

            /// <summary>开仓价</summary>
            MPT_OpenPrice = '4',
        };

        /// <summary>TFtdcHandlePositionAlgoIDType是一个持仓处理算法编号类型</summary>
        public enum struct HandlePositionAlgoIDType : char
        {
            /// <summary>基本</summary>
            HPA_Base = '1',

            /// <summary>大连商品交易所</summary>
            HPA_DCE = '2',

            /// <summary>郑州商品交易所</summary>
            HPA_CZCE = '3',
        };

        /// <summary>TFtdcFindMarginRateAlgoIDType是一个寻找保证金率算法编号类型</summary>
        public enum struct FindMarginRateAlgoIDType : char
        {
            /// <summary>基本</summary>
            FMRA_Base = '1',

            /// <summary>大连商品交易所</summary>
            FMRA_DCE = '2',

            /// <summary>郑州商品交易所</summary>
            FMRA_CZCE = '3',
        };

        /// <summary>TFtdcHandleTradingAccountAlgoIDType是一个资金处理算法编号类型</summary>
        public enum struct HandleTradingAccountAlgoIDType : char
        {
            /// <summary>基本</summary>
            HTAA_Base = '1',

            /// <summary>大连商品交易所</summary>
            HTAA_DCE = '2',

            /// <summary>郑州商品交易所</summary>
            HTAA_CZCE = '3',
        };

        /// <summary>TFtdcParkedOrderStatusType是一个预埋单状态类型</summary>
        public enum struct ParkedOrderStatusType : char
        {
            /// <summary>未发送</summary>
            PAOS_NotSend = '1',

            /// <summary>已发送</summary>
            PAOS_Send = '2',

            /// <summary>已删除</summary>
            PAOS_Deleted = '3',
        };

        /// <summary>TFtdcCashExchangeCodeType是一个汇钞标志类型</summary>
        public enum struct CashExchangeCodeType : char
        {
            /// <summary>汇</summary>
            CEC_Exchange = '1',

            /// <summary>钞</summary>
            CEC_Cash = '2',
        };

        /// <summary>TFtdcYesNoIndicatorType是一个是或否标识类型</summary>
        public enum struct YesNoIndicatorType : char
        {
            /// <summary>是</summary>
            YNI_Yes = '0',

            /// <summary>否</summary>
            YNI_No = '1',
        };

        /// <summary>TFtdcGenderType是一个性别类型</summary>
        public enum struct GenderType : char
        {
            /// <summary>未知状态</summary>
            GD_Unknown = '0',

            /// <summary>男</summary>
            GD_Male = '1',

            /// <summary>女</summary>
            GD_Female = '2',
        };

        /// <summary>TFtdcFeePayFlagType是一个费用支付标志类型</summary>
        public enum struct FeePayFlagType : char
        {
            /// <summary>由受益方支付费用</summary>
            FPF_BEN = '0',

            /// <summary>由发送方支付费用</summary>
            FPF_OUR = '1',

            /// <summary>由发送方支付发起的费用，受益方支付接受的费用</summary>
            FPF_SHA = '2',
        };

        /// <summary>TFtdcBankRepealFlagType是一个银行冲正标志类型</summary>
        public enum struct BankRepealFlagType : char
        {
            /// <summary>银行无需自动冲正</summary>
            BRF_BankNotNeedRepeal = '0',

            /// <summary>银行待自动冲正</summary>
            BRF_BankWaitingRepeal = '1',

            /// <summary>银行已自动冲正</summary>
            BRF_BankBeenRepealed = '2',
        };

        /// <summary>TFtdcBrokerRepealFlagType是一个期商冲正标志类型</summary>
        public enum struct BrokerRepealFlagType : char
        {
            /// <summary>期商无需自动冲正</summary>
            BRORF_BrokerNotNeedRepeal = '0',

            /// <summary>期商待自动冲正</summary>
            BRORF_BrokerWaitingRepeal = '1',

            /// <summary>期商已自动冲正</summary>
            BRORF_BrokerBeenRepealed = '2',
        };

        /// <summary>TFtdcLastFragmentType是一个最后分片标志类型</summary>
        public enum struct LastFragmentType : char
        {
            /// <summary>是最后分片</summary>
            LF_Yes = '0',

            /// <summary>不是最后分片</summary>
            LF_No = '1',
        };

        /// <summary>TFtdcMoneyAccountStatusType是一个资金账户状态类型</summary>
        public enum struct MoneyAccountStatusType : char
        {
            /// <summary>正常</summary>
            MAS_Normal = '0',

            /// <summary>销户</summary>
            MAS_Cancel = '1',
        };

        /// <summary>TFtdcCustTypeType是一个客户类型类型</summary>
        public enum struct CustTypeType : char
        {
            /// <summary>自然人</summary>
            CUSTT_Person = '0',

            /// <summary>机构户</summary>
            CUSTT_Institution = '1',
        };

        /// <summary>TFtdcOpenOrDestroyType是一个开销户类别类型</summary>
        public enum struct OpenOrDestroyType : char
        {
            /// <summary>开户</summary>
            OOD_Open = '1',

            /// <summary>销户</summary>
            OOD_Destroy = '0',
        };

        /// <summary>TFtdcAvailabilityFlagType是一个有效标志类型</summary>
        public enum struct AvailabilityFlagType : char
        {
            /// <summary>未确认</summary>
            AVAF_Invalid = '0',

            /// <summary>有效</summary>
            AVAF_Valid = '1',

            /// <summary>冲正</summary>
            AVAF_Repeal = '2',
        };

        /// <summary>TFtdcBankAccTypeType是一个银行帐号类型类型</summary>
        public enum struct BankAccTypeType : char
        {
            /// <summary>银行存折</summary>
            BAT_BankBook = '1',

            /// <summary>储蓄卡</summary>
            BAT_SavingCard = '2',

            /// <summary>信用卡</summary>
            BAT_CreditCard = '3',
        };

        /// <summary>TFtdcFutureAccTypeType是一个期货公司帐号类型类型</summary>
        public enum struct FutureAccTypeType : char
        {
            /// <summary>银行存折</summary>
            FAT_BankBook = '1',

            /// <summary>储蓄卡</summary>
            FAT_SavingCard = '2',

            /// <summary>信用卡</summary>
            FAT_CreditCard = '3',
        };

        /// <summary>TFtdcPwdFlagType是一个密码核对标志类型</summary>
        public enum struct PwdFlagType : char
        {
            /// <summary>不核对</summary>
            BPWDF_NoCheck = '0',

            /// <summary>明文核对</summary>
            BPWDF_BlankCheck = '1',

            /// <summary>密文核对</summary>
            BPWDF_EncryptCheck = '2',
        };

        /// <summary>TFtdcTransferStatusType是一个转账交易状态类型</summary>
        public enum struct TransferStatusType : char
        {
            /// <summary>正常</summary>
            TRFS_Normal = '0',

            /// <summary>被冲正</summary>
            TRFS_Repealed = '1',
        };

        /// <summary>TFtdcTradeSourceType是一个成交来源类型</summary>
        public enum struct TradeSourceType : char
        {
            /// <summary>来自交易所普通回报</summary>
            TSRC_NORMAL = '0',

            /// <summary>来自查询</summary>
            TSRC_QUERY = '1',
        };

        /// <summary>TFtdcCloseDealTypeType是一个平仓处理类型类型</summary>
        public enum struct CloseDealTypeType : char
        {
            /// <summary>正常</summary>
            CDT_Normal = '0',

            /// <summary>投机平仓优先</summary>
            CDT_SpecFirst = '1',
        };

        /// <summary>TFtdcMortgageFundUseRangeType是一个货币质押资金可用范围类型</summary>
        public enum struct MortgageFundUseRangeType : char
        {
            /// <summary>不能使用</summary>
            MFUR_None = '0',

            /// <summary>用于保证金</summary>
            MFUR_Margin = '1',

            /// <summary>用于手续费、盈亏、保证金</summary>
            MFUR_All = '2',

            /// <summary>人民币方案3</summary>
            MFUR_CNY3 = '3',
        };

        /// <summary>TFtdcLoginModeType是一个登录模式类型</summary>
        public enum struct LoginModeType : char
        {
            /// <summary>交易</summary>
            LM_Trade = '0',

            /// <summary>转账</summary>
            LM_Transfer = '1',
        };

        /// <summary>TFtdcMaxMarginSideAlgorithmType是一个大额单边保证金算法类型</summary>
        public enum struct MaxMarginSideAlgorithmType : char
        {
            /// <summary>不使用大额单边保证金算法</summary>
            MMSA_NO = '0',

            /// <summary>使用大额单边保证金算法</summary>
            MMSA_YES = '1',
        };

        /// <summary>TFtdcOptionsTypeType是一个期权类型类型</summary>
        public enum struct OptionsTypeType : char
        {
            /// <summary>看涨</summary>
            CP_CallOptions = '1',

            /// <summary>看跌</summary>
            CP_PutOptions = '2',
        };

        /// <summary>TFtdcExecResultType是一个执行结果类型</summary>
        public enum struct ExecResultType : char
        {
            /// <summary>没有执行</summary>
            OER_NoExec = 'n',

            /// <summary>已经取消</summary>
            OER_Canceled = 'c',

            /// <summary>执行成功</summary>
            OER_OK = '0',

            /// <summary>期权持仓不够</summary>
            OER_NoPosition = '1',

            /// <summary>资金不够</summary>
            OER_NoDeposit = '2',

            /// <summary>会员不存在</summary>
            OER_NoParticipant = '3',

            /// <summary>客户不存在</summary>
            OER_NoClient = '4',

            /// <summary>合约不存在</summary>
            OER_NoInstrument = '6',

            /// <summary>没有执行权限</summary>
            OER_NoRight = '7',

            /// <summary>不合理的数量</summary>
            OER_InvalidVolume = '8',

            /// <summary>没有足够的历史成交</summary>
            OER_NoEnoughHistoryTrade = '9',

            /// <summary>未知</summary>
            OER_Unknown = 'a',
        };

        /// <summary>TFtdcCombinationTypeType是一个组合类型类型</summary>
        public enum struct CombinationTypeType : char
        {
            /// <summary>期货组合</summary>
            COMBT_Future = '0',

            /// <summary>垂直价差BUL</summary>
            COMBT_BUL = '1',

            /// <summary>垂直价差BER</summary>
            COMBT_BER = '2',

            /// <summary>跨式组合</summary>
            COMBT_STD = '3',

            /// <summary>宽跨式组合</summary>
            COMBT_STG = '4',

            /// <summary>备兑组合</summary>
            COMBT_PRT = '5',

            /// <summary>时间价差组合</summary>
            COMBT_CLD = '6',

            /// <summary>期权对锁组合</summary>
            COMBT_OPL = '7',

            /// <summary>买备兑组合</summary>
            COMBT_BFO = '8',
        };

        /// <summary>TFtdcOptionRoyaltyPriceTypeType是一个期权权利金价格类型类型</summary>
        public enum struct OptionRoyaltyPriceTypeType : char
        {
            /// <summary>昨结算价</summary>
            ORPT_PreSettlementPrice = '1',

            /// <summary>开仓价</summary>
            ORPT_OpenPrice = '4',

            /// <summary>最新价与昨结算价较大值</summary>
            ORPT_MaxPreSettlementPrice = '5',
        };

        /// <summary>TFtdcActionTypeType是一个执行类型类型</summary>
        public enum struct ActionTypeType : char
        {
            /// <summary>执行</summary>
            ACTP_Exec = '1',

            /// <summary>放弃</summary>
            ACTP_Abandon = '2',
        };

        /// <summary>TFtdcForQuoteStatusType是一个询价状态类型</summary>
        public enum struct ForQuoteStatusType : char
        {
            /// <summary>已经提交</summary>
            FQST_Submitted = 'a',

            /// <summary>已经接受</summary>
            FQST_Accepted = 'b',

            /// <summary>已经被拒绝</summary>
            FQST_Rejected = 'c',
        };

        /// <summary>TFtdcExecOrderPositionFlagType是一个期权行权后是否保留期货头寸的标记类型</summary>
        public enum struct ExecOrderPositionFlagType : char
        {
            /// <summary>保留</summary>
            EOPF_Reserve = '0',

            /// <summary>不保留</summary>
            EOPF_UnReserve = '1',
        };

        /// <summary>TFtdcExecOrderCloseFlagType是一个期权行权后生成的头寸是否自动平仓类型</summary>
        public enum struct ExecOrderCloseFlagType : char
        {
            /// <summary>自动平仓</summary>
            EOCF_AutoClose = '0',

            /// <summary>免于自动平仓</summary>
            EOCF_NotToClose = '1',
        };

        /// <summary>TFtdcCombDirectionType是一个组合指令方向类型</summary>
        public enum struct CombDirectionType : char
        {
            /// <summary>申请组合</summary>
            CMDR_Comb = '0',

            /// <summary>申请拆分</summary>
            CMDR_UnComb = '1',

            /// <summary>操作员删组合单</summary>
            CMDR_DelComb = '2',
        };

        /// <summary>TFtdcOptSelfCloseFlagType是一个期权行权的头寸是否自对冲类型</summary>
        public enum struct OptSelfCloseFlagType : char
        {
            /// <summary>自对冲期权仓位</summary>
            OSCF_CloseSelfOptionPosition = '1',

            /// <summary>保留期权仓位</summary>
            OSCF_ReserveOptionPosition = '2',

            /// <summary>自对冲卖方履约后的期货仓位</summary>
            OSCF_SellCloseSelfFuturePosition = '3',

            /// <summary>保留卖方履约后的期货仓位</summary>
            OSCF_ReserveFuturePosition = '4',
        };

        /// <summary>TFtdcBizTypeType是一个业务类型类型</summary>
        public enum struct BizTypeType : char
        {
            /// <summary>期货</summary>
            BZTP_Future = '1',

            /// <summary>证券</summary>
            BZTP_Stock = '2',
        };

        /// <summary>TFtdcAppTypeType是一个用户App类型类型</summary>
        public enum struct AppTypeType : char
        {
            /// <summary>直连的投资者</summary>
            APP_TYPE_Investor = '1',

            /// <summary>为每个投资者都创建连接的中继</summary>
            APP_TYPE_InvestorRelay = '2',

            /// <summary>所有投资者共享一个操作员连接的中继</summary>
            APP_TYPE_OperatorRelay = '3',

            /// <summary>未知</summary>
            APP_TYPE_UnKnown = '4',
        };

    }
}
