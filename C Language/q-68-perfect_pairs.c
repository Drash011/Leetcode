#include <stdio.h>
#include <stdlib.h>

/*
    Program: Number of Perfect Pairs
    - Takes array input using scanf
    - Converts to absolute values
    - Sorts array
    - Counts valid pairs using two-pointer logic
*/

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int nums[100];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
            nums[i] = -nums[i];
    }

    qsort(nums, n, sizeof(int), compare);

    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        int left = i + 1;

        while (left < n && (long long)nums[left] <= 2LL * nums[i])
        {
            left++;
        }

        count += (left - i - 1);
    }

    printf("Perfect pairs: %lld\n", count);

    return 0;
}