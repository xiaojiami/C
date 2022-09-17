#define _CRT_SECURE_NO_WARNINGS
//switch嵌套语句
#include <stdio.h>
int main()
{
	int m = 2;
	int n = 3;
	switch (n)//n=3执行case 3
	{
	case 1:
		n++;
	case 2:
		m++;
	case 3:
		switch (n)//n=3执行该内嵌switch语句中的case 3
		{
		case 1:
			n++;
		case 2:
			m++;
		case 3:
			m++;//m = 3
			n++;//n = 4
			break;//跳出内嵌switch语句，继续执行case 4
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