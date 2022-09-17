#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
#include <Windows.h>  //调用Sleep()延时函数
//三子棋游戏


//游戏的整个算法实现
void game()
{
	char ret = 0;
	// 数组->存放下棋的信息
	char board[ROW][COL] = { 0 }; // 全部空格

	// 初始化棋盘
	InitBoard(board,ROW,COL);

	// 打印棋盘
	DisplayBoard(board,ROW,COL);

	// 下棋
	while (1)
	{
		// 玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C') // 游戏结束
		{
			break;
		}

		// 电脑下棋
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') // 游戏结束
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("你赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局\n");
	}


}
void menu()
{
	printf("********  三子棋游戏  ********\n");
	printf("****   1.start    0.exit  ****\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  // 时间戳，生成随机数的起始点
	do
	{
		menu();
		printf("请选择（1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			printf("游戏将在5s后重置");
			Sleep(5000);
			system("cls");  // 清屏
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请重新选择：>\n");
			break;
		}
		
	} while (input);
}
int main()
{
	test();
	return 0;
}
