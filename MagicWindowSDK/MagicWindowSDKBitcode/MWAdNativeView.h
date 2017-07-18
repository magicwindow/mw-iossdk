//
//  MWAdNativeView.h
//  MagicWindowSampleApp
//
//  Created by cafei on 2017/5/5.
//  Copyright © 2017年 MagicWindow. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MWAdNativeAdObject;

@interface MWAdNativeView : UIView

/**
 * 初始化，根据MWAdNativeAdObject广告内容，使用魔窗提供的信息流广告样式
 */
- (id)initAdViewWithFrame:(CGRect)frame Object:(MWAdNativeAdObject *)object;

/**
 * 初始化，自定义信息流广告样式
 * 添加品牌名称brandName
 */
-(id)initWithFrame:(CGRect)frame brandName:(UILabel *) brandLabel title:(UILabel *) titleLabel icon:(UIImageView *) iconView mainImage:(UIImageView *) mainView moreImages:(NSArray *)moreImgViews;

/**
 * 小图
 */
@property (strong, nonatomic)  UIImageView *iconImageView;
/**
 * 大图
 */
@property (strong, nonatomic)  UIImageView *mainImageView;
/**
 * 多图 image view list
 */
@property (strong, nonatomic) NSMutableArray *imageViewlist;
/**
 * 广告标示
 */
@property (strong, nonatomic)  UILabel *adLogoLabel;
/**
 * 魔窗广告logo
 */
@property (strong, nonatomic)  UIImageView *mwLogoImageView;

/**
 * 标题 view
 */
@property (strong, nonatomic)  UILabel *titleLabel;
/**
 * 品牌名称 view
 */
@property (strong, nonatomic)  UILabel *brandLabel;
/**
 *  展示用的vc, 可以不传
 */
@property (nonatomic, strong)  UIViewController *presentAdViewController;

/**
 * 根据MWAdNativeAdObject广告内容，在广告视图上缓存和展示广告,同时关联广告视图和点击展现行为
 * object 包含文字内容和物料地址
 */
- (void)loadAndDisplayNativeAdWithObject:(MWAdNativeAdObject *)object completion:(void (^)(NSString *error))completion;
/**
 * 发送展现日志
 */
- (void)trackImpression;


@end
