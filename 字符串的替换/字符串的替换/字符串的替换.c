#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h> //������Sleep����
#include <stdlib.h>	//������system()����
int main()
{
	char a[] = "�㶫ʡ�����н����ػ�կ���Ϲ��ִ�����";
	char b[] = "**************************************";
	int c = strlen(a)-1;
	int left = 0; //���±� 
	int right = c; //���±�
	while (left<=right)
	{
		b[left] = a[left];
		left++;
		b[right] = a[right];
		right--;
		Sleep(1000);//��Ϣ1s
		system("cls");//ִ��ϵͳ�����һ������; cls -- �����Ļ
		printf("%s\n", b);
	}
	return 0;
}