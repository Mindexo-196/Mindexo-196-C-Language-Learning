# include<stdio.h>

int main()
{
    double money_in = 0;
    int five = 0;
    int two = 0;

    printf("请输入金额(单位为元,精确到小数点后1位):");
    scanf("%lf", &money_in);

    // 关键修复：加上 0.5 以防止浮点数截断造成的误差。
    // 将“元”转换为总“角”数
    int total = money_in *10 + 0.5;

    //five = total/5;
    //total = total%5;

    //two = total/2;
    //total = total%2;
    
    //printf("可换算为%d个5角 %d个2角 %d个1角" , five , two , total);

    for ( int ichi = 0 ; ichi <= total; ichi++)
    {
        for (int ni = 0; ni <= total/2; ni++)
        {
            for (int go = 0; go <=total/5; go++)
            {
                if ( ichi + ni*2 + go*5 == total)
                {
                    printf("可换算为%d个5角 %d个2角 %d个1角\n", go , ni , ichi);
                    //goto out; //直接跳出多层嵌套循环
                }
                
            }
            
        }
        
    }
    //感觉可以做减速程序
    //out:

    return 0;
}