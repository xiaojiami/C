#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF--end of file文件结束标志 -> -1
//	//getchar（）读取字符getchar是读入函数的一种。
//	//它从标准输入里读取下一个字符，相当于getc(stdin)。
//	//返回类型为int型，为用户输入的ASCII码或EOF。
//	while ((ch = getchar()) != EOF)//EOF输入Ctrl+ Z结束循环
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	int ret = 0;
//	printf("请输入您的密码：");
//	scanf("%d", &password);
//	printf("请确认密码->Y/N\n");
//	while ((ch = getchar()) != '\n')//不断接收字符，直到接收到'\n'!= '\n'，跳出循环
//	{
//		;//空语句不做任何事情
//	}
//	ret = getchar();//从键盘获取字符
//	if (ret == 'Y')
//		{
//			printf("密码正确\n");
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	return 0;
//}

//
int main()
{
	int ch;
	while ((ch = getchar())!= EOF)
	{
		if (ch < '0' || ch>'9')//只能输出数字，不能输出字母
		{
			continue;
		}		
		putchar(ch);
	}
	return 0;
}

