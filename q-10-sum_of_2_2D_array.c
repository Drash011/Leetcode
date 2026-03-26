#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Number of Rows of 1st Array :");
    scanf("%d", &row);

    printf("Enter Number of Columns of 1st Array :");
    scanf("%d", &col);

    int a[row][col], b[row][col], sum[row][col];

    // 1st Array
    printf("\n\n1st Array Input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }


    // 2nd Array
    printf("\n\n2nd Array Input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum [i] [j] = a [i] [j] + b [i] [j];
        }
        printf("\n");
    }

    printf("\n\n1st Array Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", a [i] [j]);
        }
        printf("\n");
    }

    printf("\n\n2nd Array Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", b [i] [j]);
        }
        printf("\n");
    }

    printf("\n\nSum of 2 Arrays\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", sum [i] [j]);
        }
        printf("\n");
    }
    
}