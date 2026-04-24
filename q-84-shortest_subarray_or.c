#include <stdio.h>

// Program : Shortest Subarray With OR at Least K I
// Example :
// Input: nums = [1,2,3], k = 2
// Output: 1
// Explanation:
// The subarray [3] has OR value of 3. Hence, we return 1.
// Note that [2] is also a special subarray.

int minimumSubarrayLength(int *nums, int numsSize, int k)
{
    int minLen = 100;

    for (int i = 0; i < numsSize; i++)
    {
        int currentOR = 0;

        for (int j = i; j < numsSize; j++)
        {
            currentOR = currentOR | nums[j];

            if (currentOR >= k)
            {
                int len = j - i + 1;
                if (len < minLen)
                {
                    minLen = len;
                }
                break;
            }
        }
    }

    if (minLen == 1000)
    {
        return -1;
    }

    return minLen;
}

int main()
{
    int n, k;

    printf("Enter size of array :");
    scanf("%d", &n);

    int nums[50];

    printf("Enter elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    printf("Enter k :");
    scanf("%d", &k);

    int result = minimumSubarrayLength(nums, n, k);

    printf("Output : %d\n", result);

    return 0;
}