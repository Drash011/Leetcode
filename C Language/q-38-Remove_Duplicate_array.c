#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < numsSize; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = (int *)malloc(n * sizeof(int));

    printf("\nEnter sorted elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("\nNumber of unique elements: %d\n", k);

    printf("\nArray after removing duplicates:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", nums[i]);
    }

    free(nums);
    return 0;
}