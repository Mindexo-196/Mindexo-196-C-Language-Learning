# include<stdio.h>
# include <math.h>

int main()
{
    int number = 0;
    int i = 1;
    int digit = 0;

    printf("请输入一个正整数:");
    scanf("%d", &number);

    int cal = number;

    while (cal > 0) 
    {
        cal /= 10;
        digit++;
    } //计算位数

    int n = digit;
    int output = 0;

    for ( int n = digit ; n > 0 ;n-- )
    {   
        
        int power = (int)pow(10, n - 1);

        /*int power = 1;
        for (int x = 0; x < n-1 ; x++)
        {
           power *= 10;
        } */ //古法计算幂
         
        output = number / power;
        number = number - output * power;
        printf("%d" , output);
        if ( output <= 9)
        {
            printf(" ");
        }
    } //正序输出

    printf("\n");

    return 0;
}