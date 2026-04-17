#include <stdio.h>
#include <stdlib.h>

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

    int elementSum = 0;
    int digitSum = 0;

    for (int i = 0; i < n; i++)
    {
        elementSum += nums[i];

        int temp = nums[i];
        while (temp > 0)
        {
            digitSum += temp % 10;
            temp /= 10;
        }
    }

    int result = abs(elementSum - digitSum);

    printf("\nDifference: %d\n", result);

    return 0;
}