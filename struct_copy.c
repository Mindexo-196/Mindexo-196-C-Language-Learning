#include <stdio.h>

struct date
{
    int month;
    int year;
    int day;
};

int main(void)
{
    struct date today;

    today = (struct date){07,2007,31};

    struct date day;

    day = today;
    day.year = 2008;

    printf("today:%i-%i-%i\n", today.year, today.month, today.day);
    printf(" day:%i-%i-%i\n", day.year, day.month, day.day);

    

    return 0;
}