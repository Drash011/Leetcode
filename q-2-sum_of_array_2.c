#include <stdio.h>

main ()
{
    int size;

    printf("Enter number elements :");
    scanf("%d", &size);

    int a[size], b[size];
    int sum[size];

    printf("\n\nArray 01 Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }


    printf("\n\nArray 02 Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    printf("\n\n Array 01 and Array 02 Sum \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
    
    
}