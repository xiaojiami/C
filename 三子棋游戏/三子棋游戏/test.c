#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
#include <Windows.h>  //����Sleep()��ʱ����
//��������Ϸ


//��Ϸ�������㷨ʵ��
void game()
{
	char ret = 0;
	// ����->����������Ϣ
	char board[ROW][COL] = { 0 }; // ȫ���ո�

	// ��ʼ������
	InitBoard(board,ROW,COL);

	// ��ӡ����
	DisplayBoard(board,ROW,COL);

	// ����
	while (1)
	{
		// �������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �ж�����Ƿ�Ӯ
		ret = IsWin(board,ROW,COL);
		if (ret != 'C') // ��Ϸ����
		{
			break;
		}

		// ��������
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') // ��Ϸ����
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("��Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}


}
void menu()
{
	printf("********  ��������Ϸ  ********\n");
	printf("****   1.start    2.exit  ****\n");
	printf("******************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));  // ʱ������������������ʼ��
	do
	{
		menu();
		printf("��ѡ��1/2):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			printf("��Ϸ����5s������");
			Sleep(5000);
			system("cls");  // ����
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�������������ѡ��>\n");
			break;
		}
		
	} while (input);
}
int main()
{
	test();
	return 0;
}