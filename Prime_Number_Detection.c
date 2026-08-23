# include <stdio.h>

int main()
{
    int number = 0 ;
    int isPrime = 1 ; //输出判断条件

    printf("请输入一个数:");
    scanf("%d" , &number);

    for ( int i = number-1 ; i > 1 ; i-- )
    {
        int judge = number%i ; 

        if (judge == 0)
        {
            isPrime = 0;
            break;
        }
    }

    //硬塞continue
    
    /*for ( int i = number-1 ; i > 1 ; i-- )
    {
        int judge = number%i ; 

        if (judge != 0)
        {
            continue;
        } else {
            isPrime = 0;
            break;
        }
    }  */

    if ( isPrime == 1)
    {
        printf("是素数");
    } else {
        printf("非素数");
    }
    


    return 0;
}