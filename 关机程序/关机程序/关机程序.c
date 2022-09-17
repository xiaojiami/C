#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // 引用strcmp函数
#include <stdlib.h> //引用system（）函数；system（）函数执行系统命令

//关机程序

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");	// -s表示设置关机；-t表示设置时间关机；60表示1分钟
	again:
	printf("请输入cancel，否则电脑将在1分钟之内关机\n");
	scanf("%s", &input);
	if (strcmp(input, "cancel")== 0) // strcmp用于比较两个字符串
	{
		system("shutdown -a");	// -a表示取消关机
	}
	else
	{
		goto again;
	}
	return 0;
}