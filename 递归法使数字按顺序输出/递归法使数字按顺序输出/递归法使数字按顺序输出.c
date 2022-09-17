#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 利用递归法使数字按顺序输出
// 例如：2345 -> 2 3 4 5
//2345 %10 -> 5
//2345 /10 -> 234
//2345拆成234  5
//		23  45
//		2  345

void print(int n)  // n=2345
{
	if (n > 9) // 递归的限制条件
	{
		print(n / 10); //拆数，递归越来越接近条件
	}
		printf("%d ", n % 10);
}
int main()
{
	unsigned int a = 2345; //无符号数的2345
	print(a); // 调用print函数
	return 0;
}