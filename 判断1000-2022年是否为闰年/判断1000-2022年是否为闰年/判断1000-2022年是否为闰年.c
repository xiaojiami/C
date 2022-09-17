#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//打印1000-2022年之间的闰年
//1、能被4整除并且不能被100整除是闰年
//2、能被400整除的是闰年
int main()
{
	int year = 0;
	int count = 0;
	//方式1：
	for (year = 1000; year <= 2022; year++)
	{
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("% d", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("% d", year);
			count++;
		}*/

		//方式2：
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("% d", year);
			count++;
		}	
	}
	printf("\ncount = %d\n", count);
	return 0;
}