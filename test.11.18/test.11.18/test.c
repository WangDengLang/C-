#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ�����������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//		case 1:
//			printf("����һ");
//				break;
//		case 2:
//			printf("���ڶ�");
//				break;
//		case 3:
//			printf("������");
//			break;
//		case 4:
//			printf("������");
//			break;
//		case 5:
//			printf("������");
//			break;
//		case 6:
//			printf("������");
//			break;
//		case 7:
//			printf("������");
//			break;
//	}
//	return 0;
//}

//�������ڼ��ж��ǹ����ջ�����Ϣ��
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
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("������������������");
		break;
	}
	return 0;
}
