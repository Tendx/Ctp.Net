using System;

namespace Ctp.Net.Market.Example
{
    class Program
    {
        private static MarketApi _mdapi;
        static void Main(string[] args)
        {
            _mdapi = MarketApi.CreateMarketApi("tmp/", false, false);
            _mdapi.OnFrontConnected += OnFrontConnectd;
            _mdapi.OnRspUserLogin += OnRspUserLogin;
            _mdapi.OnRtnDepthMarketData += OnRtnDepthMarketData;
            _mdapi.RegisterFront("tcp://180.168.146.187:10131");
            _mdapi.Init();
            Console.ReadLine();
            _mdapi.Release();
        }

        private static void OnRtnDepthMarketData(DepthMarketDataField DepthMarketData)
        {
            Console.WriteLine(DepthMarketData.InstrumentID + ":" + DepthMarketData.LastPrice);
        }

        private static void OnRspUserLogin(RspUserLoginField RspUserLogin, RspInfoField RspInfo, int RequestID, bool IsLast)
        {
            _mdapi.SubscribeMarketData(new[] { "rb2109" }, 1);
        }

        private static void OnFrontConnectd()
        {
            _mdapi.ReqUserLogin(new ReqUserLoginField(), 0);
        }
    }
}

