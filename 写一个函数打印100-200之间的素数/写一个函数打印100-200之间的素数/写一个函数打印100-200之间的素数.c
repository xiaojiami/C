//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////дһ��������ӡ100-200֮�������
//
////����������1��������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++) // �Գ�������2->n-1��n�Գ�
//	{
//		if (n%j == 0) // ���n%j == 0����n������
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


// �����Ż���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // ����sqrt��������
//дһ��������ӡ100-200֮�������

//����������1��������������0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <=sqrt(n); j++) // �Գ�������2->n-1��n�Գ�
	{
		if (n%j == 0) // ���n%j == 0����n������
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}