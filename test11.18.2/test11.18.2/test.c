#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char a[20] = { 0 };				
	int ch = 0;						//��Ϊgetchare��������ֵ����int����			
	printf("����������>:");
	scanf("%s", a);					//��������
	printf("������Y/Nȷ��:");
	while ((ch = getchar()) != '\n')//���������������� \n��ת���ַ�Ҫ��''������""
	{
		;
	}
	ch = getchar();					//��ȡY/N
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
		putchar(ch);					//���������������ַ�
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}