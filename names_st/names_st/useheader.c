// useheader.c -- 使用 names_st 结构
#include <stdio.h>
#include "names_st.h"
// 记住要链接 names_st.c

#define LIMIT 400
#undef LIMIT	//取消DEFINE

#ifndef THINGS_H_
#define THINGS_H_	//#ifndef指令通常用于防止多次包含一个文件
#endif // !THINGS_H_


int main1(void)
{
	names candidate;
	get_names(&candidate);
	printf("Let's welcome ");
	show_names(&candidate);
	printf(" to this program!\n");

	getchar();
	return 0;
}