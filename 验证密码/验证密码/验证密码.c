#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0) //�Ƚ������ַ�����Ҫ�õ�strcmp�⺯��
		{
			printf("������ȷ\n");
			break;
		}	
		else
		{
			printf("�������������\n");
		}
	}
	if (3 == i)
	{
		printf("3��������󣬳����˳�\n");
	}
	return 0;
}