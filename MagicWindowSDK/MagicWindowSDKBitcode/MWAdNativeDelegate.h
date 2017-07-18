//
//  MWAdNativeDelegate.h
//  MagicWindowSampleApp
//
//  Created by cafei on 2017/4/27.
//  Copyright © 2017年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWAdCommonConfig.h"
@class MWAdNativeView;

@protocol MWAdNativeDelegate <NSObject>

/**
 * 广告请求成功
 * @param 请求成功的MWNativeAdObject数组，如果只成功返回一条原生广告，数组大小为1
 */
- (void)nativeAdsSuccessLoad:(NSArray *)nativeAds;

/**
 *  广告请求失败
 * @param 失败的MWAdNative
 * @param 失败的类型 MWADFailReason
 */
- (void)nativeAdsFailLoad:(MWADFailReason) reason;

/**
 *  广告点击
 */
- (void)nativeAdClicked:(MWAdNativeView*)nativeAdView;

/**
 *  广告详情页关闭
 */
-(void)didDismissLandingPage:(MWAdNativeView *)nativeAdView;


@end
