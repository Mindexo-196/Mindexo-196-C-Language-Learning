# include<stdio.h>

int main()
{
    int n;

    printf("请输入正整数n值:");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("n值只能为正整数,请重新运行程序");
    }
    double sign = 1.0;
    double f_n = 0.0;
    
    //int i = 1;
    for (int i = 1; i <= n; i++)
    {
        //f_n = sign/i + f_n;
        //sign = -sign; //周期正负互换

        if ( i%2 == 0)
        {
            f_n = 1.0/-i + f_n;
        } else
        {
            f_n = 1.0/i + f_n;
        }
        
    } //交错调和级数
    

    /*while ( i <= n )
    {
        f_n = 1.0/i + f_n;
        i++;
    }*/ //调和数公式
    
    printf("f(%d)=%lf",n , f_n);
    return 0;
}