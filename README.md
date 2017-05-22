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
下载 SDK, lib 文件夹里面是 SDK 的头文件及链接库。<br />![](https://github.com/Andpay/Andpay-SDK-iOS/raw/master/img/sdk.png)
2. 将.a文件与.h文件导入工程中
3. 在Target->General中，添加CoreLocation.framework<br />![](https://github.com/Andpay/Andpay-SDK-iOS/raw/master/img/frameworks.png)

### 使用
#### 添加字段
1. Info.plist中添加行
   Key : NSLocationWhenInUseUsageDescription
   Value : 使用快捷支付需要获您的取地理位置信息<br />![](https://github.com/Andpay/Andpay-SDK-iOS/raw/master/img/infoPlist.png)
2. 如果需要ApplePay，则需要将Project-Capabilities->ApplePay打开<br />![](https://github.com/Andpay/Andpay-SDK-iOS/raw/master/img/applePayConfig1.png)
   并配置entitlements中的merchant Ids字段<br />![](https://github.com/Andpay/Andpay-SDK-iOS/raw/master/img/applePayConfig2.png)

#### 调用SDK
引入头文件：
```objectivec
#import "AndpaySDK.h"

AndpaySDKConfig *config = [[AndpaySDKConfig alloc] init];
```
如果需要调试，设置SDK的Debug参数
```objc
    [config setIsDebug:YES];
```
如果需要ApplePay，需要将ApplePay的MerchantId传入
```objc
    [config setMerchantId:@""];
```
初始化SDK
```objc
    [AndpaySDK initConfig:config];
```

调用支付接口
${yourController}是你启动支付的页面，${yourToken}是你从服务端获取的订单支付凭证（具体参考服务端文档）。
```objc
[AndpaySDK showPayViewController:${yourController} withToken:${yourToken} resultBlock:^(AndpaySDKResult *result) {
    //your codes
}];
```
#### 返回值
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
    Andpay_SDK_Error_Code_Network_Error = 1003,
    
    Andpay_SDK_Error_Code_Position_Error = 1010,
    Andpay_SDK_Error_Code_Position_System_Deny = 1011,
    Andpay_SDK_Error_Code_Position_User_Deny = 1012,
    
    Andpay_SDK_Error_Code_Pay_Error = 1101,

//交易金额
NSDecimalNumber *amt;

//交易时间
NSString *payTime;

//交易编号
NSString *orderId;
```

Enjoy it!

## 注意事项

