#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("������n��ֵ:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//����1��+ 2��+3��+4��	��ʽ1��
//�޸Ķ�Ӧn��ֵ�Ϳ���ʵ����1��+ 2��+3��+n���׳˵ĺͣ�ǰ�᲻���
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;//��ͽ׳����϶���� long int sum = 0;����int sum = 0��
//	for (n = 1; n <= 4; n++)
//	{
//		//ret = 1;
//		for (; i <= n; i++)
//		{
//			ret = ret*i;
//		}//����n�Ľ׳�
//	
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}




//����1��+ 2��+3���ĺ�	��ʽ2��
//�޸Ķ�Ӧn��ֵ�Ϳ���ʵ����1��+ 2��+3��+n���׳˵ĺͣ�ǰ�᲻���
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;//��ͽ׳����϶���� long int sum = 0;����int sum = 0��
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i=1; i <= n; i++)
//		{
//			ret = ret*i;
//		}//����n�Ľ׳�
//
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//����1��+ 2��+3���ĺ�	��ʽ3��
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;//��ͽ׳����϶���� long int sum = 0;����int sum = 0��
	for (n = 1; n <= 3; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


