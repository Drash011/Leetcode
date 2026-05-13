#include <stdio.h>

int main()
{

    int n;

    printf("Enter number of elements :");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter array's elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a [%d]:", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int rev = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = rev;
    }

    printf("\nReversed Array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}