#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h";	 // add.h����������
int main()
{
	int a = 5;
	int b = 6;
	int sum = Add(a, b); // �����ĵ���
	printf("sum = %d\n", sum);
	
	return 0;
}