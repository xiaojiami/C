#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��static
//void test()
//{
//	int a = 2;//a�Ǿֲ���������{}������֮���{}���ͷ��ڴ���
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

//��static
//void test()
//{
//	static int a = 2;//a�Ǿ�̬�ֲ���������{}������֮���{}���ͷ��ڴ�
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
//	extern int g_val;//extern �����������ⲿ������
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