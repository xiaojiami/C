#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ÿ����һ�κ�����num��ֵ��1


void Add(int* p)
{
	(*p)++;	 // ��Ϊ++�����ȼ�����*p,����*p��Ҫ��()
}
int main()
{
	int num = 0;
	Add(&num);  //���ô�ַ�ķ�ʽ�ı�num��ֵ
	printf("num = %d\n", num);

	Add(&num);
	printf("num = %d\n", num);

	Add(&num);
	printf("num = %d\n", num);
	return 0;
}