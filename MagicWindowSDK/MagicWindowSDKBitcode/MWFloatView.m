//
//  MWFloatView.m
//
//  Created by 刘家飞 on 16/9/27.
//  Copyright © 2016年 MagicWindow. All rights reserved.
//

#import "MWFloatView.h"
#import "MWApi.h"

@implementation MWFloatView

- (void)showInView:(UIView *)view
{
    if (view == nil)
    {
        return;
    }
    if (_debugEnable)
    {
#ifdef DEBUG
        [view addSubview:self];
#else
        if ([MWApi callbackEnable])
        {
            [view addSubview:self];
        }
#endif
    }
    else
    {
        if ([MWApi callbackEnable])
        {
            [view addSubview:self];
        }
    }
}

- (void)debugEnable:(BOOL)enable
{
    [super debugEnable:enable];
    if (enable)
    {
#ifdef DEBUG
        _titleLabel.text = @"魔窗魔窗魔窗魔窗";
#else
        _titleLabel.text = [super originAppName];
#endif
    }
}

@end
