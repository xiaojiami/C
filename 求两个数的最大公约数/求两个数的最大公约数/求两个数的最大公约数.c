#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求两个数的最大公约数(辗转相除法）

int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	printf("请输入a,b的值："); //24  16
	scanf("%d%d", &a, &b);
	while (a % b) // a % b = 0，条件为假时，跳出while循环  
	{
		r = a % b;	// 
		a = b;
		b = r;
	}
	printf("两个数的最大公约数是：%d\n", b);
	return 0;
}