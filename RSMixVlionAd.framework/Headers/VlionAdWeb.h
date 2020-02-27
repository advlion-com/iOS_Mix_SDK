//
//  VlionAdWeb.h
//  cnVlionAd
//
//  Created by 周晓旭 on 2019/12/16.
//  Copyright © 2019 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionAdWebDelegate <NSObject>

@optional

- (void)vlionAdViewSuccess;

- (void)vlionAdViewFail:(NSInteger)code errMsg:(NSString *)errMsg;

@end

@interface VlionAdWeb : UIView

@property (nonatomic, weak) id<VlionAdWebDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame mediaId:(NSString *)mediaId rootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
