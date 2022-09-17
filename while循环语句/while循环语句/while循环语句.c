#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//while循环语句打印数字1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//while循环语句中的break用于永久终止循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//		if (i == 5)
//		{
//			break;//永久终止循环
//		}
//	}
//	return 0;
//}


//while循环语句中的continue用于终止本次循环，它后边的代码不再执行，
//直接跳转到while语句的判断部分，进行下一次循环的入口判断
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			continue;	 //当i=5时，continue终止本次循环，不再执行下面的语句，
                        //跳到while循环判断，进行下一次循环的入口判断。
		}
		printf("%d\n", i);
	}
	return 0;
}
