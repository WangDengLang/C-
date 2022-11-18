#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输入一个数输出星期
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//		case 1:
//			printf("星期一");
//				break;
//		case 2:
//			printf("星期二");
//				break;
//		case 3:
//			printf("星期三");
//			break;
//		case 4:
//			printf("星期四");
//			break;
//		case 5:
//			printf("星期五");
//			break;
//		case 6:
//			printf("星期六");
//			break;
//		case 7:
//			printf("星期天");
//			break;
//	}
//	return 0;
//}

//输入星期几判断是工作日还是休息日
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("输入有误，请重新输入");
		break;
	}
	return 0;
}
