//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////结构体变量
//struct Book
//{
//	char name[15];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 30 };
//	struct Book *pb = &b1;
//	//利用pb打印出书名和价格
//	// .		结构体变量.成员
//	// ->		结构体指针->成员
//
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 20;
//	printf("降价后的价格：%d元\n", b1.price);
//
//	strcpy(b1.name, "C++");//strcpy	- 字符串拷贝 - 库函数 - string.h
//	printf("%s\n", b1.name);
//
//	
//	return 0;
//}