//
//  gumeng.h
//  RunnerGame
//
//  Created by Freeman on 15/9/12.
//  Copyright (c) 2015年 Gideros Mobile. All rights reserved.
//

#ifndef RunnerGame_gumeng_h
#define RunnerGame_gumeng_h

#include <gglobal.h>

#ifdef __cplusplus
extern "C" {
#endif

    void gumeng_StartWithKey(const char * apiKey, const char * channel);
    void gumeng_StartLevel(const char * level);
    void gumeng_FinishLevel(const char * level);
    void gumeng_FailLevel(const char * level);
    void gumeng_PostEvent(const char * event);
    void gumeng_BeginPage(const char * page);
    void gumeng_EndPage(const char * page);

#ifdef __cplusplus
}
#endif

#endif
