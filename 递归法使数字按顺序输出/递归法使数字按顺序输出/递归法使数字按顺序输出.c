#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���õݹ鷨ʹ���ְ�˳�����
// ���磺2345 -> 2 3 4 5
//2345 %10 -> 5
//2345 /10 -> 234
//2345���234  5
//		23  45
//		2  345

void print(int n)  // n=2345
{
	if (n > 9) // �ݹ����������
	{
		print(n / 10); //�������ݹ�Խ��Խ�ӽ�����
	}
		printf("%d ", n % 10);
}
int main()
{
	unsigned int a = 2345; //�޷�������2345
	print(a); // ����print����
	return 0;
}