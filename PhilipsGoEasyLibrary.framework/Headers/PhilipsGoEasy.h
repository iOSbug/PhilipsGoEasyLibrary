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

@end

NS_ASSUME_NONNULL_END
