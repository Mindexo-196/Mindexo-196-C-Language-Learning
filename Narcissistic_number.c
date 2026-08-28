// 4-1. 水仙花数(20)
// 水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1^3 + 5^3 + 3^3。本题要求编写程序，计算所有N位水仙花数。
// 输入格式：
// 输入在一行中给出正整数N（3<=N<=7）。
// 输出格式：
// 按递增顺序输出所有N位水仙花数，每个数字占一行。
// 输入样例：
// 3
// 输出样例：
// 153
// 370
// 371

# include <stdio.h>

int main()
{
    int n = 0;

    printf("输入一个正整数(3<=N<=7)\n");
    scanf("%d", &n);

    int first = 1;
    int last = 10;
    int i = 1;

    while ( i<n )
    {
        first*= 10;
        last*= 10;
        i ++;
    }

    int out =first;
    
    while ( out  < last )
    {
        int temp = out;
        int sum = 0;

        while ( temp >0 )
        {
            int digit = temp % 10; // 拿到当前最低位
            
            int pow_res = 1;
            for (int cnt = 0; cnt < n; cnt++)
            {
                pow_res *= digit;
            }
            
            sum += pow_res; // 累加到总和中
            temp /= 10;   
        }
        
        if ( sum == out )
        {
            printf("%d\n", out );
        } 
        out++;
        
    }
    
    

   
    return 0;
}