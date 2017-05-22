//
//  AndpaySDKResult.h
//  AndpaySDK
//
//  Created by Rango on 2017/4/11.
//  Copyright © 2017年 Rango. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    Andpay_SDK_Result_TYPE_Success,
    Andpay_SDK_Result_TYPE_Fail,
    Andpay_SDK_Result_TYPE_Cancel,
} Andpay_SDK_Result_TYPE;

typedef enum {
    //没有错误
    Andpay_SDK_NO_ERROR = 0,
    //SDK系统类错误
    Andpay_SDK_Error_Code_System_Error = 1000,
    Andpay_SDK_Error_Code_Init_Fail = 1001,
    Andpay_SDK_Error_Code_Token_Error = 1002,
    Andpay_SDK_Error_Code_Network_Error = 1003,
    
    Andpay_SDK_Error_Code_Position_Error = 1010,
    Andpay_SDK_Error_Code_Position_System_Deny = 1011,
    Andpay_SDK_Error_Code_Position_User_Deny = 1012,
    //支付错误
    Andpay_SDK_Error_Code_Pay_Error = 1101,
} Andpay_SDK_Error_Code;

@interface AndpaySDKResult : NSObject

//返回类型（成功/失败/取消）
@property (nonatomic, assign) Andpay_SDK_Result_TYPE resultType;

//失败code（未失败为0，系统错误，初始化错误，token参数错误，支付错误）
@property (nonatomic, assign) Andpay_SDK_Error_Code errorCode;

//范湖错误消息
@property (nonatomic, strong) NSString *errorMessage;

//交易金额
@property (nonatomic, strong) NSDecimalNumber *amt;

//交易时间
@property (nonatomic, strong) NSString *payTime;

//商家订单号
@property (nonatomic, strong) NSString *orderId;


@end
