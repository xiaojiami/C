#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c = 0;
	int temp = 0;
	printf("请输入a,b,c的值：");
	scanf("%d%d%d", &a, &b, &c); //从键盘上输入a,b,c的值
	if (a < b) //把最大值赋值给a
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c) //把最大值赋值给a
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c) //把次大值赋值给b
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c); //从大到小排列
	return 0;
}