#define _CRT_SECURE_NO_WARNINGS
//switchǶ�����
#include <stdio.h>
int main()
{
	int m = 2;
	int n = 3;
	switch (n)//n=3ִ��case 3
	{
	case 1:
		n++;
	case 2:
		m++;
	case 3:
		switch (n)//n=3ִ�и���Ƕswitch����е�case 3
		{
		case 1:
			n++;
		case 2:
			m++;
		case 3:
			m++;//m = 3
			n++;//n = 4
			break;//������Ƕswitch��䣬����ִ��case 4
		}
	case 4:
		m++; //m = 4
		n++; //n = 5
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}