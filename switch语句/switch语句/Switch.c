#define _CRT_SECURE_NO_WARNINGS
//switch��䣬�������ڶ��֧���
//switch (���α��ʽ)
//{
//	����
//		case 1��//�����γ������ʽ��
//		break;//�ж����
//}
#include <stdio.h>
int  main()
{
	int day = 0;
	printf("����������1~7�е�һ������:\n");
	scanf("%d", &day);
	switch (day)
	{
	case 1://�ǵ�case��1֮��Ҫ�ÿո����
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;//�ж����
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default://case1-7��ִ�о�ִ��default���
		printf("�������\n");
		break;
	}
	return 0;
}