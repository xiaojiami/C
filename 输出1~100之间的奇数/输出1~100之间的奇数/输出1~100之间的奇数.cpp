#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���1~100֮�������
//��ʽ1��
//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("iΪ����=%d\n", i);
//		}
//	}
//	return 0;
//}


//��ʽ2��
//int main()
//{
//	int i=1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);	
//		}
//		i++;
//	}
//	return 0;
//}


//��ʽ3��
int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d\n", i);
		i += 2;
	}
	return 0;
}