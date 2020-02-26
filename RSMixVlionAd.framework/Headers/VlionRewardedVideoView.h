//
//  VlionRewardedVideoView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/20.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionRewardedVideoViewDelegate <NSObject>

@optional

// 缓存成功
- (void)onVideoLoad:(NSString *)adId;

// 视频获取失败
- (void)onVideoRequestFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 视频开始播放
- (void)onVideoPlayStart:(NSString *)adId;

// 视频播放失败回调
- (void)onVideoPlayFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 视频关闭回调
- (void)onVideoClosed:(NSString *)adId;

// 视频点击回调
- (void)onVideoClicked:(NSString *)adId;

// 视频播放完成回调
- (void)onVideoFinish:(NSString *)adId;

// 视频奖励回调
- (void)onRewardVerify:(NSString *)adId;

@end

@interface VlionRewardedVideoView : UIView

@property (nonatomic, weak) id<VlionRewardedVideoViewDelegate> delegate;

// tagId - 广告位 ID   rootViewController:[必选]需设置为显示广告的UIViewController
- (instancetype)initWithTagId:(NSString *)tagId rootViewController:(UIViewController *)rootViewController;

// 加载广告资源
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
