#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//if分支（选择）语句
//if语句1：
//int main()
//{	
//	int age = 10;
//	if (age < 18)
//	{
//		printf("你还未成年。\n");
//	}
//	return 0;
//}


//if语句2：
//int main()
//{
//	int age = 20;
//	if (age < 18)
//	{
//		printf("你是未成年人。\n");
//	}
//	else
//	{
//		printf("你是成年人。\n");
//	}
//	return 0;
//}


//if语句3：
int main()
{
	int age = 0;
	printf("请输入你的年龄？\n");
	scanf("%d", &age);
	if (age < 18)
	{
		printf("你是未成年人\n");
	}
	else if (age >= 18 && age < 60)
	{
		printf("你是壮年人\n");
	}
	else if (age >= 60 && age < 80)
	{
		printf("你是老年人\n");
	}
	else
	{
		printf("你很有福气\n");
	}
	return 0;
}