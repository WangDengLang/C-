#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//打印0-9
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//采用左闭右开方式
//	{
//		printf("%d ", i);
//	}
// return 0;
//}

//数从0开始一直打印
//int main()
//{
//	int i = 0;
//	for (i = 0;; i++)//当判断条件省略恒为真，陷入死循环
//	{
//		printf("%d ", i);
//	}
// return 0;
//}



//int main()
//{
//	int a = 0,b = 0;
//	for (; a < 10; a++)
//	{
//		for (; b < 3; b++)		//循环开始时没有赋初值导致本来要打印9次的变成打印3次（所以不能随便省略括号从里的表达式）
//		{
//			printf("王德朗NB\n");
//		}
//	}
// return 0;
//}

int main()
{
	int a = 0;
	for (a = 0; a == 0; a++)//要注意判断表达式
	{
		printf("haha\n");
	}
	return 0;
}