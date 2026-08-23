#include<stdio.h>
int main()
{
	
	int DEC_in = 0;
	
	printf("请输入十进制数[0,153]:");
	scanf("%d" , &DEC_in);
	
	int HEX_10 = DEC_in / 16; 
	int HEX_01 = DEC_in % 16;
	int HEX_out = HEX_10 * 10 + HEX_01;
	
	printf("%d", HEX_out);
	
	return 0;
}
