#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int array[10] = {0};
    int temp = 0;
    int max,max_idx = 0;
    int min,min_idx = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    max = array[0];
    min = array[0];

    for(int j = 0; j < 10; j++)
    {

        if(array[j] > max)
        {
            max = array[j];
            max_idx = j;
        }
        if(array[j] < min)
        {
            min = array[j];
            min_idx = j;
        }

    }

    temp = array[min_idx];
    array[min_idx] = array[max_idx];
    array[max_idx] = temp;

    printf("%d %d %d %d\n",max,min,max_idx,min_idx);

    for (int k = 0; k < 10; k++)
    {
        printf("%d ", array[k]);
    }

    
    return 0;
}