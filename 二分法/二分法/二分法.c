#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����ı���
int main()
{
	int i = 0;
	int k = 6;
	char a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	num = sizeof(a) / sizeof(a[0]);//��������ĸ���
	//printf("��ӡ����ĸ���num = %d", num);//��ӡ����ĸ���
	for (i = 0; i < num; i++)
	{
		if (k == a[i])
		{
			printf("�ҵ���\n");
			printf("%d\n", a[i]);
			break;
		}
	}
	if (i == num)//����������û���ҵ�
	{
		printf("û���ҵ�\n");
	}
	return 0;
}



//���ַ�����
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;//���±�
//	int sz = sizeof(a) / sizeof(a[0]);
//	int right = sz-1;//���±�
//	int k = 6;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;	//�м��±�
//		if (a[mid] < k)
//		{ 
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�\n");
//	}
//	return 0;
//}