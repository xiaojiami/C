//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////写一个函数打印100-200之间的素数
//
////是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++) // 试除法：用2->n-1给n试除
//	{
//		if (n%j == 0) // 如果n%j == 0，则n是素数
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


// 代码优化：
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // 调用sqrt（）函数
//写一个函数打印100-200之间的素数

//是素数返回1，不是素数返回0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <=sqrt(n); j++) // 试除法：用2->n-1给n试除
	{
		if (n%j == 0) // 如果n%j == 0，则n是素数
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}