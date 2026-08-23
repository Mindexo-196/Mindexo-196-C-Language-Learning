#include<stdio.h>
int main()
{
	int a = 0;
	
	printf("请输入一个三位数：");
	scanf("%d", &a);
	
	int x = a % 10;
	int y = a % 100 / 10;
	int z = a / 100;
	
	int out = x * 100 + y * 10 + z;
	printf("%d", out );
	return 0;
}
