/* assert.c -- 使用 assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>
int main4()
{
	double x, y, z;
	puts("Enter a pair of numbers (0 0 to quit): ");
	while (scanf_s("%lf%lf", &x, &y) == 2
		&& (x != 0 || y != 0))
	{
		z = x * x - y * y; /* 应该用 + */
		assert(z >= 0);
		printf("answer is %f\n", sqrt(z));
		puts("Next pair of numbers: ");
	}
	puts("Done");
	getchar();
	return 0;
}