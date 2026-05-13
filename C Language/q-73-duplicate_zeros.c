#include <stdio.h>

// Program: Duplicate Zeros
// Example:
// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

void duplicateZeros(int arr[], int arrSize)
{
    int zeros = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
            zeros++;
    }

    int i = arrSize - 1;
    int j = arrSize + zeros - 1;

    while (i >= 0)
    {
        if (j < arrSize)
        {
            arr[j] = arr[i];
        }

        if (arr[i] == 0)
        {
            j--;
            if (j < arrSize)
            {
                arr[j] = 0;
            }
        }

        i--;
        j--;
    }
}

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[100];

    printf("\nEnter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] :", i);
        scanf("%d", &arr[i]);
    }

    duplicateZeros(arr, n);

    printf("\nResult array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");

    return 0;
}