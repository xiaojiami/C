#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输出1~100之间的奇数
//方式1：
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("i为奇数=%d\n", i);
//		}
//	}
//	return 0;
//}


//方式2：
//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);	
//		}
//		i++;
//	}
//	return 0;
//}


//方式3：
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d\n", i);
		i += 2;
	}
	return 0;
}