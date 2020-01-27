//
// Created by jihuayu on 2020/1/27.
//

#ifndef CLI_MOFISH_H
#define CLI_MOFISH_H

#ifdef _MSC_VER
#define API __declspec(dllexport) extern
#else
#define API extern
#endif

API double add(int f1, int f2);
API double mul(int f1, int f2);

#endif //CLI_MOFISH_H
