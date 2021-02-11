# Ctp.Net
Ctp Api .Net 5 基本封装项目

## 使用方法
1. 交易日工作时间，去上期技术官网下载Api压缩包 <http://www.sfit.com.cn/5_2_DocumentDown_2.htm>
2. 压缩包解压缩，把windows x86的相关文件(.h/.lib/.dll)放到项目 *ctp_win_x86* 内
3. 运行 *CreateFiles.py* (需要**python 3**环境)
4. 打开 *Ctp.Net.sln*，编译 (需要**vs 2019** 并安装 **c++/cli support for v142 build tools** 组件)

## 说明
1. 除了含有*Custom*的cpp/h和项目文件，其他的cpp/h文件均为py脚本自动产生
2. 如果需要自定义的Request方法，请写在 *MarketAPi/TraderApi.Custom.cpp* 里面，并在 *MarketAPi/TraderApi.Custom.h* 里面#define对应的宏，跳过脚本给出的自动实现
3. 详细的使用方法，基本可以参考官方的手册 