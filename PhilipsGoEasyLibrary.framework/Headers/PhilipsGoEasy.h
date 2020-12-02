//
//  PHLSDK.h
//  PHLLibrary
//
//  Created by Tianbao Wang on 2020/9/10.
//  Copyright © 2020 Tianbao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PhilipsGerneralDefinition.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhilipsGoEasy : NSObject

/**
 *    SDK初始化
 *
 *    @param     appKey          appKey
 *    @param     appSecret       appSecret
 *    @param     callback        回调
 */
+ (void)asyncInit:(NSString *)appKey
        appSecret:(NSString *)appSecret
         callback:(CallbackHandler)callback;

/**
 *    登录
 *
 *    @param     allyToken       allyToken
 *    @param     allyName       allyToken
 *    @param     callback        回调
 */
+ (void)signIn:(NSString *)allyToken
      allyName:(NSString *)allyName
      callback:(CallbackHandler)callback;


/**
 *    SDK版本号
 */
+ (NSString *)version;

/**
 *    日志显示
 */
+ (void)setDeubugLog:(BOOL)open;


/**
 *    日志存储
 */
+ (void)saveDeubugLog:(BOOL)open;

/**
 *    启用测试服务器(默认正式环境，启用测试环境时，必须在asyncInit前调用)
 */
+ (void)setDevEnvironment:(BOOL)open;

@end

NS_ASSUME_NONNULL_END
