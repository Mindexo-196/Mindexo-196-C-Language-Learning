# include <stdio.h>

void min_max(int a[],int length,int *p_min,int *p_max)
{
    int i;
    *p_min = *p_max = a[0];
    for( i = 0 ; i < length ; i++)
    {
        if( a[i] < *p_min )
        {
            *p_min = a[i];
        }
        if( a[i] > *p_max )
        {
            *p_max = a[i];
        }
    }

}

int main(void)
{
    int a[] = {9,8,7,6,5,5,44,3,2,1,11,0,112,22,231,44,11,2313,666,7};

    int min,max;

    min_max( a , sizeof(a)/sizeof(a[0]) , &min , &max);
    
    printf("min = %d, max = %d", min , max);


    return 0;



}