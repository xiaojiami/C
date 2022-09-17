#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE--枚举常量
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//int main()
//{
//	//数据在计算机上存储的是二进制
//	//a - 97； 97为ASCII码值
//	//A - 65
//	//ASCII编码
//	char a[] = "abc";//数组
//	//"abc" -- 'a','b','c','\0'
//	//'\0' -- 字符串的结束；'\0\ -- 0
//	//'a' -- 97
//
//	char a1[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", a);
//	printf("%s\n", a1);
//	return 0;
//}

//int main()
//{
//	char a[] = "abc";
//	char b[] = { 'a', 'b', 'c','\0' };
//	//strlen计算字符串的长度
//	printf("%d\n", strlen(a));//3
//	printf("%d\n", strlen(b));//随机值
//	return 0;
//}

//int main()
//{
//	printf("\a");
//	printf("%c\n", '\,');//打印，
//	printf("%s\n", "\"");//打印“
//	return 0;
//}

#include <string.h>
int main()
{
	//转义字符算一个字符长度
	printf("%d\n", strlen("c:\text\32\test.c"));
	printf("\132\n");
	printf("\x61\n");// a
	// \32 -- 32是个8进制数字
	// \32作为8进制代表的那个10进制数字，作为ASCII码值，对应的字符
	// 32 --> 10进制 26 --> 作为ASCII码值代表的字符
	return 0;
}