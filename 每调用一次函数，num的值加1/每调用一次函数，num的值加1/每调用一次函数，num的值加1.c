#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 每调用一次函数，num的值加1


void Add(int* p)
{
	(*p)++;	 // 因为++的优先级高于*p,所以*p需要加()
}
int main()
{
	int num = 0;
	Add(&num);  //利用传址的方式改变num的值
	printf("num = %d\n", num);

	Add(&num);
	printf("num = %d\n", num);

	Add(&num);
	printf("num = %d\n", num);
	return 0;
}