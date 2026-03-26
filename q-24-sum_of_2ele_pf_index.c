#include <stdio.h>

main()
{
    int a[50], size, n;

    printf("Enter size of array : ");
    scanf("%d", &size);

    printf("Enter elements :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &a[i]);
    }

    printf("Enter sum of n : ");
    scanf("%d", &n);

    printf("\nindex of sum pair :\n", n);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] + a[j] == n)
            {
                printf("(%d, %d)\n", i, j);
            }
        }
    }
}