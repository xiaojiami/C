#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // ����strcmp����
#include <stdlib.h> //����system����������system��������ִ��ϵͳ����

//�ػ�����

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");	// -s��ʾ���ùػ���-t��ʾ����ʱ��ػ���60��ʾ1����
	again:
	printf("������cancel��������Խ���1����֮�ڹػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "cancel")== 0) // strcmp���ڱȽ������ַ���
	{
		system("shutdown -a");	// -a��ʾȡ���ػ�
	}
	else
	{
		goto again;
	}
	return 0;
}