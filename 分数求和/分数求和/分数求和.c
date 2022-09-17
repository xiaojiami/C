#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 计算1/1-1/2+1/3-1/4+...1/100的和
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)	
	{
		sum += flag*1.0/i;	// 分子恒为1，分母正负交替
		flag = -flag;
	}
	printf("sum = %lf\n", sum);
	return 0;
}