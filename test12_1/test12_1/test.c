#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//void print(unsigned int n)
//{
//	if (n > 9)//当这个数大于9执行if语句里的表达式
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int a = 0;
//	printf("请输入一个数:>");
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
	int len = strlen(string);//计算字符长度
	char tmp = *string;//把第一个字符暂存
	*string = *(string+len-1);//把第一个字符换成最后一个

	*(string + len - 1) = '\0';//把字符最后一位清空
	if (strlen(string+1) >=2)//当字符还有两个或以上递归
		reverse_string(string+1);
	  
	*(string + len - 1) = tmp;
}

int main()
{
 	char string[] = "abcdefg";
	reverse_string(string);
	return 0;
}