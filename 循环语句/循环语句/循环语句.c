#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//if循环语句
//int main()
//{
//	int input;
//	printf("你要好好学习吗？（1/0）>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("给你一个好的offer\n");
//	}
//	else
//	{
//		printf("回家卖红薯\n");
//	}
//	return 0;
//}


//while 循环语句
//int main()
//{
//	int line = 0;
//	printf("好好学习C语言\n");
//	while (line < 20)
//	{
//		printf("敲一行代码%d\n",line);
//		line++;
//	}
//	if (line >= 20)
//	{
//		printf("你进步了！\n");
//	}
//	return 0;
//}

//
//函数计算两数相加
//int ADD(int x, int y)//自定义函数
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int sum;
//	sum = ADD(3, 4);
//	printf("sum = %d\n", sum);
//	return 0;
//	
//}


//数组:一类相同类型元素的集合，数组的下标是从0开始的
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };//定义一个存放10个整形数字的数组
//	int i = 0;
//	char b[2];//定义一个存放2个字符型数字的数组
//	float c[3];//定义一个存放3个字符型数字的数组
//	printf("%d\n", a[2]);//下标的方式访问元素
//	//a[下标]
//	while (i < 10)
//	{
//		printf("%d\n", a[i]);
//		i++;
//	}
//	return 0;
//}


//移（2进制）位操作符
//int main()
//{
//	int a = 2;//2的(2进制）为10
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}


//按(2进制）位与
int main()
{
	int a = 3;//011
	int b = 5;//101
	int c = a&b;//001 
	printf("c = %d\n", c);//c=1
	return 0;
}
