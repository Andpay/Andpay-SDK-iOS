//
//  AndpaySDKConfig.h
//  AndpaySDK
//
//  Created by Rango on 2017/4/1.
//  Copyright © 2017年 Rango. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, Andpay_Pay_Method) {
    Andpay_Pay_Method_QuickPay,
    Andpay_Pay_Method_Alipay,
    Andpay_Pay_Method_WechatPay,
    Andpay_Pay_Method_ApplePay,
};

extern NSString * NSStringFromAndpayPayMethod(Andpay_Pay_Method payMethod);

extern NSString * NSStringTitleFromAndpayPayMethod(NSString *payMethod);

@interface AndpaySDKConfig : NSObject

@property (nonatomic, assign) BOOL isDebug;

@property (nonatomic, strong) NSMutableArray *payMethod;

@end
