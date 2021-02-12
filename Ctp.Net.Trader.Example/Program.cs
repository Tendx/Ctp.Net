using System;

namespace Ctp.Net.Trader.Example
{
    class Program
    {
        public static TraderApi _tdapi;
        public static int _reqId = 0;
        static void Main(string[] args)
        {
            _tdapi = TraderApi.CreateTraderApi("tmp/");
            _tdapi.OnFrontConnected += OnFrontConnected;
            _tdapi.OnRspAuthenticate += OnRspAuthenticate;
            _tdapi.OnRspUserLogin += OnRspUserLogin;
            _tdapi.SubscribePublicTopic(RESUME_TYPE.RESTART);
            _tdapi.SubscribePublicTopic(RESUME_TYPE.RESTART);
            _tdapi.RegisterFront("tcp://180.168.146.187:10130");
            _tdapi.Init();
            Console.ReadLine();
            _tdapi.Release();
        }

        private static void OnRspUserLogin(RspUserLoginField RspUserLogin, RspInfoField RspInfo, int RequestID, bool IsLast)
        {

        }

        private static void OnRspAuthenticate(RspAuthenticateField RspAuthenticateField, RspInfoField RspInfo, int RequestID, bool IsLast)
        {
            if (RspInfo != null && RspInfo.ErrorID == 0)
            {
                ReqUserLoginField userLoginField = new ReqUserLoginField()
                {
                    BrokerID = "9999",
                    UserID = "",
                    Password = "",
                };
                _tdapi.ReqUserLogin(userLoginField, _reqId++);
            }
            else
            {
                Console.WriteLine(RspInfo.ErrorID + ":" + RspInfo.ErrorMsg);
            }
        }

        private static void OnFrontConnected()
        {
            ReqAuthenticateField authenticateField = new ReqAuthenticateField()
            {
                BrokerID = "9999",
                UserID = "",
                UserProductInfo = "",
                AuthCode = "",
                AppID = "",
            };
            _tdapi.ReqAuthenticate(authenticateField, _reqId++);
        }
    }
}
