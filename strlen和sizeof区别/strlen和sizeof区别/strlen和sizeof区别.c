#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//strlen和sizeof区别
//sizeof:求字符所占空间的大小；（操作符；单位：字节）
//strlen : 只能求字符串的长度；计算\0 之前字符串的长度；（库函数--> #include  <string.h>）
int main()
{
	// char 类型占1个字节
	char a[] = "you";  // 包含\0: y o u \0
	char b[] = { 'y', 'o', 'u' };  // 没有\0,只有： y o u 
	int c[] = { 1, 3 };  // 1  3
	char d[] = { "h" };  // h  \0
	// char e[] = 'h';  // 格式错误，需要加{}

	printf("sizeof(a)=%d\n", sizeof(a));  // 4*1=4 (4表示4个字符 y o u \0；1表示char类型占1个字节）
	printf("sizeof(b)=%d\n", sizeof(b));  // 3*1=3
	printf("strlen(a)=%d\n", strlen(a));  // 3
	printf("strlen(b)=%d\n", strlen(b));  // 因为没有\0作为结束标志，结果随机
	printf("sizeof(c)=%d\n", sizeof(c));  // 4*2=8（4表示int类型占4个字节；2表示有2个字符：1  3

	//printf("strlen(c)=%d\n", strlen(c)); //strlen只能计算字符串的长度，不能计算整形数组的长度
	//printf("%d", sizeof(int));  // int类型占4个字节

	printf("strlen(d)=%d\n", strlen(d));  // 1（只计算\0之前的字符，只有h,所以结果为1）
	printf("sizeof(d)=%d\n", sizeof(d));  // 1*2=2（1表示char类型占1个字节，2表示有两个字符： h  \0
	//printf("sizeof(e)=%d\n", sizeof(e));
	return 0;
}