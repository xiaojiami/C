#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组的遍历
int main()
{
	int i = 0;
	int k = 6;
	char a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	num = sizeof(a) / sizeof(a[0]);//计算数组的个数
	//printf("打印数组的个数num = %d", num);//打印数组的个数
	for (i = 0; i < num; i++)
	{
		if (k == a[i])
		{
			printf("找到了\n");
			printf("%d\n", a[i]);
			break;
		}
	}
	if (i == num)//都遍历完了没有找到
	{
		printf("没有找到\n");
	}
	return 0;
}



//二分法找数
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left = 0;//左下标
//	int sz = sizeof(a) / sizeof(a[0]);
//	int right = sz-1;//右下标
//	int k = 6;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;	//中间下标
//		if (a[mid] < k)
//		{ 
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到\n");
//	}
//	return 0;
//}