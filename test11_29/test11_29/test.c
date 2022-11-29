#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//必须是400的倍数的才是闰年，不是400的倍数的就是平年


////找出2000-3000年的闰年
////能找出闰年的函数
//int find_run(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)//判断闰年两个规则：1能能被四整除且不能被100整除 2.能被400整除  （满足任意一个规则就是闰年）
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 2000;
//	for (year = 2000; year <= 3000; year++)
//	{
//		if (find_run(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

////用一个函数找出一个数在有序数组的下标

int s_num(int a[], int k, int s)
{
	int left = 0;
	int right = s-1;
	int mid = (right + left) / 2;
	while (left < right)//一定要加等号
	{
		mid = (right + left) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 6;
	int ret = s_num(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("k的下标为%d", ret);
	}
	return 0;
}