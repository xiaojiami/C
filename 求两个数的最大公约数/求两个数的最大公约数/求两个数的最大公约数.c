#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�������������Լ��(շת�������

int main()
{
	int a = 0;
	int b = 0;
	int r = 0;
	printf("������a,b��ֵ��"); //24  16
	scanf("%d%d", &a, &b);
	while (a % b) // a % b = 0������Ϊ��ʱ������whileѭ��  
	{
		r = a % b;	// 
		a = b;
		b = r;
	}
	printf("�����������Լ���ǣ�%d\n", b);
	return 0;
}