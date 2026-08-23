#include<stdio.h>

int main()
{
    float x = 0.0;
    printf("请输入x的值:");
    scanf("%f", &x);

    int type = 0;

    if ( x > 0)
    {
        type = 1;
    } else if ( x == 0)
    {
        type = 2;
    } 
    
    double out = 0.0;

    switch ( type )
    {
    case 1:
        out = 2 * x;
        break;

    case 2:
        out = 0;
        break;
    
    default:
        out = -1;
        break;
    }
    
    printf("函数f(x)=%lf\n" , out);

    return 0;
}