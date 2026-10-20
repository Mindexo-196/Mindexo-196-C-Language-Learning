#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

struct point
{
    int x;
    int y;
} p1, p2 ;


int main(void)
{   
    struct date today;

    today.month = 07;
    today.day = 31;
    today.year = 2007;

    printf("date : %i-%i-%i \n", today.year, today.month, today.day);


    return 0;
}