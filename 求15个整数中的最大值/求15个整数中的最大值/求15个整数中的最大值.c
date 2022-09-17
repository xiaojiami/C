#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求15个整数中的最大值

int main()
{
	int i = 0;
	int a[] = { 1, 2, 3, 4, 5, 7, 188, 96, 10, -1, -3, -5, -8, 56 };
	int max = a[0];
	int sz = sizeof(a) / sizeof(a[0]);//求数组的个数
	for (i = 1; i <= sz; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}