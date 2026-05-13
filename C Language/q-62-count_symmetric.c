#include <stdio.h>

// Example:
// Input: low = 1, high = 100
// Output: 9
// Explanation: There are 9 symmetric integers between 1 and 100: 11, 22, 33, 44, 55, 66, 77, 88, and 99.

int isSymmetric(int num)
{
    int digits[10], size = 0;

    while (num > 0)
    {
        digits[size++] = num % 10;
        num /= 10;
    }

    if (size % 2 != 0)
        return 0;

    int half = size / 2;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < half; i++)
    {
        sum1 += digits[i];
    }

    for (int i = half; i < size; i++)
    {
        sum2 += digits[i];
    }

    return sum1 == sum2;
}

int main()
{
    int low, high;
    int count = 0;

    printf("Enter low numbers : ");
    scanf("%d", &low);

    printf("Enter high numbers : ");
    scanf("%d", &high);

    printf("Symmetric numbers: ");

    for (int i = low; i <= high; i++)
    {
        if (isSymmetric(i))
        {
            printf("%d  ", i);
            count++;
        }
    }

    printf("\nTotal count: %d\n", count);

    return 0;
}