#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个整数(中间以空格隔开):");
	scanf_s("%d%d/n", &a, &b);
	c = b + a;
	printf("结果为：%d", c);
	return 0;
}