#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//дһ�������������еĽϴ�ֵ
//int Max(int x, int y)
//{
//	if (x < y)//���x<y,�򷵻�y��ֵ
//	{
//		return y;
//	}
//	else//���򷵻�x��ֵ
//	{
//		return x;
//	}
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 8;
//	int b = a++;//����++����ʹ�ã���++
//	printf("a = %d,b = %d\n", a, b);// 8	9
//	int b = ++a; //ǰ��++: ��++����ʹ��
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(���ͣ���ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 8;
	int max;
	max = (a > b ? a : b);//���a > b ִ��a,����ִ��b;
	printf("max = %d\n", max);
	return 0;
}

