#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ð������

//void Bubble_sort(int a[], int sz)
//{
//	// ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// ÿһ��ð������,ȷ��һ��������ٶ�
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			if (a[j]>a[j + 1]) // 10, 9, 5, 3, 1, 2, 4, 6
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 9, 8, 5, 3, 1, 2, 4, 6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	Bubble_sort(a, sz); // ���鴫�δ���������a���׵�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}


// �����Ż���
void Bubble_sort(int a[], int sz)
{
	// ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// ÿһ��ð������,ȷ��һ��������ٶ�
		int j = 0;
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		for (j = 0; j < sz - 1 - i; j++)
		{
			int temp = 0;
			if (a[j]>a[j + 1]) // 9, 8, 5, 3, 1, 2, 4, 6
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 0; // ������������ݲ���ȫ����
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int a[] = { 9, 8, 5, 3, 1, 2, 4, 6 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	Bubble_sort(a, sz); // ���鴫�δ���������a���׵�ַ
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}