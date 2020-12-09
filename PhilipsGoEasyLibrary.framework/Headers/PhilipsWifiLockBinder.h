//
//  PHLPairUtils.h
//  PHLLibrary
//
//  Created by Tianbao Wang on 2020/9/7.
//  Copyright © 2020 Tianbao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PhilipsGerneralDefinition.h"
#import "Hotspot.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhilipsWifiLockBinder : NSObject

/**
*    单例
*/
+ (PhilipsWifiLockBinder *)shared;

/**
*    连接小AP设备无线
*
*    @param     ssid         Wi-Fi锁热点
*    @param     callback        回调
*/
- (void)connect:(NSString *)ssid
       callback:(CallbackHandler)callback;

/**
*    手动连接小AP设备无线后，校验是否已连接
*
*    @param     ssid          wifi lock ssid
*    @param     callback        回调
*/
- (void)connectManual:(NSString *)ssid
             callback:(CallbackHandler)callback;

/**
*    校验管理员密码
*
*    @param     mastercode          管理员密码
*    @param     callback        回调
*/
- (void)requestCheckMastercode:(NSString *)mastercode
                      callback:(CallbackHandler)callback;


/**
*    修改管理员密码
*
*    @param     mastercode          管理员密码
*    @param     callback        回调
*/
- (void)requestChangeMastercode:(NSString *)mastercode
                       callback:(CallbackHandler)callback;


/**
*    获取无线热点扫描数据
*
*    @param     callback        回调
*/
- (void)requestWifiList:(CallbackHandler)callback;


/**
*    配置无线热点网络参数
*
*    @param     hotspot          无线热点扫描数据
*    @param     password       无线热点密码
*    @param     callback        回调
*/
- (void)requestWifiConfig:(Hotspot *)hotspot
                 password:(NSString *)password
                 callback:(CallbackHandler)callback;


@end

NS_ASSUME_NONNULL_END
