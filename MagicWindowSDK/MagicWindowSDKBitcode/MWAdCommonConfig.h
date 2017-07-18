//
//  MWAdCommonConfig.h
//  MagicWindowSampleApp
//
//  Created by cafei on 2017/5/5.
//  Copyright © 2017年 MagicWindow. All rights reserved.
//

#ifndef MWAdCommonConfig_h
#define MWAdCommonConfig_h

/**
 *  广告展示失败类型枚举
 */
typedef enum {
    MWADFailReason_NOAD = 0,    // 没有推广返回
    MWADFailReason_EXCEPTION,   //网络或其它异常
    MWADFailReason_FRAME    //广告尺寸异常，不显示广告
} MWADFailReason;

/**
 *  广告类型
 */
typedef enum {
    MWADType_OTHER,
    MWADType_BANNER,        //banner
    MWADType_SPLASH,        //开屏
    MWADType_NATIVE           //信息流
}MWAdType;

/**
 *  信息流广告展示样式
 */
typedef enum {
    MWAD_NORMAL_OTHER,
    MWAD_NORMAL_LIMG_RTEXT,     //左边小图，右边文字
    MWAD_NORMAL_LTEXT_RIMG, //左边文字，右边小图
    MWAD_NORMAL_TTEXT_BIMG, //上面文字，下面大图
    MWAD_NORMAL_TTEXT_BMOREIMG //上面文字，下面多图
} MWADMaterialType;


#endif /* MWAdCommonConfig_h */
