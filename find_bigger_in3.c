# include <stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a , &b , &c);
	
	int max = 0;
	 
	if ( a >= b){
		if ( c > a){
			max = c;
		}else {
			max = a;
		}
	} else {
		if ( c >= b){
			max = c;
		}else {
			max = b;
		}
	}
	
	printf("%d" , max);
	
	return 0;
}
