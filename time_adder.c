#include <stdio.h>

int main() 
{
    int time = 0;
    int ptime = 0;
    
    printf("请输入初始时间(小时:分钟)和持续时间(分钟)(例如:1120 320):");
    if (scanf("%d %d", &time, &ptime) != 2) return 1;

    int start_hour = time / 100;
    int start_min = time % 100;

    int total_minutes = (start_hour * 60) + start_min + ptime;

    int end_hour = (total_minutes / 60) % 24; 
    int end_min = total_minutes % 60;

    int outputtime = end_hour * 100 + end_min;

    printf("最终时间是：%d\n", outputtime);

    return 0;
}

