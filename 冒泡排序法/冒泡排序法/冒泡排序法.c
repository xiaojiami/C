#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 冒泡排序法

//void Bubble_sort(int a[], int sz)
//{
//	// 确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 每一趟冒泡排序,确定一趟排序多少对
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int temp = 0;
//			if (a[j]>a[j + 1]) // 10, 9, 5, 3, 1, 2, 4, 6
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 9, 8, 5, 3, 1, 2, 4, 6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	Bubble_sort(a, sz); // 数组传参传的是数组a的首地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}


// 函数优化：
void Bubble_sort(int a[], int sz)
{
	// 确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// 每一趟冒泡排序,确定一趟排序多少对
		int j = 0;
		int flag = 1; //假设这一趟要排序的数据已经有序
		for (j = 0; j < sz - 1 - i; j++)
		{
			int temp = 0;
			if (a[j]>a[j + 1]) // 9, 8, 5, 3, 1, 2, 4, 6
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 0; // 本次排序的数据不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int a[] = { 9, 8, 5, 3, 1, 2, 4, 6 };
	int sz = sizeof(a) / sizeof(a[0]);
	int i = 0;
	Bubble_sort(a, sz); // 数组传参传的是数组a的首地址
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}