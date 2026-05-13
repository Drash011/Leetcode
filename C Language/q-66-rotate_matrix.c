#include <stdio.h>

/*
    Program: Rotate Matrix 90 Degrees Clockwise
    Description:
    - Takes an n x n matrix as input using scanf
    - Rotates the matrix in-place
    - Uses transpose + row reverse method
*/

int main()
{
    int n;
    printf("Enter size of matrix :");
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter matrix[%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nInput:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("\nTranspose Output:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }

    printf("\nRotated Output:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}