#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	//EOF--end of file�ļ�������־ -> -1
//	//getchar������ȡ�ַ�getchar�Ƕ��뺯����һ�֡�
//	//���ӱ�׼�������ȡ��һ���ַ����൱��getc(stdin)��
//	//��������Ϊint�ͣ�Ϊ�û������ASCII���EOF��
//	while ((ch = getchar()) != EOF)//EOF����Ctrl+ Z����ѭ��
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	int ret = 0;
//	printf("�������������룺");
//	scanf("%d", &password);
//	printf("��ȷ������->Y/N\n");
//	while ((ch = getchar()) != '\n')//���Ͻ����ַ���ֱ�����յ�'\n'!= '\n'������ѭ��
//	{
//		;//����䲻���κ�����
//	}
//	ret = getchar();//�Ӽ��̻�ȡ�ַ�
//	if (ret == 'Y')
//		{
//			printf("������ȷ\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	return 0;
//}

//
int main()
{
	int ch;
	while ((ch = getchar())!= EOF)
	{
		if (ch < '0' || ch>'9')//ֻ��������֣����������ĸ
		{
			continue;
		}		
		putchar(ch);
	}
	return 0;
}

