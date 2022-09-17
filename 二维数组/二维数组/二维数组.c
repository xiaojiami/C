#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二维数组

//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 3, 4 , 5} };
//	int i = 0;
//	for (i = 0; i < 2; i++) // 打印行数
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++) // 打印列数
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


// 二维数组的地址是连续的
int main()
{
	int a[2][3] = {{ 1, 2, 3 },{ 3, 4, 5 }};
	int i = 0;
	for (i = 0; i<2; i++) // 打印行数
	{
		int j = 0;
		for (j = 0; j<3; j++) // 打印列数
		{
			printf("a[%d][%d]=%p\n", i, j, &a[i][j]); // %p打印地址
		}
	}
	return 0;
}