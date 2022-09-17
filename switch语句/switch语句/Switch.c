#define _CRT_SECURE_NO_WARNINGS
//switch语句，常常用于多分支语句
//switch (整形表达式)
//{
//	语句项；
//		case 1：//（整形常量表达式）
//		break;//中断语句
//}
#include <stdio.h>
int  main()
{
	int day = 0;
	printf("请输入数字1~7中的一个数字:\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1://记得case和1之间要用空格隔开
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;//中断语句
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default://case1-7不执行就执行default语句
		printf("输入错误\n");
		break;
	}
	return 0;
}