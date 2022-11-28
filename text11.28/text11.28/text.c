#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


////strcpy的使用例子
//int main()
//{
//	char a[20] = "wangdelang";
//	char b[20] = {0};
//	printf("%s %s\n", a, b);
//	strcpy(b, a);
//	printf("%s %s\n", a, b);
//  return 0;
//}

////memset的使用例子
//int main()
//{
//	char a[20] = "####delang";
//	printf("%s\n", a);
//	memset(a, '*', 4);//注意第一个参数是变量，第二个是更改后的字符，第三个是数量
//	printf("%s", a);
//	return 0;
//}

//////用一个函数求出最大值的练习
////求出最大值的函数
//int compare(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a, &b);
//	int max=compare(a,b);
//	printf("最大值为%d", max);
//	return 0;
//}

//////写一个函数交换两个整型变量的值
////交换两个整型变量的函数
//void change(int* x, int* y)//因为需要改变外部变量所以要使用到外部地址所以形参需用到指针变量
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d，b=%d\n", a, b);
//	change(&a, &b);//函数形参是指针变量所以用到了&取地址
//	printf("交换后：a=%d，b=%d\n", a, b);
//}
