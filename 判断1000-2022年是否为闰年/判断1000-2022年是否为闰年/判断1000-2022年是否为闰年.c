#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ӡ1000-2022��֮�������
//1���ܱ�4�������Ҳ��ܱ�100����������
//2���ܱ�400������������
int main()
{
	int year = 0;
	int count = 0;
	//��ʽ1��
	for (year = 1000; year <= 2022; year++)
	{
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("% d", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("% d", year);
			count++;
		}*/

		//��ʽ2��
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("% d", year);
			count++;
		}	
	}
	printf("\ncount = %d\n", count);
	return 0;
}