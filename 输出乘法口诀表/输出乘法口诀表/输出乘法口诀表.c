//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////输出9*9乘法口诀表
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)	// 打印9行
//	{	
//		for (j = 1; j <= i; j++)	//打印i列
//		{
//			printf("%d*%d=%-4d",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int k = 17;
	char a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	num = sizeof(a) / sizeof(a[0]);//计算数组的个数
	printf("打印数组的个数num = %d\n", num);//打印数组的个数
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