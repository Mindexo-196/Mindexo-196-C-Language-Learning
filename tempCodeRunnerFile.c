# include <stdio.h>

int main()
{
    int number = 0 ;

    printf("请输入一个数:");
    scanf("%d" , number);

    for ( i = number-1 , i >= 1 ,i-- )
    {

        int judge = (number/i)*10%10;

        if (judge == 0)
        {
            printf("非素数");
            break;
        } else{
            continue;
        }
    }


    return 0;
}