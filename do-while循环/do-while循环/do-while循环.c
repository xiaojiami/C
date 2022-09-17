#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//do--while循环语句


//do //无论如何，都先执行一次循环
//	循环语句；
//while（表达式）；


//利用do while 循环语句打印1-10
int main()
{
	int i = 1;
	do
	{
		if (5 == i)
		{
			continue;//打印1234后死循环了
		}
		printf("%d\n", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}
