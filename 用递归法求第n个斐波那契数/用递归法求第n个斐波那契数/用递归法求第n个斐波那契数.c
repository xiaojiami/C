#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 用递归法求第n个斐波那契数
// 斐波那契数：前两个数的和等于第三个数
// 1 1 2 3 5 8 13 21 34

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n-1) + Fib(n-2); // 当n太大时，计算量太大，不合实际
//	}
//}

//函数优化：用while循环方式

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int i = 0;
	int ret = 0;
	printf("请输入一个数字：");
	scanf("%d", &i);
	ret = Fib(i);
	printf("ret = %d\n", ret);
	return 0;
}