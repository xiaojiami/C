#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ifѭ�����
//int main()
//{
//	int input;
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("����һ���õ�offer\n");
//	}
//	else
//	{
//		printf("�ؼ�������\n");
//	}
//	return 0;
//}


//while ѭ�����
//int main()
//{
//	int line = 0;
//	printf("�ú�ѧϰC����\n");
//	while (line < 20)
//	{
//		printf("��һ�д���%d\n",line);
//		line++;
//	}
//	if (line >= 20)
//	{
//		printf("������ˣ�\n");
//	}
//	return 0;
//}

//
//���������������
//int ADD(int x, int y)//�Զ��庯��
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int sum;
//	sum = ADD(3, 4);
//	printf("sum = %d\n", sum);
//	return 0;
//	
//}


//����:һ����ͬ����Ԫ�صļ��ϣ�������±��Ǵ�0��ʼ��
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };//����һ�����10���������ֵ�����
//	int i = 0;
//	char b[2];//����һ�����2���ַ������ֵ�����
//	float c[3];//����һ�����3���ַ������ֵ�����
//	printf("%d\n", a[2]);//�±�ķ�ʽ����Ԫ��
//	//a[�±�]
//	while (i < 10)
//	{
//		printf("%d\n", a[i]);
//		i++;
//	}
//	return 0;
//}


//�ƣ�2���ƣ�λ������
//int main()
//{
//	int a = 2;//2��(2���ƣ�Ϊ10
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}


//��(2���ƣ�λ��
int main()
{
	int a = 3;//011
	int b = 5;//101
	int c = a&b;//001 
	printf("c = %d\n", c);//c=1
	return 0;
}
