#include <stdio.h>
#include <stdlib.h>

char board[3][3];

void XOBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void clearScreen()
{
    system("cls || clear");
}

void printBoard()
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("   %c   ", board[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");
}

int checkWinX()
{
    if (
        (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
        (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
        (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||

        (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
        (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
        (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||

        (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'))
        return 1;

    return 0;
}

int checkWinO()
{
    if (
        (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
        (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
        (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||

        (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
        (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
        (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||

        (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
        (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'))
        return 1;

    return 0;
}

int main()
{
    int i, j, moves = 0;
    char player = 'X';

    XOBoard();

    while (1)
    {

        clearScreen();
        printBoard();

        printf("Player %c turn\n", player);
        printf("Enter row [i](0 - 2) : ");
        scanf("%d", &i);

        printf("Enter column [j](0 - 2): ");
        scanf("%d", &j);

        if (i < 0 || i > 2 || j < 0 || j > 2 || board[i][j] != ' ')
        {
            printf("Invalid move! Press Enter...");
            getchar();
            continue;
        }

        board[i][j] = player;
        moves++;

        if (checkWinX())
        {
            clearScreen();
            printBoard();
            printf("Player X wins!\n");
            break;
        }

        if (checkWinO())
        {
            clearScreen();
            printBoard();
            printf("Player O wins!\n");
            break;
        }

        if (moves == 9)
        {
            clearScreen();
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    return 0;
}