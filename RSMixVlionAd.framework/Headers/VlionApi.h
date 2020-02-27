//
//  VlionApi.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/16.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VlionMixSDKManager.h"
#import "NSString+AES.h"

#define VLION_SCREEN_WIDTH  [[UIScreen mainScreen] bounds].size.width
#define VLION_SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height

#define VLION_SCALE_WIDTH_EX(ref_w, ref_h, h) (ref_w * h / ref_h)
#define VLION_SCALE_HEIGHT_EX(ref_w, ref_h, w) (ref_h * w / ref_w)

#ifdef DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr, "%s\n", [[NSString stringWithFormat: FORMAT, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif

#define VLION_iPhoneFull \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

NS_ASSUME_NONNULL_BEGIN

typedef void (^XMSuccessBlock) (id responseObject);

@interface VlionApi : NSObject

+ (void)getWithUrl:(NSString *)url params:(NSDictionary *)params success:(XMSuccessBlock)success;

+ (NSString *)md5:(NSString *)string;

@end

NS_ASSUME_NONNULL_END
