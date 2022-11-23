#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//计算n！

//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	printf("请输入n\n");
//	scanf("%d", &n);
//	for (i = n; i > 0; i--)
//	{	
//		sum *= i;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0; 
//	int sum = 1;
//	int i = 1;
//	printf("请输入一个数");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		printf("%d\n", sum);
//	}
//	printf("%d的阶乘为%d", n, sum);
//	return 0;
//}

//这是一个1-10阶乘的和(使用for循环嵌套)
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	int temp = 0;
//	int i = 0;
//	int num = 0;
//	printf("这是一个1-10阶乘的和\n");
//	for (num = 1; num <= 10; num++)
//	{
//		n++;
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//		}
//		temp = sum;
//		sum = 1;
//		printf("%d的阶乘为%d\n", n, temp);
//		sum2 += temp;
//	}
//	printf("结果为%d", sum2);
//}

//使用if加while语句结合
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	int temp = 0;
//	printf("这是一个1-10阶乘的和\n");
//	while (n < 10)
//	{
//		if (n < 1)
//		{
//			n++;
//			sum *= n;
//			temp = sum;
//		}
//		else
//		{
//			/*n++;*/
//			sum *= ++n;//前置++：n先加1再与sum相乘（先++后使用）若使用后置++则会多个1
//			temp = sum;
//		}
//		sum2 += temp;
//	}
//	printf("结果为%d", sum2);
//}

//知道一个数，要在有序的数组里找到他的数组下标（采用折半查找法）
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int k =11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left <= right)//不加=号就找不到7与10的下标且当k大于10时永远都不会存在left > right
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
		{
			printf("k的下标为%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}