#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个函数交换两数的值

//当实参传给形参的时候
//形参只是实参的一份临时拷贝
//对形参的修改不会改变实参
int Swan(int *p1, int* p2) // 函数
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d，b=%d\n", a, b);
	Swan(&a, &b);	//调用Swan函数；传址调用：内部函数可以改变外部函数的变量
					//此次需要传地址，否则不能交换
	printf("a=%d，b=%d\n", a, b);
	return 0;
}