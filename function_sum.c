# include <stdio.h>

void sum(int begin , int end) //函数头：viod返回类型，sum函数名，（）内为参数表
{
    int i;
    int sum = 0;

    for(i = begin; i <= end; i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin , end , sum);
} //函数体

int main(void)
{
    sum(1,10); //调用函数
    sum(20,30);
    sum(35,45);

    return 0 ;
}