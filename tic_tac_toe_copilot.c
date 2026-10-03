#include <stdio.h>

#define EMPTY 0
#define X 1
#define O 2

void print_board(int board[][3])
{
    int i, j;

    printf("\nCurrent board:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] == EMPTY)
            {
                printf("- ");
            }
            else if (board[i][j] == X)
            {
                printf("X ");
            }
            else
            {
                printf("O ");
            }
        }
        printf("\n");
    }
    printf("\nPosition guide:\n");
    printf("0 0 | 0 1 | 0 2\n");
    printf("1 0 | 1 1 | 1 2\n");
    printf("2 0 | 2 1 | 2 2\n\n");
}

int check_winner(int board[][3])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (board[i][0] != EMPTY && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }

        if (board[0][i] != EMPTY && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    if (board[0][0] != EMPTY && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return board[0][0];
    }

    if (board[0][2] != EMPTY && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return board[0][2];
    }

    return EMPTY;
}

int main(void)
{
    int board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int row, col;
    int current = X;
    int step = 0;
    int winner = EMPTY;

    printf("Tic-Tac-Toe\n");
    printf("Use row and column values from 0 to 2.\n");
    printf("Example: 0 0 means row 0, col 0\n\n");

    while (1)
    {
        print_board(board);

        printf("Player %d input row and column: ", current == X ? X : O);
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            printf("Invalid position! Please enter numbers between 0 and 2.\n\n");
            continue;
        }

        if (board[row][col] != EMPTY)
        {
            printf("This position is occupied! Please choose another one.\n\n");
            continue;
        }

        board[row][col] = current;
        step++;

        winner = check_winner(board);
        if (winner != EMPTY)
        {
            print_board(board);
            printf("Player %d WIN!\n", winner == X ? X : O);
            break;
        }

        if (step == 9)
        {
            print_board(board);
            printf("Draw!\n");
            break;
        }

        current = (current == X) ? O : X;
    }

    return 0;
}