#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0) //比较两个字符串需要用到strcmp库函数
		{
			printf("密码正确\n");
			break;
		}	
		else
		{
			printf("密码错误，请重试\n");
		}
	}
	if (3 == i)
	{
		printf("3次密码错误，程序退出\n");
	}
	return 0;
}