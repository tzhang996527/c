/* qsorter.c -- 用 qsort()排序一组数字 */
#include <stdio.h>
#include <stdlib.h>
#define NUM 40
struct names {
	char first[40];
	char last[40];
};
struct names staff[100];
void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int mycomp(const void * p1, const void * p2);
int main3(void)
{
	double vals[NUM];
	fillarray(vals, NUM);
	puts("Random list:");
	showarray(vals, NUM);
	qsort(vals, NUM, sizeof(double), mycomp);
	puts("\nSorted list:");
	showarray(vals, NUM);
	getchar();
	return 0;
}
void fillarray(double ar[], int n)
{
	int index;
	for (index = 0; index < n; index++)
		ar[index] = (double)rand() / ((double)rand() + 0.1);
}
void showarray(const double ar[], int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%9.4f ", ar[index]);
		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
/* 按从小到大的顺序排序 */
int mycomp(const void * p1, const void * p2)
{
	/* 要使用指向double的指针来访问这两个值 */
	const double * a1 = (const double *)p1;
	const double * a2 = (const double *)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}
int comp(const void * p1, const void * p2) /* 该函数的形式必须是这样 */
{
	/* 得到正确类型的指针 */
	const struct names *ps1 = (const struct names *) p1;
	const struct names *ps2 = (const struct names *) p2;
	int res;
	res = strcmp(ps1->last, ps2->last); /* 比较姓 */
	if (res != 0)
		return res;
	else /* 如果同姓，则比较名 */
		return strcmp(ps1->first, ps2->first);
}