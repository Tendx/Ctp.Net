# Ctp.Net
ctp .net6 clr wrapper
上期ctp接口c++/clr封装，显示指定dll，对应接口版本是6.3.19 win x64

基本使用方法：
#### 创建行情api
```
var mapi = MarketApi.CreateApi("thostmduserapi_se.dll", Path.Combine("tmp", "md_"), false, false);
mapi.OnFrontConnected += mapi_OnFrontConnected;
mapi.OnFrontDisconnected += mapi_OnFrontDisconnected;
mapi.OnRspUserLogin += mapi_OnRspUserLogin;
mapi.OnRtnDepthMarketData += mapi_OnRtnDepthMarketData;
mapi.OnRspError += mapi_OnRspError;
mapi.RegisterFront(Local.CtpMdFront);
mapi.Init();
```

#### 创建交易api
```
var tapi = TraderApi.CreateApi("thosttraderapi_se.dll", Path.Combine("tmp", "td_"));
tapi.OnFrontConnected += tapi_OnFrontConnected;
tapi.OnFrontDisconnected += tapi_OnFrontDisconnected;
tapi.OnRspAuthenticate += tapi_OnRspAuthenticate;
tapi.OnRspUserLogin += tapi_OnRspUserLogin;
tapi.OnRspQryTradingAccount += tapi_OnRspQryTradingAccount;
tapi.OnRspQryInvestorPosition += tapi_OnRspQryInvestorPosition;
tapi.OnRspError += tapi_OnRspError;
tapi.SubscribePrivateTopic(RESUME_TYPE.QUICK);
tapi.SubscribePublicTopic(RESUME_TYPE.QUICK);
tapi.RegisterFront($"tcp://{front.TraderIp}:{front.TraderPort}");
tapi.Init();
```

注：
1. 编译前需要确定vs安装程序里安装了[“适用于 v143 生成工具的 C++/CLI 支持（最新版本）”](https://learn.microsoft.com/zh-cn/cpp/dotnet/dotnet-programming-with-cpp-cli-visual-cpp?view=msvc-170)
2. api的使用方法，基本可参考原始c++版本的文档，方法名都做了保留，类型名做了简化
3. 编译成功会生成api接口的xml文档，用于ide的语法提示
4. 项目文件基本上是写脚本进行接口转换和类型生成，目前只针对于6.3.19 win x64版本（其实够用了）
5. 有其他疑问可加qq群:767101469
6. 特别感谢ctp群景总、李总等朋友的帮助，感谢项目https://github.com/yajiedesign/CTPCSharp
