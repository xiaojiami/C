#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//дһ������ʵ��������������Ķ��ֲ���

//�βκ�ʵ�ε����ֿ�����ͬ
				// ������a��ָ��
int binary_search(int a[],int k,int sz)
{
	int mid = 0;
	int left = 0; // ���±�
	int right = 0; // ���±�
	right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;   // ÿ�β��Ҷ�Ҫ�����м��±�
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
	sz = sizeof(a)/sizeof(a[0]); // ��������ĸ���
	int k = 6;

	//�ҵ��˷�����������±꣬�Ҳ�������-1
	ret = binary_search(a, k,sz); // ������a��һ��Ԫ�صĵ�ַ
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ���������±��ǣ�%d\n", ret);
	}
	return 0;
}