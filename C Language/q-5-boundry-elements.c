#include <stdio.h>

main()
{
    int array[5][5];
    int sum = 0;

    printf("\n\nEnter array's elements :\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nBoundry Output\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 5 - 1 || j == 5 - 1)
                printf("%d ", array[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 5 - 1 || j == 5 - 1)
                sum += array [i] [j];
        }
    }
    
}