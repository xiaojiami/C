#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����1/1-1/2+1/3-1/4+...1/100�ĺ�
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)	
	{
		sum += flag*1.0/i;	// ���Ӻ�Ϊ1����ĸ��������
		flag = -flag;
	}
	printf("sum = %lf\n", sum);
	return 0;
}