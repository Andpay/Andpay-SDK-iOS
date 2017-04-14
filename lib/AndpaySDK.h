//
//  AndpaySDK.h
//  AndpaySDK
//
//  Created by Rango on 2017/3/28.
//  Copyright © 2017年 Rango. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AndpaySDKConfig.h"
#import "AndpaySDKResult.h"

@interface AndpaySDK : NSObject

+ (void)config:(AndpaySDKConfig *)config;

+ (void)showPayViewController:(UIViewController *)viewController
                    withToken:(NSString *)token
                  resultBlock:(void(^)(AndpaySDKResult *result))resultBlock;

+ (void)createOrder:(NSString *)amt success:(void(^)(NSString*))successBlock;

@end
