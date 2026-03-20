#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray Input\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("\n\nSum of Array Elements: %d\n", sum);

}