#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>


////�ַ��������߿�ʼ����
//int main()
//{
//	char strin[] = { "Welcome to my home !" };
//	char strin2[] = { "                    " };
//	int left = 0;
//	int right = strlen(strin)-1;//��Ϊ������һ��\0����Ҫ��һ
//	while (left < right)
//	{
//		strin2[left] = strin[left];//������ַ�����
//		strin2[right] = strin[right];//���ұ��ַ�����
//		left++;
//		right--;
//		printf("%s\n", strin2);
//		Sleep(1000);//˯��1s
//		system("cls");//��Ļ���
//	}
//	printf("%s", strin2);
//	return 0;
//}


////���׵�¼ϵͳ
////���룺1165690537
////�����������
//int main()
//{
//	char mima[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", mima);
//		if (strcmp(mima, "1165690537") == 0)
//		{
//			printf("����������ȷ\n");
//			break;
//		}
//		else
//		{
//				printf("�����������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������Σ�����ϵ����Ա\n");
//	}
//	return 0;
//}

//��������Ϸ

int menu()
{
	printf("*************************************\n");
	printf("*************************************\n");
	printf("  *************1.������************\n");
	printf("  ************0.�˳���Ϸ************\n");
	printf("*************************************\n");
	printf("*************************************\n");
}

void game()
{
	int num = 0;
	int ret=rand()%100;//����0-100�������
	while (1)
	{
		printf("������1-100������\n");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("%d��ret��\n", num);
		}	
		else if (num < ret)
		{
			printf("%d��retС\n", num);
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	menu();
	srand(time(NULL));//����һ��ʱ�����rand�����������������ָ������
	do
	{
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
				break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		default:
			printf("�������������ѡ��\n");
				break;
		}
	} while (input);


	return 0;
	
}