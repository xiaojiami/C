#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 6)	//��λȡ%==6
		{
			printf("%d\n", i);
			count++;
		}
		else if (i / 10 == 6)	//ʮλ������10����6
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}