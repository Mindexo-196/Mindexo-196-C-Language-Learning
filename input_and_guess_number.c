// 1. 系统随机产生一个 100 以内的正整数。
// 2. 用户输入一个数对其进行猜测，程序需比较并给出提示：
//    - 猜大了：输出 "Too big"
//    - 猜小了：输出 "Too small"
//    - 猜中了：输出相应提示并结束程序。
// 3. 猜中时的具体提示规则：
//    - 第 1 次就猜中：提示 "Bingo!"
//    - 3 次以内（包括第 2 次和第 3 次）猜中：提示 "Lucky You!"
//    - 超过 3 次但在最大次数 N 以内（包括第 N 次）猜中：提示 "Good Guess!"
// 4. 游戏失败与结束规则：
//    - 超过 N 次都没有猜到：提示 "Game Over" 并结束程序。
//    - 在到达 N 次之前，如果用户输入了一个负数：同样输出 "Game Over" 并结束程序。
// 
// 【输入格式】
// - 第一行：给出 2 个不超过 100 的正整数，分别代表【系统产生的随机数】和【猜测的最大次数 N】。
// - 随后每行：给出用户的一个输入猜测值，直到出现负数为止。
// 
// 【输出格式】
// - 每行对应输出一次猜测的结果（例如 "Too big" 或 "Too small"）。
// - 最终输出猜对的提示或 "Game Over" 后结束程序。
// 
// 【输入样例】
// 58 4
// 70
// 50
// 56
// 58
// 60
// -2
// 
// 【对应输出样例】
// Too big
// Too small
// Too small
// Good Guess!

# include <stdio.h>

int main()
{
    int number = 0;
    int n = 0;
    int guess = 0;
    int cnt = 0;
    
    printf("请输入一个数:");
    scanf("%d %d" , &number , &n);

    do {
        scanf("%d", &guess);
        cnt++;
        if (guess < 0)
        {
            printf("Game Over\n");
        } 
        else if (guess < number)
        {
            printf("Too small\n");
        }
        else if (guess > number)
        {
            printf("Too big\n");
        } else if
        {
            if (cnt == 1)
            {
                printf("Bingo!\n");
            } 
            else if (cnt <= 3)
            {
                printf("Lucky You!\n");
            }
            else if (cnt <= n && cnt>3)
            {
                printf("Good Guess!\n");
                break;
            } else 
            {
                printf("Game Over\n");
            }
        }
    } while ( cnt<=n );
        
        
    return 0;
}