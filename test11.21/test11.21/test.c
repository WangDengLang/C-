#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//����n��

//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	printf("������n\n");
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
//	printf("������һ����");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//		printf("%d\n", sum);
//	}
//	printf("%d�Ľ׳�Ϊ%d", n, sum);
//	return 0;
//}

//����һ��1-10�׳˵ĺ�(ʹ��forѭ��Ƕ��)
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	int temp = 0;
//	int i = 0;
//	int num = 0;
//	printf("����һ��1-10�׳˵ĺ�\n");
//	for (num = 1; num <= 10; num++)
//	{
//		n++;
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//		}
//		temp = sum;
//		sum = 1;
//		printf("%d�Ľ׳�Ϊ%d\n", n, temp);
//		sum2 += temp;
//	}
//	printf("���Ϊ%d", sum2);
//}

//ʹ��if��while�����
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int sum2 = 0;
//	int temp = 0;
//	printf("����һ��1-10�׳˵ĺ�\n");
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
//			sum *= ++n;//ǰ��++��n�ȼ�1����sum��ˣ���++��ʹ�ã���ʹ�ú���++�����1
//			temp = sum;
//		}
//		sum2 += temp;
//	}
//	printf("���Ϊ%d", sum2);
//}

//֪��һ������Ҫ��������������ҵ����������±꣨�����۰���ҷ���
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int k =11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	while (left <= right)//����=�ž��Ҳ���7��10���±��ҵ�k����10ʱ��Զ���������left > right
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
			printf("k���±�Ϊ%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}