//
//  VlionAdPageView.h
//  RSMixVoildSDK
//
//  Created by 周晓旭 on 2020/2/16.
//  Copyright © 2020 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VlionAdPageView : UIView

- (instancetype)initWithFrame:(CGRect)frame media:(NSString *)media submedia:(NSString *)submedia currentVC:(UIViewController *)currentVC;

@end

NS_ASSUME_NONNULL_END
