# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main()
{
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int guess = 0;

    printf ("已生成0到100之间的随机数\n");

    do{
        count++;
        printf ("请输入猜数:\n");
        scanf ("%d" , &guess);
        if ( guess > number )
        {
            printf("大了\n");
        } else if ( guess < number )
        {
            printf("小了\n");
        }
    } while ( guess != number );
    printf ("正确,共计%d次" , count );
    
    return 0;
}