# include <stdio.h>

int main()
{
    int a = 0;

    printf("请输入一个小于6的正整数:");
    scanf("%d", &a);

    int i = a;
    int j = 0;
    int k = 0;
    int cnt = 0;

    while ( i <= a+3 )
    {
        j = a;
        while ( j <= a+3 )
        {
            k = a;
            while (k <= a+3)
            {
                if( i != j)
                {
                    if ( i != k )
                    {
                        if( j != k)
                        {
                        cnt++;
                        printf("%d%d%d", i, j, k);
                        if (cnt == 6)
                            {
                            printf("\n");
                            cnt = 0;
                            } else
                            {
                            printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}