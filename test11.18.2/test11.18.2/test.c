#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char a[20] = { 0 };				
	int ch = 0;						//因为getchare函数返回值的是int类型			
	printf("请输入密码>:");
	scanf("%s", a);					//输入密码
	printf("请输入Y/N确认:");
	while ((ch = getchar()) != '\n')//清除缓冲区里的数据 \n是转义字符要用''不是用""
	{
		;
	}
	ch = getchar();					//获取Y/N
	if (ch == 'Y')
	{
		printf("确认成功\n");
		putchar(ch);					//输出括号里变量的字符
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}