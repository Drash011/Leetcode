#include <stdio.h>
#include <stdlib.h>

int dominantIndex(int *nums, int numsSize)
{
    int max = -1, secondMax = -1;
    int index = -1;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            secondMax = max;
            max = nums[i];
            index = i;
        }
        else if (nums[i] > secondMax)
        {
            secondMax = nums[i];
        }
    }

    if (max >= 2 * secondMax)
        return index;

    return -1;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    printf("\nEnter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int result = dominantIndex(nums, n);

    printf("\nDominant Index: %d\n", result);

    free(nums);
    return 0;
}