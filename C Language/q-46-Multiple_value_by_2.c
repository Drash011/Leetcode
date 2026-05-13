#include <stdio.h>
#include <stdlib.h>

int findFinalValue(int *nums, int numsSize, int original)
{
    int found = 1;

    while (found)
    {
        found = 0;

        for (int i = 0; i < numsSize; i++)
        {
            if (nums[i] == original)
            {
                original *= 2;
                found = 1;
                break;
            }
        }
    }

    return original;
}

int main()
{
    int n, original;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    printf("\nEnter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    printf("\nEnter original value: ");
    scanf("%d", &original);

    int result = findFinalValue(nums, n, original);

    printf("\nFinal Value: %d\n", result);

    free(nums);
    return 0;
}