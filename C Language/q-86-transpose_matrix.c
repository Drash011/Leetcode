#include <stdio.h>

// Program : Transpose Matrix
// Example :
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]

int main()
{
    int row, col;

    printf("Enter rows : ");
    scanf("%d", &row);

    printf("Enter columns : ");
    scanf("%d", &col);

    int array[100][100];
    int transpose[100][100];

    printf("Enter array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter array[%d][%d] :", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nInput array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = array[i][j];
        }
    }

    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}