#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//计算1！+ 2！+3！+4！	方式1：
//修改对应n的值就可以实现求1！+ 2！+3！+n！阶乘的和，前提不溢出
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;//求和阶乘数较多可用 long int sum = 0;代替int sum = 0；
//	for (n = 1; n <= 4; n++)
//	{
//		//ret = 1;
//		for (; i <= n; i++)
//		{
//			ret = ret*i;
//		}//计算n的阶乘
//	
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}




//计算1！+ 2！+3！的和	方式2：
//修改对应n的值就可以实现求1！+ 2！+3！+n！阶乘的和，前提不溢出
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;//求和阶乘数较多可用 long int sum = 0;代替int sum = 0；
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i=1; i <= n; i++)
//		{
//			ret = ret*i;
//		}//计算n的阶乘
//
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//计算1！+ 2！+3！的和	方式3：
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;//求和阶乘数较多可用 long int sum = 0;代替int sum = 0；
	for (n = 1; n <= 3; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


