#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ά����

//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 3, 4 , 5} };
//	int i = 0;
//	for (i = 0; i < 2; i++) // ��ӡ����
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++) // ��ӡ����
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// ��ά����ĵ�ַ��������
int main()
{
	int a[2][3] = {{ 1, 2, 3 },{ 3, 4, 5 }};
	int i = 0;
	for (i = 0; i<2; i++) // ��ӡ����
	{
		int j = 0;
		for (j = 0; j<3; j++) // ��ӡ����
		{
			printf("a[%d][%d]=%p\n", i, j, &a[i][j]); // %p��ӡ��ַ
		}
	}
	return 0;
}