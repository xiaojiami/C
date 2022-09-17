#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1、for循环：
//int main()
//{
//	int i = 0;//定义i
//	/*for (初始化；判断；调整)
//	{
//		语句块；
//	}*/
//	//for循环最好采用前闭后开的写法
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;//当i=5时，跳出本次循环，不再执行下面的代码，跳到i++,使得i=6，继续从判断入口开始执行
//		}
//		printf("%d\n", i);
//	}
//
//	return 0;
//}


//for(; ; ;)循环可以省略初始化，判断和调整
//但是省略判断后，判断的条件就恒为真

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//打印10次
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("i=%d,j=%d\n", i, j);
//			printf("hello C\n");//打印10次
//		}
//	}//sum = 10*10=100次
//	return 0;
//}


//2、省略初始化的例子：
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("i=%d,j=%-2d", i, j);
//			printf("hello\n");//打印10次后j=10,i++后i=1，再次进入j循环，此时j为10，不满足条件不打印，
//							  //依次类推，直到i=10,跳出整个循环进入return 0，一共打印10次
//		}
//	}
//	return 0;
//}


//3、for循环的变形
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 3 && y < 6; x++, y++)
//	{
//		printf("hello\n");//打印3次
//	}
//	return 0;
//}


//5、看看循环多少次？
int main()
{
	int m = 0;
	int n = 0;
	for (m = 0,	 n = 0;		n = 0; m++, n++)
	{		   //n=0条件为假，不循环
		printf("hello\n");
	}
	return 0;
}