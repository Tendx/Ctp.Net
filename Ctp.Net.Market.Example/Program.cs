using System;

namespace Ctp.Net.Market.Example
{
    class Program
    {
        private static MarketApi _mapi;
        static void Main(string[] args)
        {
            _mapi = MarketApi.CreateMarketApi("tmp/", false, false);
            _mapi.OnFrontConnected += _mapi_OnFrontConnected;
            _mapi.OnRspUserLogin += _mapi_OnRspUserLogin;
            _mapi.OnRtnDepthMarketData += _mapi_OnRtnDepthMarketData;
            _mapi.RegisterFront("tcp://180.168.146.187:10110");
            _mapi.Init();
            Console.ReadLine();
        }

        private static void _mapi_OnRtnDepthMarketData(DepthMarketDataField DepthMarketData)
        {
            Console.WriteLine(DepthMarketData.LastPrice);
        }

        private static void _mapi_OnRspUserLogin(RspUserLoginField RspUserLogin, RspInfoField RspInfo, int RequestID, bool IsLast)
        {
            _mapi.SubscribeMarketData(new[] { "rb2109" }, 1);
        }

        private static void _mapi_OnFrontConnected()
        {
            _mapi.ReqUserLogin(new ReqUserLoginField(), 0);
        }
    }
}

