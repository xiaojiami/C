#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//试除法
//	for (i = 1; i <= 100; i+=2)
//	{
//		for (j = 2; j <= i; j++)	// 产生2到i-1的数字
//		{
//			if (i%j == 0)	// i%j == 0证明i不是素数
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);	//i为素数
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//优化；因为a*b<=i的平方，所以a< √i
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	//试除法
	for (i = 2; i <= 100; i +=2) //1既不是素数也不是合数，所以定义i=2开始
	{
		for (j = 2; j <= sqrt(i); j++)	// 产生2到i-1的数字; sqrt--开平方的数学库函数
		{
			if (i%j == 0)	// i%j == 0证明i不是素数
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);	//i为素数
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}