# include<stdio.h>
int main()
{
    int input;
    int reverse = 0;
    int count = 0;

    printf("请输入一个正整数:");
    scanf("%d",&input);

    do{
        int expr_1 = input % 10; //提取个位
        reverse = reverse * 10 +expr_1; //计算返回值
        input = input / 10; //改变条件
        count = count + 1; //累加器
    }while (input > 0);

    //printf("重复执行%d次\n", count);
    printf("%d",reverse);

    return 0;
}