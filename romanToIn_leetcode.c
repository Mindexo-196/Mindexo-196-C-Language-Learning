#include <stdio.h>

int romanToInt(char* s)
{

    int length = 0;
    while ( s[length] != '\0' )
    {
        length++;
    }
  

    char a,b;
    int num = 0;

    for(int i = 0 ; i < length ; i++)
    {
        a = s[i];
        b = (i + 1 < length) ? s[i + 1] : '\0';

        if( a == 'C' && (b == 'D' || b == 'M'))
        {
            num -= 100;
        }
        else if( a == 'X' && (b == 'L' || b == 'C'))
        {
            num -= 10;
        }
        else if( a == 'I' && (b == 'V' || b == 'X'))
        {
            num -= 1;
        }
        else
        {
            if (a == 'M')       num += 1000;
            else if (a == 'D')  num += 500;
            else if (a == 'C')  num += 100;
            else if (a == 'L')  num += 50;
            else if (a == 'X')  num += 10;
            else if (a == 'V')  num += 5;
            else if (a == 'I')  num += 1;
        }

    }

    return num;
    
}

int main(void)
{
    char s[100];

    if (scanf("%99s", s) != 1)
        return 1;

    printf("%d\n", romanToInt(s));

    return 0;
}