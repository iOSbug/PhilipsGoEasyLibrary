//
//  PhilipsNetManager.h
//  PhilipsGoEasyLibrary
//
//  Created by Tianbao Wang on 2020/11/2.
//

#import <Foundation/Foundation.h>
#import "PhilipsGerneralDefinition.h"

NS_ASSUME_NONNULL_BEGIN

@interface PhilipsNetManager : NSObject

/**
*    单例
*/
+ (PhilipsNetManager *)shared;



/**
*    获取设备接入地址
*
*    @param     callback        回调
*/
- (void)getSdcUrl:(CallbackHandler)callback;

/**
*    解绑设备
*
*    @param     deviceId          设备SN
*    @param     deviceType      设备类型
*    @param     callback        回调
*/
- (void)unbindDevice:(NSString *)deviceId
          deviceType:(NSString *)deviceType
            callback:(CallbackHandler)callback;

@end

NS_ASSUME_NONNULL_END
