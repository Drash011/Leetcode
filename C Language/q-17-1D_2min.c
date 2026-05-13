#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray Input\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter element a [%d] : ", i);
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int min2 = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
            min = a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] != min)
        {
            min2 = a[i];
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] < min2 && a[i] > min)
            min2 = a[i];
    }


    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }


    printf("\n\nMinimum number of Array Elements: %d\n", min);
    printf("\nSecond Minimum number of Array Elements: %d\n", min2);
}