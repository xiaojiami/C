#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �õݹ鷨���n��쳲�������
// 쳲���������ǰ�������ĺ͵��ڵ�������
// 1 1 2 3 5 8 13 21 34

//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return Fib(n-1) + Fib(n-2); // ��n̫��ʱ��������̫�󣬲���ʵ��
//	}
//}

//�����Ż�����whileѭ����ʽ

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int i = 0;
	int ret = 0;
	printf("������һ�����֣�");
	scanf("%d", &i);
	ret = Fib(i);
	printf("ret = %d\n", ret);
	return 0;
}