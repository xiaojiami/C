#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//�Գ���
//	for (i = 1; i <= 100; i+=2)
//	{
//		for (j = 2; j <= i; j++)	// ����2��i-1������
//		{
//			if (i%j == 0)	// i%j == 0֤��i��������
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);	//iΪ����
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//�Ż�����Ϊa*b<=i��ƽ��������a< ��i
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	//�Գ���
	for (i = 2; i <= 100; i +=2) //1�Ȳ�������Ҳ���Ǻ��������Զ���i=2��ʼ
	{
		for (j = 2; j <= sqrt(i); j++)	// ����2��i-1������; sqrt--��ƽ������ѧ�⺯��
		{
			if (i%j == 0)	// i%j == 0֤��i��������
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);	//iΪ����
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}