﻿//使用#ifndef避免文件被重复包含
#ifndef NAMES_H_
#define NAMES_H_

#include <string.h>
#define SLEN 32
// 结构声明
typedef struct names_st
{
	char first[SLEN];
	char last[SLEN];
}names;
// 类型定义
//typedef struct names_st names;
// 函数原型
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

#endif // !NAMES_H_

/*
#if defined (IBMPC)
#include "ibmpc.h"
#elif defined (VAX)
#include "vax.h"
#elif defined (MAC)
#include "mac.h"
#else
#include "general.h"
#endif
*/