#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////��򵥵ĺ����ݹ�����
//int main()
//{
//	printf("haha\n");
//	main();
//}

////����һ�����Ͱ�˳�������ӡ����Ļ��
//void print(unsigned int n)
//{
//	if(n>9)//��������
//	{
//		print(n / 10);//�ݹ�  ÿһ�εݹ鶼����10�Դ����ƽ���������
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

////��������ʱ�������õݹ�ķ���дһ�����ַ������ȵĺ���
//int my_strlen(char* A)
//{
//	if (*A != '\0')//��������
//		return 1 + my_strlen(A + 1);//ÿ�μ�һ�Դ˱ƽ���������
//	else
//		return 0;
//}
//
//int main()
//{
//	char a[] = "abcdefgh";
//	int b = my_strlen(a);
//	printf("%d", b);
//	return 0;
//}



////���õݹ���n�Ľ׳�
//int jiecheng(int N)
//{
//	if (N <= 1)						//�õ��˹�ʽ  //��������
//		return 1;
//	else
//		return N * jiecheng(N - 1);      //ÿ�μ�һ�Դ˱ƽ���������
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = jiecheng(n);
//	printf("%d", ret);
//	return 0;
//}


////�ú����ݹ�ķ������n��쳲�������
//int fib(int N)
//{
//	if (N <= 2)
//		return 1;
//	else
//		return fib(N - 1) + fib(N - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//}
