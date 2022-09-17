#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"





// 初始化函数的实现
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


// 打印棋盘的实现
void DisplayBoard(char board[ROW][COL], int row, int col)
{
/*     |   |   
	---|---|---   */

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			// 1、打印一行的数据
			printf(" %c ", board[i][j]);
			if (j < col - 1) // 最后一列没有|
			{
				printf("|");
			}
		}
		printf("\n");
		// 打印分割行
		if (i < row - 1)  // 最后一行没有分割行
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)	// 最后一列没有|
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}


// 玩家下棋函数的实现
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);

		// 判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] = " ")
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入：>\n");
		}
	}
}


// 电脑下棋函数的实现
void Computer(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走>\n");
	while (1)
	{
		x = rand() % row; // 生成随机数 0 1 2
		y = rand() % col; // 生成随机数 0 1 2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

// 返回1表示棋盘满了
// 返回0表示棋盘没满
IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0; // 棋盘没满
			}
		}
	}
	return 1;  // 棋盘满了
}

// 判断输赢函数的实现
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	// 横三行
	for (i = 0; i < row; i++)
	{
		if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][1] != ' ')
		{
			return board[0][1];
		}
	}
	
	// 竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	// 两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	if (1 == IsFull(board, row, col))
	{
		return 'Q';  // 平局
	}
	return 'C';	 // 继续
		

}