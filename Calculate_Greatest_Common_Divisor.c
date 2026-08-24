# include<stdio.h>

int main()
{
    int a,b;
    int min = 0;
    printf("请输入两个数(例:2 3):");
    scanf("%d %d",&a ,&b );

    int x = a;
    int y = b;

    for ( int cnt_x = a ; cnt_x > 0 ; cnt_x-- )
    {
        int judge_x = (x / cnt_x) * cnt_x ;
        if ( judge_x == x)
        {
            for ( int cnt_y = b ; cnt_y > 0 ; cnt_y--)
            {
                int judge_y = (y / cnt_y) * cnt_y;
                if (judge_y == y)
                {
                    if ( cnt_y == cnt_x )
                    {
                        min = cnt_y;
                        goto out;
                    } else
                    {
                        continue;
                    }
                } else
                {
                    continue;
                }
            }
        } else
        {
            continue;
        }
    }
    out:
    printf("最大公约数为%d\n" , min);
    
    return 0;
}