//
//  PHLCallbackResult.h
//  PHLLibrary
//
//  Created by Tianbao Wang on 2020/9/8.
//  Copyright © 2020 Tianbao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PhilipsCallbackResult : NSObject

@property(nonatomic, readonly) BOOL success;

@property(nonatomic, readonly, nullable) id data;

@property(nonatomic, readonly) NSInteger errcode;

@property(nonatomic, readonly) NSString *errmsg;

@end

NS_ASSUME_NONNULL_END
