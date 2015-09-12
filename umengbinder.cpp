//
//  umengbinder.cpp
//  RunnerGame
//
//  Created by Freeman on 15/9/12.
//  Copyright (c) 2015年 Gideros Mobile. All rights reserved.
//

#include "gumeng.h"
#include "gideros.h"
#include <vector>
#include <string>

static int startWithKey(lua_State *L)
{
    gumeng_StartWithKey(luaL_checkstring(L, 1),luaL_checkstring(L, 2));
    
    return 0;
}

static int startLevel(lua_State *L)
{
    gumeng_StartLevel(luaL_checkstring(L, 1));
    
    return 0;
}

static int finishLevel(lua_State *L)
{
    gumeng_FinishLevel(luaL_checkstring(L, 1));
    
    return 0;
}

static int failLevel(lua_State *L)
{
    gumeng_FailLevel(luaL_checkstring(L, 1));
    
    return 0;
}

static int postEvent(lua_State *L)
{
    gumeng_PostEvent(luaL_checkstring(L, 1));
    
    return 0;
}

static int beginPage(lua_State *L)
{
    gumeng_BeginPage(luaL_checkstring(L, 1));
    
    return 0;
}

static int endPage(lua_State *L)
{
    const char *page = luaL_checkstring(L, 1);
    
    gumeng_EndPage(page);
    
    return 0;
}

static int loader(lua_State* L)
{
    lua_newtable(L);
    
    lua_pushcfunction(L, startWithKey);
    lua_setfield(L, -2, "startWithKey");
    lua_pushcfunction(L, startLevel);
    lua_setfield(L, -2, "startLevel");
    lua_pushcfunction(L, finishLevel);
    lua_setfield(L, -2, "finishLevel");
    lua_pushcfunction(L, failLevel);
    lua_setfield(L, -2, "failLevel");
    lua_pushcfunction(L, postEvent);
    lua_setfield(L, -2, "postEvent");
    lua_pushcfunction(L, beginPage);
    lua_setfield(L, -2, "beginPage");
    lua_pushcfunction(L, endPage);
    lua_setfield(L, -2, "endPage");
    
    lua_pushvalue(L, -1);
    lua_setglobal(L, "umeng");
    
    return 1;
}

static void g_initializePlugin(lua_State *L)
{
    lua_getglobal(L, "package");
    lua_getfield(L, -1, "preload");
    
    lua_pushcfunction(L, loader);
    lua_setfield(L, -2, "umeng");
    
    lua_pop(L, 2);
}

static void g_deinitializePlugin(lua_State *L)
{
}

REGISTER_PLUGIN("Umeng", "1.0")
