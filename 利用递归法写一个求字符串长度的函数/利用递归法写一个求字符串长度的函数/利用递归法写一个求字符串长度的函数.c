#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���õݹ鷨дһ�����ַ������ȵĺ���
//�ݹ鷨�� ���»�С
// my_strlen("hello")
//1+my_strlen("ello")
//1+1+my_strlen("llo")
//1+1+1+my_strlen("lo")
//1+1+1+1+my_strlen("o")
//1+1+1+1+1+my_strlen("")
//1+1+1+1+1+0
//5
int  my_strlen(char* a)
{
	if (*a != '\0')
	{
		return 1 + my_strlen(a + 1);
	}
	else
	{
		return 0;
	}	
}
int main()
{
	char a[] = "hello";
	int len = 0;
	len = my_strlen(a); // a�����飬���鴫�Σ��������ַ������׵�ַ
	printf("len = %d\n", len);
	return 0;
}