#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//whileѭ������ӡ����1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//whileѭ������е�break����������ֹѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//		if (i == 5)
//		{
//			break;//������ֹѭ��
//		}
//	}
//	return 0;
//}


//whileѭ������е�continue������ֹ����ѭ��������ߵĴ��벻��ִ�У�
//ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (i == 5)
		{
			continue;	 //��i=5ʱ��continue��ֹ����ѭ��������ִ���������䣬
                        //����whileѭ���жϣ�������һ��ѭ��������жϡ�
		}
		printf("%d\n", i);
	}
	return 0;
}
