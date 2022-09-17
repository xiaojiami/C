#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "add.h";	 // add.h函数的引用
int main()
{
	int a = 5;
	int b = 6;
	int sum = Add(a, b); // 函数的调用
	printf("sum = %d\n", sum);
	
	return 0;
}