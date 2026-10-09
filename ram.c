# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    void *p = 0;
    int cnt = 0;
    while((p = malloc(1024*1024*1024)))
    {
        cnt++;
    }
    printf("%dGB",cnt);

    free(p);

    return 0;
    
}