//
//  Hotspot.h
//  PHLLibrary
//
//  Created by Tianbao Wang on 2020/9/8.
//  Copyright © 2020 Tianbao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 设备热点
@interface Hotspot : NSObject

/// 0 - 加密的SSID 1 - 开放的SSID
@property(nonatomic, readonly) BOOL open;

/// 热点ssid
@property(nonatomic, nullable) NSString *ssid;

/// 信号强度
@property(nonatomic, readonly) NSInteger signal;

/// 热点index
@property(nonatomic, readonly, nullable) NSString *index;

/// 热点信道
@property(nonatomic, readonly, nullable) NSString *ch;

/// 设备sn
@property(nonatomic, readonly, nullable) NSString *sn;
@end

NS_ASSUME_NONNULL_END
