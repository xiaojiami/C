#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//写一个函数实现整形有序数组的二分查找

//形参和实参的名字可以相同
				// 本质上a是指针
int binary_search(int a[],int k,int sz)
{
	int mid = 0;
	int left = 0; // 左下标
	int right = 0; // 右下标
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;   // 每次查找都要计算中间下标
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
		return -1;

}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ret = 0;
	int sz = 0;
	sz = sizeof(a)/sizeof(a[0]); // 计算数组的个数
	int k = 6;

	//找到了返回这个数的下标，找不到返回-1
	ret = binary_search(a, k,sz); // 传数组a第一个元素的地址
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，这个数的下标是：%d\n", ret);
	}
	return 0;
}