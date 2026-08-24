# include <stdio.h>

int main()
{
    int a,b;
    int min;
    printf("请输入两个数(例:2 3):");
    scanf("%d %d",&a ,&b );

    /*if ( a < b )
    {
        min = a;
    } else
    {
        min = b;
    }

    int ret = 0;
    int i;

    for ( i = 1 ;i <= min ; i++ )
        {
            if ( a % i == 0)
            {
                if( b % i ==0)
                {
                    ret = i;
                }
            }
        } //穷举
    */ 
    
    int x = a;
    int y = b;
    int z;
      
    while ( y != 0 )
    {
        z = x % y;
        x = y;
        y = z;
    } //辗转相除法
    
    printf("最大约数为%d" , x);
    
    return 0;
}