#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char s[] = "hello";
    char *p = strchr(s, 'l');
    char *t = (char*)malloc(strlen(p)+1);

    strcpy(t, p);

    printf("%s\n", p);
    free(t);

    return 0;
}