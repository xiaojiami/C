#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // ����srand��������
#include <time.h> //����ʱ�亯��time_t time(time_t *timer)
#include <windows.h> //������ʱ����

//��������Ϸ
void menu() //��Ϸ�˵�
{
	printf("*****  ��ӭ������������Ϸ  *****\n");
	//printf("*****  1.start     0.exit  *****\n");	// Ӣ����ʾ
	printf("**** 1.��ʼ��Ϸ  0.�˳���Ϸ ****\n");	// ������ʾ
}
void game()
{
	int ret = 0;
	int guess = 0;
	int count = 0;

	//��ʱ����������������������ʼ��
	//time_t time(time_t *timer)
	//time_t ���� long int����

	ret = rand()%100+1;	// rand()����������ķ�Χ�ǣ�0-32767��
						// rand()%100+1����1-100���������rand()%100����1-99���������
						//����Ҫ�ȳ���С
	//printf("%d\n", ret);
	
	while (1)
	{
		printf("\n������һ�����֣�\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
			count++;
		}
		else if (guess < ret)
		{
			printf("��С��\n");
			count++;
		}
		else
		{
			printf("\n��ϲ�㣡�¶���");
			count++;
			break;
		}
	}
	printf("\n��һ������%d��\n", count); // �����ܹ����˶��ٴ�
	printf("��Ϸ����5�������\n");
	Sleep(5000); // ��ʱ5s��1s=1000ms
	system("cls"); //����
	printf("�����ѡ��1��������Ϸ or 0:�˳���Ϸ\n");
}
int main()
{
	srand((unsigned int)time(NULL));	// ��ʱ������������������rand()��������ʼ��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��(1/0)>");
		scanf("%d", &input);
		if (1 == input)
		{
			printf("\n��ʼ��Ϸ\n");
			game();
		}
		else if (0==input)
		{
			printf("��Ϸ�˳�\n");
			break;
		}
		else
		{
			printf("������ѡ��\n");
		}
	} while (input);
	return 0;
}