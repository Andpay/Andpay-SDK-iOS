Andpay-SDK-iOS
===================
和付快捷支付SDK-iOS
-------------------
## 简介
lib 文件夹是iOS SDK 文件与引用的头文件，
demo 文件夹中是一个简单的接入示例，该示例仅供参考。

## 版本要求
iOS SDK 要求 iOS 7.0 及以上版本

## 接入方法
### 安装
#### 使用 CocoaPods
1. 在 `Podfile` 添加

    ```
    pod 'AndpaySDK', '~> 1.0.0'
    ```

2. 运行 `pod install`
3. 使用 `{project}.xcworkspace` 打开项目，而不是 `{project}.xcodeproj`

#### 手动导入
1. 获取 SDK
下载 SDK, 里面包含了 lib 文件夹和 demo 文件夹。lib 文件夹里面是 SDK 的头文件及链接库。
2. 讲.a文件与.h文件导入工程中

###使用

####调用SDK

引入头文件：
```objectivec
#import "AndpaySDK.h"
```
代码中执行
```objc
[AndpaySDK showPayViewController:self withToken:@"" resultBlock:^(AndpaySDKResult *result) {
    //your codes
}];
```
####返回值

```objective-c
//返回类型（成功/失败/取消）
Andpay_SDK_Result_TYPE resultType;
    Andpay_SDK_Result_TYPE_Success,
    Andpay_SDK_Result_TYPE_Fail,
    Andpay_SDK_Result_TYPE_Cancel,

//失败code（未失败为0，系统错误，初始化错误，token参数错误，支付错误）
Andpay_SDK_Error_Code *errorCode;
    Andpay_SDK_NO_ERROR = 0,
    Andpay_SDK_Error_Code_System_Error = 1000,
    Andpay_SDK_Error_Code_Init_Fail = 1001,
    Andpay_SDK_Error_Code_Token_Error = 1002,
    Andpay_SDK_Error_Code_Pay_Error = 1101,

//交易金额
NSDecimalNumber *amt;

//交易时间
NSString *payTime;

//交易编号
NSString *orderId;
```
## 注意事项

