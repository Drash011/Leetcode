#include <stdio.h>

/*
    Program: Check if Matrix Can Be Obtained by Rotation
    - Takes n, matrix (mat), and target matrix
    - Rotates mat up to 4 times (90° each)
    - Prints true or false
*/

void rotate(int n, int mat[n][n])
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            int temp = mat[i][j];
            mat[i][j] = mat[i][n - j - 1];
            mat[i][n - j - 1] = temp;
        }
    }
}

int isEqual(int n, int mat[n][n], int target[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != target[i][j])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n, k;
    printf("Enter matrix size : ");
    scanf("%d", &n);

    int mat[n][n], target[n][n];

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter mat[%d][%d] :", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter target matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter target[%d][%d] :", i, j);
            scanf("%d", &target[i][j]);
        }
    }

    for (int k = 0; k < 4; k++)
    {
        if (isEqual(n, mat, target))
        {
            printf("true\n");
            return 0;
        }
        rotate(n, mat);
    }

    printf("false\n");
    return 0;
}