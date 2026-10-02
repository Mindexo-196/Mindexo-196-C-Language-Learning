# include <stdio.h>
# include <math.h>

int is_Prime(int i)
{
    int ret = 0;

    if ( i==1 || i%2==0 && i!=2 )
    {
        ret = 1;
    }

    for(int cnt = 3; cnt <= sqrt(i) ; cnt+=1 )
    {
        if (i % cnt == 0)
        {
            ret = 1;
            break;
        }
    }

    return ret;
}

int main(void)
{
    int x;
    int cnt;
    int Prime_num[100] = {2};
    int cnt1 = 1;
    int cnt2 = 0;

    scanf("%d",&x);
    while ( x != -1 && cnt<10 )
    {
        if (is_Prime(x) == 0 && x!=2 )
        {
            Prime_num[cnt1] = x;
            cnt1++;
        }

        if( is_Prime(x) == 0)
        {
            printf("%d is Prime number\n", x );
        }  
        else
        {
            printf("%d is not Prime number\n", x );
        }

        scanf("%d",&x);
    }

    printf("\n\nPrime number index\n");

    for (int cnt = 0; cnt < sizeof(Prime_num)/sizeof(Prime_num[0]); cnt++)
    {
        printf("%d\t",Prime_num[cnt]);
        cnt2++;

        if (cnt2 == 10)
        {
            printf("\n");
            cnt2 = 0;
        }
    }

    return 0;
}