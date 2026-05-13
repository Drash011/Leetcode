#include <stdio.h>

// Program :  Make Array Elements Equal to Zero
// Example:
// Input: nums = [1,0,2,0,3]
// Output: 2

#define MAX 100

int simulate(int nums[], int n, int start, int dir)
{
    int temp[MAX];

    for (int i = 0; i < n; i++)
    {
        temp[i] = nums[i];
    }

    int curr = start;

    while (curr >= 0 && curr < n)
    {
        if (temp[curr] == 0)
        {
            curr += dir;
        }
        else
        {
            temp[curr]--;
            dir = -dir;
            curr += dir;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] != 0)
            return 0;
    }

    return 1;
}

int countValidSelections(int nums[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            if (simulate(nums, n, i, -1))
                count++;
            if (simulate(nums, n, i, 1))
                count++;
        }
    }

    return count;
}

int main()
{
    int n;
    int nums[MAX];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    int result = countValidSelections(nums, n);
    printf("Output: %d\n", result);

    return 0;
}