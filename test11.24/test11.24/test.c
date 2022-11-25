#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>


////字符串从两边开始显现
//int main()
//{
//	char strin[] = { "Welcome to my home !" };
//	char strin2[] = { "                    " };
//	int left = 0;
//	int right = strlen(strin)-1;//因为还包含一个\0所以要减一
//	while (left < right)
//	{
//		strin2[left] = strin[left];//把左边字符放入
//		strin2[right] = strin[right];//把右边字符放入
//		left++;
//		right--;
//		printf("%s\n", strin2);
//		Sleep(1000);//睡眠1s
//		system("cls");//屏幕清空
//	}
//	printf("%s", strin2);
//	return 0;
//}


////简易登录系统
////密码：1165690537
////三次输入机会
//int main()
//{
//	char mima[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", mima);
//		if (strcmp(mima, "1165690537") == 0)
//		{
//			printf("密码输入正确\n");
//			break;
//		}
//		else
//		{
//				printf("密码输入错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误多次，请联系管理员\n");
//	}
//	return 0;
//}

//猜数字游戏

int menu()
{
	printf("*************************************\n");
	printf("*************************************\n");
	printf("  *************1.猜数字************\n");
	printf("  ************0.退出游戏************\n");
	printf("*************************************\n");
	printf("*************************************\n");
}

void game()
{
	int num = 0;
	int ret=rand()%100;//产生0-100的随机数
	while (1)
	{
		printf("请输入1-100的数字\n");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("%d比ret大\n", num);
		}	
		else if (num < ret)
		{
			printf("%d比ret小\n", num);
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	menu();
	srand(time(NULL));//调用一次时间戳让rand（）函数产生的数字更加随机
	do
	{
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("输入错误，请重新选择\n");
				break;
		}
	} while (input);


	return 0;
	
}