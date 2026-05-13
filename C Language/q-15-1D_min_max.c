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

    int max = a[0], min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\nMaximum number of Array Elements: %d\n", m0kax);

    printf("\n\nMinimum number of Array Elements:   %d\n", min);
}
