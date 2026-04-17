#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int *result = (int *)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}

int main()
{
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int returnSize;
    int *result = twoSum(nums, n, target, &returnSize);

    if (result != NULL)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);
    }
    else
    {
        printf("No solution found\n");
    }

    free(nums);
    return 0;
}