#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ����������������ֵ

//��ʵ�δ����βε�ʱ��
//�β�ֻ��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���ı�ʵ��
int Swan(int *p1, int* p2) // ����
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d��b=%d\n", a, b);
	Swan(&a, &b);	//����Swan��������ַ���ã��ڲ��������Ըı��ⲿ�����ı���
					//�˴���Ҫ����ַ�������ܽ���
	printf("a=%d��b=%d\n", a, b);
	return 0;
}