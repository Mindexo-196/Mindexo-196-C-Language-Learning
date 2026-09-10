// 5-0. 求序列前N项和(15)
// 本题要求编写程序，计算序列 2/1 + 3/2 + 5/3 + 8/5 + ... 的前N项之和。
// 注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
// 
// 输入格式：
// 输入在一行中给出一个正整数N。
// 
// 输出格式：
// 在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。
// 
// 输入样例：
// 20
// 
// 输出样例：
// 32.66

# include <stdio.h>
int main()
{
    int loop_num = 0;
    double a = 2.0;
    double b = 1.0;
    double sum = 0.0;
    double frac = 0.0;

    printf("请输入位数");
    scanf("%d", &loop_num);

    for ( int cnt = 0 ; cnt < loop_num ; cnt++)
    {
        frac = a/b;
        double temp = a;
        a = a+b;
        b = temp;
        sum+=frac;   
    }

    printf("%.2f", sum);
    
    return 0;
}