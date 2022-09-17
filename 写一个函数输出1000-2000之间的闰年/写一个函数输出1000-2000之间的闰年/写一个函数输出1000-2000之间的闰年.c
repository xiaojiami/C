#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个函数输出1000-2000之间的闰年

// 是闰年返回1
int is_leap_year(int n)
{
	//判断闰年的方法：
	//能被4整除并且不能被100整除	或者  能被400整除
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		// 判断is_leap_year(year)是否等于1，是就执行printf("%d ", year)操作
		if (is_leap_year(year) == 1)
		{
			printf("%d ", year); // 是闰年就打印year
		}
		
	}
	return 0;
}