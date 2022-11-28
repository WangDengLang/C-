#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////输入三个数，输出从大到小排列的数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{	
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


////打印1-100之间是三的倍数的数
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		int a = i;
//		if (a % 3 == 0)//优化a%3==0（）
//		{
//			printf("%d\n", a);
//		}
//		//a += 1;
//		//printf("%d", a);
//
//	}
//
//	return 0;
//}

//打印100-200之间的素数
int main()
{
	int num = 0;
	
	for (num = 101; num < 200; num++)
	{
		int num2=0;
		for (num2 = 2; num2 < num;num2++)//判断i是否为素数：用[2, num)之间的每个数据去被num除，只要有一个可以被整除，则不是素数(因为num2等于num的一半时过后除于的结果都不是整数了)
		{
			if ((num %num2) == 0)//当num对num2求余等于0，表示能被num2整除
			{
				break;//是跳出循环
			}
 		}
		if (num2 == num)
		{
			printf("%d为素数\n", num);
		}
	}
	return 0;
}