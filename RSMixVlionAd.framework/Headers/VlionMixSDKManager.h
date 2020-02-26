//
//  VlionMixSDKManager.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/19.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VlionMixSDKManager : NSObject

+ (VlionMixSDKManager *)defaultManager;

- (void)setAppid:(NSString *)appid tid:(NSString *)tid gid:(NSString *)gid;

- (NSString *)appId;

- (NSString *)tid;

- (NSString *)gid;

- (NSString *)sdk_ver;

- (NSString *)timestamp;

@end

NS_ASSUME_NONNULL_END
