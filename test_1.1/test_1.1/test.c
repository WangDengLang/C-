#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ж�0~100֮���е�����һ�������ж�����ż��
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a <= 100 && a>=0)
//	{
//		if (a % 2 == 0 && a!=2 && a!=0)
//		{
//			printf("a=%dΪż��\n", a);
//		}
//		else if (a % 2 != 0)
//		{
//			printf("a=%dΪ����\n",a);
//		}
//		else
//		{
//			printf("a=%dΪ�����ż\n",a);
//		}
//	}
//	else
//	{
//		printf("����ֵ����0~100֮������������");
//	}
//
//	return 0;
//}

//�ж�0~100�е�����
int main()
{
	int a;
	for (a = 0; a <= 100; a++)//Ҳ���԰�a++�ĳ�a+=2��for(a=0;a<=100;a+=2)Ȼ��ֱ�Ӵ�ӡi����Ҫif�ж�
	{
		if (a % 2 != 0)//Ҳ����if(a%2==1);
		{
			printf("%d ", a);
		}
	}
	return 0;
}
