#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个函数求两数中的较大值
//int Max(int x, int y)
//{
//	if (x < y)//如果x<y,则返回y的值
//	{
//		return y;
//	}
//	else//否则返回x的值
//	{
//		return x;
//	}
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 8;
//	int b = a++;//后置++：先使用，在++
//	printf("a = %d,b = %d\n", a, b);// 8	9
//	int b = ++a; //前置++: 先++，后使用
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(类型）：强制类型转换
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 8;
	int max;
	max = (a > b ? a : b);//如果a > b 执行a,否则执行b;
	printf("max = %d\n", max);
	return 0;
}

