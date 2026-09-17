// 5-1. 约分最简分式(15)
// 
// 题目要求：
// 分数可以表示为“分子/分母”的形式。编写一个程序，要求用户输入一个分数，然后将其约分为最简分式。
// 最简分式是指分子和分母不再有可以约分的成分了。如6/12可以被约分为1/2。
// 当分子大于分母时，不需要表达为整数又分数的形式，即11/8还是11/8；
// 而当分子分母相等时，仍然表达为1/1的分数形式。
// 
// 输入格式：
// 输入在一行中给出一个分数，分子和分母中间以斜杠“/”分隔，如：12/34 表示34分之12。
// 分子和分母都是正整数（不包含0，如果不清楚正整数的定义的话）。
// 提示：在scanf的格式字符串中加入“/”，让scanf来处理这个斜杠。
// 
// 输出格式：
// 在一行中输出这个分数对应的最简分式，格式与输入的相同，即采用“分子/分母”的形式表示分数。
// 如 5/6 表示6分之5。
// 
// 输入样例：
// 60/120
// 
// 输出样例：
// 1/2

#include <stdio.h>
int main()
{
    int frac_a = 0;
    int frac_b = 0;
    int i = 0;
    int j = 0;
    int frac = 0;
    int temp = 0;
    int gcd = 0;

    //printf("输入a/b:");
    scanf("%d/%d", &frac_b , &frac_a);

    // for (int cnt = frac_b; cnt >= 2; cnt--)
    // {
        i = frac_a;
        j = frac_b;

    //     if ( i==0 && j==0 )
    //     {
    //         frac_a = frac_a / cnt;
    //         frac_b = frac_b / cnt;
    //     }
    // } //逻辑有误

    // do
    // {
    //     temp = i % j;
    //     if (temp != 0)
    //     {
    //         i = j;
    //         j =temp;
    //     }
    //     else if (temp == 0)
    //     {
    //         gcd = j;
    //         break;
    //     }
    // } while (temp > 0 );
    //过于繁琐


    while ( j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }

    gcd = i;
    
    
    printf("%d/%d", frac_b/gcd , frac_a/gcd);  

    return 0;
}