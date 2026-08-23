# include<stdio.h>

int main()
{
    int lb = 0;
    int ub = 0;


    printf("请输入你要输出素数的范围\n例如(13 100):");
    scanf("%d %d", &lb , &ub);

    for ( int x = ub ; x >=lb ; x-- )
    {
        if ( x < 2)
        {
            continue;
        }
        

        int isPrime = 1;

        for( int i = x-1 ; i > 1 ; i--)
        {
            int judge = x % i ;

            if (judge ==0)
            {
                isPrime = 0;
                break;
            } 
        }

        if ( isPrime == 1)
        {
            printf("%d ", x);
        }
        
    }

    return 0;
}