# include <stdio.h>

int main()
{
	double buy = 0;
	double pay = 0;
	
	printf("请输入购买金额(元):");
	scanf("%lf", &buy);
	printf("请输入支付金额(元):");
	scanf("%lf", &pay);
	
	if ( pay < buy ) {
		printf("支付金额不足");
	} else {
		double charge = pay - buy ;
		printf("找零：%lf元", charge); 
	}
	
	return 0;
}
