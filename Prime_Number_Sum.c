#include <stdio.h>

int is_prime(int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; (long long)i * i <= n; i += 2)
    {
        if (n % i == 0) return 0;
        return 1;
    }
}

int main(void)
{
    int down, up, sum = 0;

    if (scanf("%d %d", &down, &up) != 2) 
    {
        return 1;
    }

    for (int cnt = down; cnt <= up; cnt++)
    {
        if (is_prime(cnt)) 
        {
            sum += cnt;
        }
    }

    printf("%d\n", sum);
    
    return 0;
}