#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//������400�ı����Ĳ������꣬����400�ı����ľ���ƽ��


////�ҳ�2000-3000�������
////���ҳ�����ĺ���
//int find_run(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)//�ж�������������1���ܱ��������Ҳ��ܱ�100���� 2.�ܱ�400����  ����������һ������������꣩
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

////��һ�������ҳ�һ����������������±�

int s_num(int a[], int k, int s)
{
	int left = 0;
	int right = s-1;
	int mid = (right + left) / 2;
	while (left < right)//һ��Ҫ�ӵȺ�
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
		printf("�Ҳ���");
	}
	else
	{
		printf("k���±�Ϊ%d", ret);
	}
	return 0;
}