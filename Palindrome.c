# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

#define bool  _Bool
#define true  1
#define false 0

bool isPalindrome(int x)
{
    if (x < 0 )
    {
        return false;
    }
    

    int *digits = (int *)malloc(12 * sizeof(int));

    if ( digits == NULL )
    {
        return false;
    }


    int x_cal = x;
    int count = 0;


   while (x_cal > 0)
    {
        digits[count] = x_cal % 10;   
        x_cal /= 10;              
        count++;
    }


    int result = true;

    for ( int i = 0; i < count/2 ; i++)
    {
        if ( digits[i] != digits[ count-1-i ])
        {
            result = false;
            break;
        }
    }

    free( digits );
    digits = NULL;

    return result;

}

int main(void)
{
    int x;

    scanf( "%d" , &x ); 

    printf( "%s\n", isPalindrome(x) ? "true" : "false");

    return 0;        
}