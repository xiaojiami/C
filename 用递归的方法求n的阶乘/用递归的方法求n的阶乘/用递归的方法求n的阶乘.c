#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �õݹ�ķ�����n�Ľ׳�

int Fac(int n)
{
	if ( n <= 1)
	{
		return 1;
	}
	else
	{
		return n*Fac(n - 1);
	}
}
int main()
{
	int i = 0;
	int ret = 0;
	printf("������һ������:");
	scanf("%d", &i);
	ret = Fac(i);
	printf("ret = %d\n", ret);
	return 0;
}