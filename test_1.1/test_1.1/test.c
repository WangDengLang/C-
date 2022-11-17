#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//判断0~100之间中的任意一个整数判断其奇偶性
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= 100 && a>=0)
//	{
//		if (a % 2 == 0 && a!=2 && a!=0)
//		{
//			printf("a=%d为偶数\n", a);
//		}
//		else if (a % 2 != 0)
//		{
//			printf("a=%d为奇数\n",a);
//		}
//		else
//		{
//			printf("a=%d为非奇非偶\n",a);
//		}
//	}
//	else
//	{
//		printf("输入值不在0~100之间请重新输入");
//	}
//
//	return 0;
//}

//判断0~100中的奇数
int main()
{
	int a;
	for (a = 0; a <= 100; a++)//也可以把a++改成a+=2：for(a=0;a<=100;a+=2)然后直接打印i不需要if判断
	{
		if (a % 2 != 0)//也可以if(a%2==1);
		{
			printf("%d ", a);
		}
	}
	return 0;
}
