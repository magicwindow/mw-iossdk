//
//  MWAdNative.h
//  MagicWindowSampleApp
//
//  Created by cafei on 2017/4/27.
//  Copyright © 2017年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWAdNativeDelegate.h"

@interface MWAdNative : NSObject
/**
 *  原生广告delegate
 */
@property (nonatomic, weak) id<MWAdNativeDelegate> delegate;

/**
 *  初始化
 *  @param mwkey：魔窗位key
 *  @return delegate：原生广告delegate
 */
- (instancetype)initWithMWKey:(NSString *)mwKey delegate:(id<MWAdNativeDelegate>)delegate;

/**
 * 请求多条原生广告
 */
- (void)loadNativeAds;

@end
