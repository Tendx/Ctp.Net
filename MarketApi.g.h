#pragma once
#include <Windows.h>
#include "Objects.g.h"
#include "Delegates.g.h"
#include "MarketSpi.g.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;

namespace Ctp
{
    namespace Net
    {
        public ref class MarketApi
        {
        public:
#pragma region
            /// <summary>创建Api</summary>
            /// <param name="dllPath">thostmduserapi_se.dll路径</param>
            /// <param name="flowPath">存贮订阅信息文件的目录，默认为当前目录</param>
            /// <param name="isUsingUdp">使用udp</param>
            /// <param name="isMulticast">使用多播</param>
            /// <returns>创建出的MarketApi</returns>
            static MarketApi^ CreateApi(String^ dllPath, String^ flowPath, bool isUsingUdp, bool isMulticast);

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

            /// <summary>订阅行情</summary>
            /// <param name="instrumentIds">合约id列表</param>
            int SubscribeMarketData(List<String^>^ instrumentIds);

            /// <summary>退订行情</summary>
            /// <param name="instrumentIds">合约id列表</param>
            int UnSubscribeMarketData(List<String^>^ instrumentIds);

            /// <summary>订阅询价</summary>
            /// <param name="instrumentIds">合约id列表</param>
            int SubscribeForQuoteRsp(List<String^>^ instrumentIds);

            /// <summary>退订询价</summary>
            /// <param name="instrumentIds">合约id列表</param>
            int UnSubscribeForQuoteRsp(List<String^>^ instrumentIds);

            /// <summary>用户登录请求</summary>
            int ReqUserLogin(ReqUserLoginField^ reqUserLoginField, int requestID);

            /// <summary>登出请求</summary>
            int ReqUserLogout(UserLogoutField^ userLogout, int requestID);

            /// <summary>请求查询组播合约</summary>
            int ReqQryMulticastInstrument(QryMulticastInstrumentField^ qryMulticastInstrument, int requestID);

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

            /// <summary>登录请求响应</summary>
            event OnRspUserLogin^ OnRspUserLogin;

            /// <summary>登出请求响应</summary>
            event OnRspUserLogout^ OnRspUserLogout;

            /// <summary>请求查询组播合约响应</summary>
            event OnRspQryMulticastInstrument^ OnRspQryMulticastInstrument;

            /// <summary>错误应答</summary>
            event OnRspError^ OnRspError;

            /// <summary>订阅行情应答</summary>
            event OnRspSubMarketData^ OnRspSubMarketData;

            /// <summary>取消订阅行情应答</summary>
            event OnRspUnSubMarketData^ OnRspUnSubMarketData;

            /// <summary>订阅询价应答</summary>
            event OnRspSubForQuoteRsp^ OnRspSubForQuoteRsp;

            /// <summary>取消订阅询价应答</summary>
            event OnRspUnSubForQuoteRsp^ OnRspUnSubForQuoteRsp;

            /// <summary>深度行情通知</summary>
            event OnRtnDepthMarketData^ OnRtnDepthMarketData;

            /// <summary>询价通知</summary>
            event OnRtnForQuoteRsp^ OnRtnForQuoteRsp;

#pragma endregion

#pragma region
        private:
            void OnFrontConnectedCallback();
            void OnFrontDisconnectedCallback(int nReason);
            void OnHeartBeatWarningCallback(int nTimeLapse);
            void OnRspUserLoginCallback(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUserLogoutCallback(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspQryMulticastInstrumentCallback(CThostFtdcMulticastInstrumentField* pMulticastInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspErrorCallback(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspSubMarketDataCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUnSubMarketDataCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspSubForQuoteRspCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRspUnSubForQuoteRspCallback(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);
            void OnRtnDepthMarketDataCallback(CThostFtdcDepthMarketDataField* pDepthMarketData);
            void OnRtnForQuoteRspCallback(CThostFtdcForQuoteRspField* pForQuoteRsp);
#pragma endregion

            MarketApi();
            ~MarketApi();

            HMODULE _hmodule = __nullptr;
            CThostFtdcMdApi* _api = __nullptr;
            MarketSpi* _spi = __nullptr;
            List<GCHandle>^ _gchandles = gcnew List<GCHandle>();
        };
    }
}
