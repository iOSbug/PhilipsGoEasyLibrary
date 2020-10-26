//
//  BinderDevice.h
//  PhilipsGoEasyLibrary
//
//  Created by Tianbao Wang on 2020/10/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

///绑定设备返回
@interface BinderDevice : NSObject

/// 设备SN
@property(nonatomic, readonly, nullable) NSString *deviceId;
/// 设备类型
@property(nonatomic, readonly, nullable) NSString *deviceType;
@end

NS_ASSUME_NONNULL_END
