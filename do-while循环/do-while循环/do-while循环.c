#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//do--whileѭ�����


//do //������Σ�����ִ��һ��ѭ��
//	ѭ����䣻
//while�����ʽ����


//����do while ѭ������ӡ1-10
int main()
{
	int i = 1;
	do
	{
		if (5 == i)
		{
			continue;//��ӡ1234����ѭ����
		}
		printf("%d\n", i);
		i++;
	} 
	while (i <= 10);
	return 0;
}
