//
//  VlionFeedsView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/20.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionFeedsViewDelegate <NSObject>

@optional

// 广告数据获取成功
- (void)onFeedsRequestSuccess:(NSString *)adId adView:(UIView *)adView;

// 广告数据获取失败
- (void)onFeedsRequestFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 广告展示成功
- (void)onFeedsShowSuccess:(NSString *)adId;

// 广告展示失败
- (void)onFeedsShowFail:(NSString *)adId;

// 广告点击
- (void)onFeedsClick:(NSString *)adId;

// 广告曝光
- (void)onFeedsExposure:(NSString *)adId;

// 广告点击关闭
- (void)onFeedsClose:(NSString *)adId;

@end

@interface VlionFeedsView : UIView

@property (nonatomic, copy) void (^returnFeedsViewHeight) (CGFloat height);

@property (nonatomic, weak) id<VlionFeedsViewDelegate> delegate;

// frame view坐标  tagId - 广告位 ID rootViewController:[必选]需设置为显示广告的UIViewController
- (instancetype)initWithFrame:(CGRect)frame tagId:(NSString *)tagId rootViewController:(UIViewController *)rootViewController;

// 加载广告资源
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
