#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////����������������Ӵ�С���е���
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


////��ӡ1-100֮�������ı�������
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 100; i++)
//	{
//		int a = i;
//		if (a % 3 == 0)//�Ż�a%3==0����
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

//��ӡ100-200֮�������
int main()
{
	int num = 0;
	
	for (num = 101; num < 200; num++)
	{
		int num2=0;
		for (num2 = 2; num2 < num;num2++)//�ж�i�Ƿ�Ϊ��������[2, num)֮���ÿ������ȥ��num����ֻҪ��һ�����Ա���������������(��Ϊnum2����num��һ��ʱ������ڵĽ��������������)
		{
			if ((num %num2) == 0)//��num��num2�������0����ʾ�ܱ�num2����
			{
				break;//������ѭ��
			}
 		}
		if (num2 == num)
		{
			printf("%dΪ����\n", num);
		}
	}
	return 0;
}