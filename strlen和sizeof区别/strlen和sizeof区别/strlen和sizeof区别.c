#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strlen��sizeof����
//sizeof:���ַ���ռ�ռ�Ĵ�С��������������λ���ֽڣ�
//strlen : ֻ�����ַ����ĳ��ȣ�����\0 ֮ǰ�ַ����ĳ��ȣ����⺯��--> #include  <string.h>��
int main()
{
	// char ����ռ1���ֽ�
	char a[] = "you";  // ����\0: y o u \0
	char b[] = { 'y', 'o', 'u' };  // û��\0,ֻ�У� y o u 
	int c[] = { 1, 3 };  // 1  3
	char d[] = { "h" };  // h  \0
	// char e[] = 'h';  // ��ʽ������Ҫ��{}

	printf("sizeof(a)=%d\n", sizeof(a));  // 4*1=4 (4��ʾ4���ַ� y o u \0��1��ʾchar����ռ1���ֽڣ�
	printf("sizeof(b)=%d\n", sizeof(b));  // 3*1=3
	printf("strlen(a)=%d\n", strlen(a));  // 3
	printf("strlen(b)=%d\n", strlen(b));  // ��Ϊû��\0��Ϊ������־��������
	printf("sizeof(c)=%d\n", sizeof(c));  // 4*2=8��4��ʾint����ռ4���ֽڣ�2��ʾ��2���ַ���1  3

	//printf("strlen(c)=%d\n", strlen(c)); //strlenֻ�ܼ����ַ����ĳ��ȣ����ܼ�����������ĳ���
	//printf("%d", sizeof(int));  // int����ռ4���ֽ�

	printf("strlen(d)=%d\n", strlen(d));  // 1��ֻ����\0֮ǰ���ַ���ֻ��h,���Խ��Ϊ1��
	printf("sizeof(d)=%d\n", sizeof(d));  // 1*2=2��1��ʾchar����ռ1���ֽڣ�2��ʾ�������ַ��� h  \0
	//printf("sizeof(e)=%d\n", sizeof(e));
	return 0;
}