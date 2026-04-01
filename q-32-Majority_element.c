#include <stdio.h>

int main()
{
    int n;

    printf("Enter numbers of elements :");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter array's elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter array [%d]:", i);
        scanf("%d", &array[i]);
    }

    int count = 0;
    int majority;

    for (int i = 0; i < n; i++)
    {
        int count2 = 0;

        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
                count2++;
        }

        if (count2 > count)
        {
            count = count2;
            majority = array[i];
        }
    }

    printf("Majority element is : %d\n", majority);
    printf("Frequency of majority element is : %d\n", count);

    return 0;
}