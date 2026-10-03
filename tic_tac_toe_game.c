#include <stdio.h>

int check_row(int board[][3], int size)
{
    int result = -1;
    int num_O;
    int num_X;
    int a, b;

    for (a = 0; a < size && result == -1; a++)
    {
        num_O = 0;
        num_X = 0;

        for (b = 0; b < size; b++)
        {
            if (board[a][b] == 1)
            {
                num_X++;
            }
            else
            {
                num_O++;
            }
        }

        if (num_O == size)
        {
            result = 0;
        }
        else if (num_X == size)
        {
            result = 1;
        }
    }

    return result;
}


int check_column(int board[][3], int size)
{
    int result = -1;
    int num_O;
    int num_X;
    int a, b;

    for (b = 0; b < size && result == -1; b++)
    {
        num_O = 0;
        num_X = 0;

        for (a = 0; a < size; a++)
        {
            if (board[a][b] == 1)
            {
                num_X++;
            }
            else
            {
                num_O++;
            }
        }

        if (num_O == size)
        {
            result = 0;
        }
        else if (num_X == size)
        {
            result = 1;
        }
    }

    return result;
}


int check_diagonal(int board[][3], int size)
{
    int result = -1;
    int num_O = 0;
    int num_X = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (board[i][i] == 1)
        {
            num_X++;
        }
        else
        {
            num_O++;
        }
    }

    if (num_O == size)
    {
        result = 0;
    }
    else if (num_X == size)
    {
        result = 1;
    }

    if (result == -1)
    {
        num_O = 0;
        num_X = 0;

        for (i = 0; i < size; i++)
        {
            if (board[i][size - i - 1] == 1)
            {
                num_X++;
            }
            else
            {
                num_O++;
            }
        }

        if (num_O == size)
        {
            result = 0;
        }
        else if (num_X == size)
        {
            result = 1;
        }
    }

    return result;
}


int main(void)
{
    int size = 3;
    int board[size][size];

    int i, j;
    int result = -1;
    int cnt = 0;

    printf("input in\nrow\ncolumn\n");
    printf("\nX turn\n\n");

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("row %d column %d: ", j, i);

            scanf("%d", &board[i][j]);

            cnt++;

            if (cnt == 2)
            {
                cnt = 0;
                printf("\nchange turn\n\n");
            }
        }
    }

    result = check_row(board, size);

    if (result == -1)
    {
        result = check_column(board, size);
    }

    if (result == -1)
    {
        result = check_diagonal(board, size);
    }

    switch (result)
    {
        case 0:
            printf("O WIN");
            break;

        case 1:
            printf("X WIN");
            break;

        default:
            printf("Nobody WIN");
            break;
    }

    return 0;
}