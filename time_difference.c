#include <stdio.h>

int main()
{
	int hour1 = 0;
	int minute1 = 0;
	int hour2 = 0;
	int minute2 = 0;
	
	printf("请输入初始时间(小时:分钟)和持续时间(分钟)(例如:1120 320):");
	scanf("%d %d", &hour1 , &minute1);
	
	printf("请输入结束时间(小时:分钟):");
	scanf("%d %d", &hour2 , &minute2);
	
	int amount = (hour2 * 60 + minute2) - (hour1 * 60 + minute1);
	int hour = amount / 60;
	int minute = amount %  60;
	
	if ( minute <0 ) {     //������Ҫ 
		minute = 60 + minute;
		hour --;
	}
	
	printf("时间差是：%d小时%d分钟", hour , minute);
	return 0;
}
