#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


////strcpy��ʹ������
//int main()
//{
//	char a[20] = "wangdelang";
//	char b[20] = {0};
//	printf("%s %s\n", a, b);
//	strcpy(b, a);
//	printf("%s %s\n", a, b);
//  return 0;
//}

////memset��ʹ������
//int main()
//{
//	char a[20] = "####delang";
//	printf("%s\n", a);
//	memset(a, '*', 4);//ע���һ�������Ǳ������ڶ����Ǹ��ĺ���ַ���������������
//	printf("%s", a);
//	return 0;
//}

//////��һ������������ֵ����ϰ
////������ֵ�ĺ���
//int compare(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:>");
//	scanf("%d %d", &a, &b);
//	int max=compare(a,b);
//	printf("���ֵΪ%d", max);
//	return 0;
//}

//////дһ�����������������ͱ�����ֵ
////�����������ͱ����ĺ���
//void change(int* x, int* y)//��Ϊ��Ҫ�ı��ⲿ��������Ҫʹ�õ��ⲿ��ַ�����β����õ�ָ�����
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������:>");
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d��b=%d\n", a, b);
//	change(&a, &b);//�����β���ָ����������õ���&ȡ��ַ
//	printf("������a=%d��b=%d\n", a, b);
//}
