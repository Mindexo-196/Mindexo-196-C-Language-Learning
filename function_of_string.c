#include <stdio.h>
#include <string.h>

int main(void)
{
    char line0[] = "Hello";
    char line1[] = "Hello";
    char line2[] = "Hi";
    char line3[] = "Hello world!";

    printf("strlen=%lu\n", (unsigned long)strlen(line1));      //strlen
    printf("sizeof=%lu\n", (unsigned long)sizeof(line2));

    if(strcmp(line0, line1) == 0)
    {
        printf("line0 == line1 \n");            //strcmp
    }

    printf("%d\n", strcmp(line2, line1));
    printf("%d\n", strcmp(line1, line3));

    //strcpy
    //char* strcpy(char *restrict dst, const char *restrict src)
    //前者是目的地 后者是源

    strcpy(line0, line3);

    printf("%s\n", line0);

}