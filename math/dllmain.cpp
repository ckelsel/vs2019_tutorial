//
//  Created by XieKunming on 2020/04/17
//  Copyright (C) 2020 谢昆明——编程一学就会 All rights reserved.
//
// 谢昆明——编程一学就会
// QQ群：1054773066
// 邮箱：124116614@qq.com
// QQ:  124116614
// 微信: xie5427716
#include "pch.h"


int myadd(int a, int b)
{
    return a + b;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

