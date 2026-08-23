# include<stdio.h>

int main()
{
    int x = 0;
    int n = 0;

    printf("请输入一个整数:");
    scanf("%d" , &x);
    
    /*
    if ( x >= 0)
    {
        n++;
        x /= 10;

        while ( x > 0 )
        {
            n ++;
            x /= 10;
        }
        
    }else if ( x < 0)
    {
        x = -x;
        n++;
        x /= 10;

        while ( x > 0 )
        {
            n ++;
            x /= 10;
        }
    }
    */

    do {
        n++;
        x /= 10;

    } while ( x > 0);
    //好像不用加if也行
    
    printf("%d" , n);

    return 0;
}