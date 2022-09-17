#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 200; i++)
	{
		if (0 == i % 5)
		{
			printf("-2%d", i);
		}
	}
	return 0;
}