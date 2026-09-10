// 4-3. 统计素数并求和(20)
// 本题要求统计给定整数M和N区间内素数的个数并对它们求和。
// 输入格式：
// 输入在一行中给出2个正整数M和N（1<=M<=N<=500）。
// 输出格式：
// 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
// 输入样例：
// 10 31
// 输出样例：
// 7 143

# include <stdio.h>
int main()
{
    int high = 0;
    int low = 0;
    //printf("请输入一个区间:");
    scanf("%d %d", &low , &high);

    int adder = 0;
    int sum = 0;
    int cnt = low;
    
    for ( cnt = low; cnt <= high; cnt++)
    {
        int judge = 1;

        if (cnt == 1)
        {
            continue;
        }

        int cal = cnt-1;

        for (int cal = cnt-1; cal > 1; cal--)
        {
            int Prime_judge = cnt%cal;
            if (Prime_judge == 0 )
            {
                judge = 0;
                break;
            }
        }
        if (judge == 1)
            {
                adder++;
                sum = sum + cnt;
            }
    }

    printf("%d %d", adder , sum);
    

    return 0;
}