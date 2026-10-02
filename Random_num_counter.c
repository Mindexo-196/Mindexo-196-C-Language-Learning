# include <stdio.h>

int main(void)
{
    const int max= 10; //数组大小 const代表只读变量
    int number[max]; //定义数组
    // int number[max] = {0}  更为投巧的初始化
    int input = 0;
    int i = 0;
    int all_num = 0;

    printf("请输入0到9的整数,输入-1结束:");

    for (i=0;i<max;i++) //初始化数组
    {
        number[i]=0; //遍历并赋值0
    }

    while (scanf("%d", &input) == 1 && input != -1)
    {
        if ( input >= 0 && input<=9 )
        {
            number[input] ++;  //数组参与运算
            all_num++;
        }
    }

    for (i=0;i<max;i++)  //遍历数组输出
    {
        printf("%d:%d\n",i,number[i]);
    }
    
    int length = sizeof (number)/sizeof (number[0]); //数组长度计算

    printf("length = %d\n",length);
    printf("all_num = %d",all_num);

    return 0;

}