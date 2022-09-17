#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include <stdlib.h>	// 引用srand()函数
#include <time.h>	// 引用time()函数

// 初始化函数的声明
void InitBoard(char board[ROW][COL], int row,int col);

// 打印棋盘声明
void DisplayBoard(char board[ROW][COL], int row,int col);

// 玩家下棋函数的声明
void PlayerMove(char board[ROW][COL], int row,int col);

// 电脑下棋函数的声明
void Computer(char board[ROW][COL], int row,int col);


// 判断输赢IsWin();
// 四种游戏状态
// 玩家赢-- '*'
// 电脑赢-- '#'
// 平局 --  'Q'
// 继续 --  'C'
char IsWin(char board[ROW][COL],int row,int col);
