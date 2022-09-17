#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h> //引用了Sleep函数
#include <stdlib.h>	//引用了system()函数
int main()
{
	char a[] = "广东省揭阳市揭西县灰寨镇老宫林村后岭段";
	char b[] = "**************************************";
	int c = strlen(a)-1;
	int left = 0; //左下标 
	int right = c; //右下标
	while (left<=right)
	{
		b[left] = a[left];
		left++;
		b[right] = a[right];
		right--;
		Sleep(1000);//休息1s
		system("cls");//执行系统命令的一个函数; cls -- 清空屏幕
		printf("%s\n", b);
	}
	return 0;
}