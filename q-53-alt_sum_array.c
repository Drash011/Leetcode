#include <stdio.h>

// nums[0] - nums[1] + nums[2] - nums[3] = 1 - 3 + 5 - 7 = -4

int alternatingSum(int nums[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            sum += nums[i];
        else
            sum -= nums[i];
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int result = alternatingSum(nums, n);

    printf("Alternating Sum: %d\n", result);

    return 0;
}