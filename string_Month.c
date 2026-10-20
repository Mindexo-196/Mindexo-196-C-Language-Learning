#include <stdio.h>
#include <stdlib.h>

void month(int month)
{
    char *En_month[] = 
    {
        "Janauary",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("%s\n" , En_month[month-1]);

}

int main(void)
{
    int i;

    scanf("%d" , &i);

    month(i);

}