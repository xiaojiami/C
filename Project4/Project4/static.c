#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//无static
//void test()
//{
//	int a = 2;//a是局部变量，在{}内用完之后出{}就释放内存了
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//有static
//void test()
//{
//	static int a = 2;//a是静态局部变量，在{}内用完之后出{}不释放内存
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	extern int g_val;//extern 是用来声明外部变量的
//	printf("%d\n", g_val);
//	return 0;
//}
//
//int main()
//{
//	extern int Add(int, int);
//	int a = 10;
//	int b = 2;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	
//	return 0;
//}

#define Max(x,y)(x>y?x:y)
int main()
{
	int a = 9;
	int b = 23;
	int max = Max(a, b);
	printf("max =%d\n", max);

	return 0;
}