#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // 调用srand（）函数
#include <time.h> //调用时间函数time_t time(time_t *timer)
#include <windows.h> //调用延时函数

//猜数字游戏
void menu() //游戏菜单
{
	printf("*****  欢迎来到猜数字游戏  *****\n");
	//printf("*****  1.start     0.exit  *****\n");	// 英文提示
	printf("**** 1.开始游戏  0.退出游戏 ****\n");	// 中文提示
}
void game()
{
	int ret = 0;
	int guess = 0;
	int count = 0;

	//用时间戳来设置生成随机数的起始点
	//time_t time(time_t *timer)
	//time_t 返回 long int类型

	ret = rand()%100+1;	// rand()生成随机数的范围是：0-32767；
						// rand()%100+1生成1-100的随机数，rand()%100生成1-99的随机数，
						//余数要比除数小
	//printf("%d\n", ret);
	
	while (1)
	{
		printf("\n请输入一个数字：\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
			count++;
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
			count++;
		}
		else
		{
			printf("\n恭喜你！猜对了");
			count++;
			break;
		}
	}
	printf("\n你一共猜了%d次\n", count); // 计算总共猜了多少次
	printf("游戏将在5秒后重置\n");
	Sleep(5000); // 延时5s，1s=1000ms
	system("cls"); //清屏
	printf("你可以选择：1、继续游戏 or 0:退出游戏\n");
}
int main()
{
	srand((unsigned int)time(NULL));	// 用时间戳来设置生成随机数rand()函数的起始点
	int input = 0;
	do
	{
		menu();
		printf("请选择：(1/0)>");
		scanf("%d", &input);
		if (1 == input)
		{
			printf("\n开始游戏\n");
			game();
		}
		else if (0==input)
		{
			printf("游戏退出\n");
			break;
		}
		else
		{
			printf("请重新选择\n");
		}
	} while (input);
	return 0;
}