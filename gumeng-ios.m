//
//  gumeng-ios.m
//  RunnerGame
//
//  Created by Freeman on 15/9/12.
//  Copyright (c) 2015年 Gideros Mobile. All rights reserved.
//

#import "MobClick.h"
#import "MobClickGameAnalytics.h"

#include "gumeng.h"

void gumeng_StartWithKey(const char * apiKey, const char * channel){
    [MobClick startWithAppkey:[NSString stringWithUTF8String:apiKey] reportPolicy:BATCH channelId:[NSString stringWithUTF8String:channel]];
}

void gumeng_StartLevel(const char * level){
    [MobClickGameAnalytics startLevel:[NSString stringWithUTF8String:level]];
}

void gumeng_FinishLevel(const char * level){
    [MobClickGameAnalytics finishLevel:[NSString stringWithUTF8String:level]];
}

void gumeng_FailLevel(const char * level){
    [MobClickGameAnalytics failLevel:[NSString stringWithUTF8String:level]];
}

void gumeng_PostEvent(const char * event){
    [MobClick event:[NSString stringWithUTF8String:event]];
}

void gumeng_BeginPage(const char * page){
    [MobClick beginLogPageView:[NSString stringWithUTF8String:page]];
}

void gumeng_EndPage(const char * page){
    [MobClick endLogPageView:[NSString stringWithUTF8String:page]];
}
