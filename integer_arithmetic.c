#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	
	printf("请输入两个整数：");
	scanf("%d %d", &A , &B);
	
	printf("A + B = %d\n", A+B);
	printf("A - B = %d\n", A-B);
	printf("A * B = %d\n", A*B);
	printf("A / B = %d\n", A/B);
	
	return 0;
}
