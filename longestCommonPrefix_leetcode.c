#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) 
{
    if (strs == NULL || strsSize == 0)
    {
        char* empty = malloc(1);
        empty[0] = '\0';
        return empty;
    }
    
    size_t len_of_0 = strlen(strs[0]);
    size_t prefixlen = 0;

    for(size_t i = 0 ; i < len_of_0 ; i++)
    {
        char c = strs[0][i];

        for(int j = 0 ; j < strsSize ; j++)
        {
            if(i >= strlen(strs[j]) || strs[j][i] != c)
            {
                goto done;
            }
        }
        prefixlen++;
    }

    done:;

    char* res = (char*)malloc(prefixlen + 1);
    memcpy(res , strs[0] , prefixlen);
    res[prefixlen] = '\0';
    return res;
}


int main(void)
{
    int n;
    char buf[201];

    while (scanf("%d", &n) == 1 && n > 0) 
    {
        char** strs = (char**)malloc(sizeof(char*) * n);

        if (strs == NULL) 
        {
            fprintf(stderr, "malloc failed\n"); return 1; 
        }

        for (int i = 0; i < n; i++) 
        {
            if (scanf("%200s", buf) != 1)
            {
                fprintf(stderr, "输入不足 %d 个串，退出\n", n);

                for (int k = 0; k < i; k++)
                {
                    free(strs[k]);
                }

                free(strs);

                return 1;
            }

            strs[i] = (char*)malloc(strlen(buf) + 1);

            if (strs[i] == NULL) 
            {
                fprintf(stderr, "malloc failed\n"); return 1;
            }

            strcpy(strs[i], buf);

        }


        char* ans = longestCommonPrefix(strs, n);

        if (ans)
        {
            printf("\"%s\"\n", ans);
            free(ans);
        }

        for (int i = 0; i < n; i++)
        {
            free(strs[i]);
        }

        free(strs);
    }

    return 0;
}