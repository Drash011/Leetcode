#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 1;

    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("\nEnter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int result[n * 10];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = nums[i];
        int digits[10], size = 0;

        while (temp > 0)
        {
            digits[size++] = temp % 10;
            temp /= 10;
        }

        for (int j = size - 1; j >= 0; j--)
        {
            result[k++] = digits[j];
        }
    }

    printf("\nSeparated digits: \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", result[i]);
    }

    printf("\n");

    return 0;
}