#include <stdio.h>

// Program : Projection Area of 3D Shapes
// Example:
// Input: grid = [[1,2],[3,4]]
// Output: 17
// Explanation: Here are the three projections ("shadows") of the shape made with each axis-aligned plane.

int main()
{
    int n;
    printf("Enter size of n :");
    scanf("%d", &n);

    int grid[50][50];

    printf("Enter Elements :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter grid[%d][%d] :", i, j);
            scanf("%d", &grid[i][j]);
        }
    }

    int xy = 0;
    int yz = 0;
    int zx = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] > 0)
            {
                xy++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int rowMax = 0;
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] > rowMax)
            {
                rowMax = grid[i][j];
            }
        }
        yz += rowMax;
    }

    for (int j = 0; j < n; j++)
    {
        int colMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (grid[i][j] > colMax)
            {
                colMax = grid[i][j];
            }
        }
        zx += colMax;
    }

    int total = xy + yz + zx;

    printf("Projection Area: %d\n", total);

    return 0;
}