//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////���9*9�˷��ھ���
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)	// ��ӡ9��
//	{	
//		for (j = 1; j <= i; j++)	//��ӡi��
//		{
//			printf("%d*%d=%-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int k = 17;
	char a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	num = sizeof(a) / sizeof(a[0]);//��������ĸ���
	printf("��ӡ����ĸ���num = %d\n", num);//��ӡ����ĸ���
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