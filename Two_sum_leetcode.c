// 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

// 你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。

// 你可以按任意顺序返回答案。

 
// 示例 1：

// 输入：nums = [2,7,11,15], target = 9
// 输出：[0,1]
// 解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
// 示例 2：

// 输入：nums = [3,2,4], target = 6
// 输出：[1,2]
// 示例 3：

// 输入：nums = [3,3], target = 6
// 输出：[0,1]
 

// 提示：

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// 只会存在一个有效答案




# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

# define MAXN 1000 

void finder( const int num[],int length,int target ) 
{
    int i,j;

    for (i = 0; i < length; i++)
    {
        long long need_num = (long long)target - num[i];
        for ( j = i + 1; j < length ; j++)
        {
            if ( need_num == num[j] )
            {
                printf("[%d,%d]\n", i, j);
                return;
            }
        }
    }
    printf("no answer\n");
}

static int skip_until(int ch)
{
    int c;
    while ((c = getchar()) != EOF && c != ch);

    return c;
    
}

int main(void)
{
    
    int nums[MAXN];
    int i = 0;
    int target = 0;
    int c,k;

    if (skip_until('[') == EOF)
    {
        fprintf(stderr, "input error : no '[' \n");

        return 1;
    }

    while(scanf("%d", &nums[i]) == 1)
    {
        i++;
        if ( i >= MAXN )
        {
            fprintf( stderr , "too many numbers (max %d)\n", MAXN);
            return 1;
        }
    

        do
        {
            c = getchar();
        } while ( c != EOF && isspace(c));

        if( c == ']' || c == EOF)
            break;
    }

    if ( skip_until('=') == EOF || scanf("%d",&target) != 1)
    {
        fprintf( stderr , "input error: no target\n");
        return 1;
    }
    

    // printf("nums = [");
    // for ( k = 0; k < i; k++)
    // {
    //     printf( "%d%s" , nums[k] , (k + 1 < i) ? "," : "");
    //     printf("],target = %d\n", target);
    // }
    

    finder( nums , i , target );
    
    return 0;
}