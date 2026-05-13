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

    int max = a[0], max2 = max;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max2 && a[i] < max)
        {
            max2 = a[i];
        }   
    }    

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }


    printf("\n\nMaximum number of Array Elements: %d\n", max);
    printf("\nSecond Maximum number of Array Elements: %d\n", max2);

}