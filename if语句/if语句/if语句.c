#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//if��֧��ѡ�����
//if���1��
//int main()
//{	
//	int age = 10;
//	if (age < 18)
//	{
//		printf("�㻹δ���ꡣ\n");
//	}
//	return 0;
//}


//if���2��
//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{
//		printf("����δ�����ˡ�\n");
//	}
//	else
//	{
//		printf("���ǳ����ˡ�\n");
//	}
//	return 0;
//}


//if���3��
int main()
{
	int age = 0;
	printf("������������䣿\n");
	scanf("%d", &age);
	if (age < 18)
	{
		printf("����δ������\n");
	}
	else if (age >= 18 && age < 60)
	{
		printf("����׳����\n");
	}
	else if (age >= 60 && age < 80)
	{
		printf("����������\n");
	}
	else
	{
		printf("����и���\n");
	}
	return 0;
}