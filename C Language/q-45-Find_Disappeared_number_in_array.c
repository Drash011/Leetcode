#include <stdio.h>
#include <stdlib.h>

int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0)
            nums[index] = -nums[index];
    }

    int *result = (int *)malloc(sizeof(int) * numsSize);
    int k = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > 0)
        {
            result[k++] = i + 1;
        }
    }

    *returnSize = k;
    return result;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    printf("\nEnter elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int *result = findDisappearedNumbers(nums, n, &returnSize);

    printf("\nMissing numbers:\n");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }

    free(nums);
    free(result);

    return 0;
}