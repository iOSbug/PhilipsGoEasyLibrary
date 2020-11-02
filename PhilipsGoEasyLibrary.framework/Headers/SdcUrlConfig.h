//
//  SdcUrlConfig.h
//  PhilipsGoEasyLibrary
//
//  Created by Tianbao Wang on 2020/11/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SdcUrlConfig : NSObject

/// 门锁接入地址
@property(nonatomic, readonly, nullable) NSString *lockDevUrl;

/// 远端设备管理
@property(nonatomic, readonly, nullable) NSString *gatewayUrl;
@end

NS_ASSUME_NONNULL_END
