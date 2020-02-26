//
//  VlionMixSpotView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/19.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionMixSpotViewDelegate <NSObject>

@optional

// 请求成功，此回调代表请求广告数据成功了
- (void)onSpotRequestSuccess:(NSString *)adId;

// 请求失败。参数说明：adId(广告位id)，code(错误码)，errorMsg(错误信息)
- (void)onSpotRequestFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 插屏广告展示成功
- (void)onSpotSuccess:(NSString *)adId;

// 插屏广告展示失败
- (void)onSpotFailed:(NSString *)adId code:(NSInteger)code errMsg:(NSString *)errMsg;

// 插屏广告点击，此时SDK内部关闭了广告
- (void)onSpotClicked:(NSString *)adId;

// 插屏广告关闭
- (void)onSpotClosed:(NSString *)adId;

@end

@interface VlionMixSpotView : UIView

@property (nonatomic, weak) id<VlionMixSpotViewDelegate> delegate;

// tagId - 广告位 ID   rootViewController:[必选]需设置为显示广告的UIViewController
- (instancetype)initWithTagId:(NSString *)tagId rootViewController:(UIViewController *)rootViewController;

// 设置广告的宽，高
- (void)setImageAcceptedSize:(CGSize)size;

// 加载展示广告
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
