//
//  VlionSplashView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/19.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionSplashViewDelegate <NSObject>

@optional

// 请求成功。此回调代表请求广告数据成功了
- (void)onSplashRequestSuccess:(NSString *)adId;

// 请求失败。参数说明：adId(广告位id)，code(错误码)，errMsg(错误信息)
- (void)onSplashRequestFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 开屏广告展示成功
- (void)onSplashShowSuccess:(NSString *)adId;

// 开屏广告展示失败。参数说明：adId(广告位id)，code(错误码)，errMsg(错误信息)
- (void)onSplashFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 点击广告，此时SDK内部关闭了广告展示
- (void)onSplashClicked:(NSString *)adId;

// 开屏广告关闭
- (void)onSplashClosed:(NSString *)adId;

@end

@interface VlionSplashView : UIView

@property (nonatomic, weak) id<VlionSplashViewDelegate> delegate;

// tagId - 广告位 id
- (instancetype)initWithTagId:(NSString *)tagId;

// 加载展示广告
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
