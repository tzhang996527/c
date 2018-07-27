﻿// predef.c -- 预定义宏和预定义标识符
#include <stdio.h>

void why_me();
int main2()
{
	printf("The file is %s.\n", __FILE__);
	printf("The date is %s.\n", __DATE__);
	printf("The time is %s.\n", __TIME__);
	//printf("The version is %ld.\n", __STDC_VERSION__);
	printf("This is line %d.\n", __LINE__);
	printf("This function is %s\n", __func__);
	why_me();

	getchar();
	return 0;
}
void why_me()
{
	printf("This function is %s\n", __func__);
	printf("This is line %d.\n", __LINE__);
}

/*
#if _ _STDC_VERSION_ _ != 201112L
#error Not C11
#endif
*/