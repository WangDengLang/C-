#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////最简单的函数递归例子
//int main()
//{
//	printf("haha\n");
//	main();
//}

////接收一个整型按顺序把他打印在屏幕上
//void print(unsigned int n)
//{
//	if(n>9)//限制条件
//	{
//		print(n / 10);//递归  每一次递归都除以10以此来逼近限制条件
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

////不产生临时变量利用递归的方法写一个求字符串长度的函数
//int my_strlen(char* A)
//{
//	if (*A != '\0')//限制条件
//		return 1 + my_strlen(A + 1);//每次加一以此逼近限制条件
//	else
//		return 0;
//}
//
//int main()
//{
//	char a[] = "abcdefgh";
//	int b = my_strlen(a);
//	printf("%d", b);
//	return 0;
//}



////利用递归求n的阶乘
//int jiecheng(int N)
//{
//	if (N <= 1)						//用到了公式  //限制条件
//		return 1;
//	else
//		return N * jiecheng(N - 1);      //每次减一以此逼近限制条件
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = jiecheng(n);
//	printf("%d", ret);
//	return 0;
//}


////用函数递归的方法求第n个斐波那契数
//int fib(int N)
//{
//	if (N <= 2)
//		return 1;
//	else
//		return fib(N - 1) + fib(N - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//}
