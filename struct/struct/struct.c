//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////�ṹ�����
//struct Book
//{
//	char name[15];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������", 30 };
//	struct Book *pb = &b1;
//	//����pb��ӡ�������ͼ۸�
//	// .		�ṹ�����.��Ա
//	// ->		�ṹ��ָ��->��Ա
//
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//
//	printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 20;
//	printf("���ۺ�ļ۸�%dԪ\n", b1.price);
//
//	strcpy(b1.name, "C++");//strcpy	- �ַ������� - �⺯�� - string.h
//	printf("%s\n", b1.name);
//
//	
//	return 0;
//}