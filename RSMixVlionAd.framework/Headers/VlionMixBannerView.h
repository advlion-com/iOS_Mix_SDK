//
//  VlionMixBannerView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/19.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionMixBannerViewDelegate <NSObject>

@optional

// 广告请求成功。参数说明：adId(广告位id)，viewWidth(广告物料的宽)，viewHeight(广告物料的高)
- (void)onBannerRequestSuccess:(NSString *)adId viewWidth:(CGFloat)viewWidth viewHeight:(CGFloat)viewHeight;

// 广告请求失败。参数说明：adId(广告位id)，code(错误码)，errMsg(错误信息)
- (void)onBannerRequestFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 广告展示成功
- (void)onBannerShowSuccess:(NSString *)adId;

// 广告展示失败
- (void)onBannerShowFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 广告点击事件
- (void)onBannerClicked:(NSString *)adId;

// 横幅广告曝光回调
- (void)onBannerExposure:(NSString *)adId;

// 广告的关闭
- (void)onBannerClose:(NSString *)adId;

@end

@interface VlionMixBannerView : UIView

@property (nonatomic, weak) id<VlionMixBannerViewDelegate> delegate;

// tagId - 广告位 id   rootViewController:[必选]需设置为显示广告的UIViewController
- (instancetype)initWithTagId:(NSString *)tagId rootViewController:(UIViewController *)rootViewController;

// 加载展示广告
- (void)loadAdAndShow;

// 设置广告的宽,高  默认600*100
- (void)setImageAcceptedSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
