#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ���������1000-2000֮�������

// �����귵��1
int is_leap_year(int n)
{
	//�ж�����ķ�����
	//�ܱ�4�������Ҳ��ܱ�100����	����  �ܱ�400����
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		// �ж�is_leap_year(year)�Ƿ����1���Ǿ�ִ��printf("%d ", year)����
		if (is_leap_year(year) == 1)
		{
			printf("%d ", year); // ������ʹ�ӡyear
		}
		
	}
	return 0;
}