#include <stdio.h>

// Example:
// Input: left = 1, right = 22
// Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

int isSelfDividing(int num)
{
    int n = num;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit == 0 || num % digit != 0)
        {
            return 0;
        }

        n /= 10;
    }

    return 1;
}

int main()
{
    int left, right;

    printf("Enter left number range: ");
    scanf("%d", &left);

    printf("Enter right number range: ");
    scanf("%d", &right);

    int result[1000];
    int k = 0;

    for (int i = left; i <= right; i++)
    {
        if (isSelfDividing(i))
        {
            result[k++] = i;
        }
    }

    printf("Self-dividing numbers: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}