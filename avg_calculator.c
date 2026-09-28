# include<stdio.h>
// int main()
// {
//     int x = 0;
//     int total = 0;
//     int counter = 0;

//     printf("请输入计算的正整数\n结束时输入\"-1\"停止:\n");
//     scanf("%d" , &x);

//     while ( x != -1)
//     {
//         counter++;
//         total = total + x;
//         scanf("%d" , &x);
//     }

//     if ( counter > 0)
//     {
//         double avg = total / counter;
//         printf("一共%d个数字,平均数为%lf" , counter , avg);
//     } else {
//         printf("起始值不可为-1");
//     }
    
//     return 0;
// }

//加入数组

int main()
{
    int x = 0;
    int total = 0;
    int counter = 0;
    int number[100]; //定义数组


    printf("请输入计算的正整数\n结束时输入\"-1\"停止:\n");
    scanf("%d" , &x);

    while ( x != -1)
    {
        number[counter] = x; //数组赋值
        counter++;
        total = total + x;
        scanf("%d" , &x);
    }

    if ( counter > 0)
    {
        double avg = total / counter;
        printf("一共%d个数字,平均数为%lf" , counter , avg);
        int i = 0;
        for ( i = 0; i < counter; i++) //遍历数组
        {
            if (number[i] > total/counter) //使用数组元素
            {
                printf("%d\n", number[i]);
            }
            
        }
        
    } else {
        printf("起始值不可为-1");
    }
    
    return 0;
}