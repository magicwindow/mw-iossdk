//
//  MWAdNativeAdObject.h
//  MagicWindowSampleApp
//
//  Created by cafei on 2017/6/8.
//  Copyright © 2017年 MagicWindow. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MWAdCommonConfig.h"

@interface MWAdNativeAdObject : NSObject

/*
 * 魔窗位key
 */
@property (copy, nonatomic) NSString *mwKey;
/*
 * 广告顺序
 */
@property (assign, nonatomic) NSInteger adIndex;

/**
 * 标题 text
 */
@property (copy, nonatomic)  NSString *title;
/**
 * 描述 text
 */
@property (copy, nonatomic)  NSString *text;
/**
 * 小图 url
 */
@property (copy, nonatomic) NSString *iconImageURLString;
/**
 * 大图 url
 */
@property (copy, nonatomic) NSString *mainImageURLString;

/**
 * 多图信息流的image url array
 */
@property (strong, nonatomic) NSArray *morepics;

/**
 * 品牌名称，若广告返回中无品牌名称则为空
 */
@property (copy, nonatomic)  NSString *brandName;
/**
 * 对返回的广告单元，需先判断MWADMaterialType再决定使用何种渲染组件
 */
@property MWADMaterialType materialType;


@end
