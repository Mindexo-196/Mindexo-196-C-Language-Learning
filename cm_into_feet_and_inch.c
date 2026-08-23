#include<stdio.h>

int main(){
	int cm = 0;
	
	printf("请输入长度(厘米):");
	scanf("%d", &cm);
	
	int foot = cm / (100 *0.3048);
	int out_inch = ((cm / 30.48) - foot)*12;
	
	printf("%d %d", foot , out_inch);
	
	return 0;
}
