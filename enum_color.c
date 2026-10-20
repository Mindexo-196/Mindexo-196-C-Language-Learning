#include <stdio.h>

enum COLOR {RED = 2, YELLOW = 9, GREEN = 11, NumCOLORS};        //类型为int，从0开始

int main(void)
{
    printf("%d %d %d", RED, YELLOW, GREEN);
}