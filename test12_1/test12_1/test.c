#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void print(unsigned int n)
//{
//	if (n > 9)//�����������9ִ��if�����ı��ʽ
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int a = 0;
//	printf("������һ����:>");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}


void reverse_string(char* string)
{
	int len = strlen(string);//�����ַ�����
	char tmp = *string;//�ѵ�һ���ַ��ݴ�
	*string = *(string+len-1);//�ѵ�һ���ַ��������һ��

	*(string + len - 1) = '\0';//���ַ����һλ���
	if (strlen(string+1) >=2)//���ַ��������������ϵݹ�
		reverse_string(string+1);
	  
	*(string + len - 1) = tmp;
}

int main()
{
 	char string[] = "abcdefg";
	reverse_string(string);
	return 0;
}