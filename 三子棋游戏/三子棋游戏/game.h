#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include <stdlib.h>	// ����srand()����
#include <time.h>	// ����time()����

// ��ʼ������������
void InitBoard(char board[ROW][COL], int row,int col);

// ��ӡ��������
void DisplayBoard(char board[ROW][COL], int row,int col);

// ������庯��������
void PlayerMove(char board[ROW][COL], int row,int col);

// �������庯��������
void Computer(char board[ROW][COL], int row,int col);


// �ж���ӮIsWin();
// ������Ϸ״̬
// ���Ӯ-- '*'
// ����Ӯ-- '#'
// ƽ�� --  'Q'
// ���� --  'C'
char IsWin(char board[ROW][COL],int row,int col);
