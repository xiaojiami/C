#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c = 0;
	int temp = 0;
	printf("������a,b,c��ֵ��");
	scanf("%d%d%d", &a, &b, &c); //�Ӽ���������a,b,c��ֵ
	if (a < b) //�����ֵ��ֵ��a
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c) //�����ֵ��ֵ��a
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c) //�Ѵδ�ֵ��ֵ��b
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n", a, b, c); //�Ӵ�С����
	return 0;
}