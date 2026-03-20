#include <stdio.h>

main ()
{
    int row, col;

    printf("Enter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's column size :");
    scanf("%d", &col);

    int a [row] [col];
    printf("\n\nEnter array's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    int large = 0;
    
    printf("\n\nOutput :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j] > large)
               large = a[i][j];
        }
    }

    printf("The largest element is : %d", large);

}