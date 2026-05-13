#include <stdio.h>
#include <stdlib.h>

// Program: Matrix Cells in Distance Order
// Example:
// Input: rows = 2, cols = 3, rCenter = 1, cCenter = 2
// Output: [[1,2],[0,2],[1,1],[0,1],[1,0],[0,0]]
// Explanation: The distances from (1, 2) to other cells are: [0,1,1,2,2,3]
// There are other answers that would also be accepted as correct, such as [[1,2],[1,1],[0,2],[1,0],[0,1],[0,0]].

int rc, cc;

int compare(const void *a, const void *b)
{
    int *p1 = (int *)a;
    int *p2 = (int *)b;

    int d1 = abs(p1[0] - rc) + abs(p1[1] - cc);
    int d2 = abs(p2[0] - rc) + abs(p2[1] - cc);

    return d1 - d2;
}

int main()
{
    int rows, cols, rCenter, cCenter;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of cols: ");
    scanf("%d", &cols);

    printf("Enter distance from rCenter : ");
    scanf("%d", &rCenter);

    printf("Enter distance from cCenter : ");
    scanf("%d", &cCenter);

    int result[10000][2];
    int k = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[k][0] = i;
            result[k][1] = j;
            k++;
        }
    }

    rc = rCenter;
    cc = cCenter;

    qsort(result, k, sizeof(result[0]), compare);

    printf("Cells in distance order:\n");
    for (int i = 0; i < k; i++)
    {
        printf("[%d,%d] ", result[i][0], result[i][1]);
    }

    printf("\n");

    return 0;
}