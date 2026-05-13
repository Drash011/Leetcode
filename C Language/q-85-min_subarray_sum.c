#include <stdio.h>

// Program : Minimum Size Subarray Sum
// Example :
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

int minSubArrayLen(int target, int *nums, int numsSize)
{
    int left = 0;
    int sum = 0;
    int minLen = 100000;

    for (int right = 0; right < numsSize; right++)
    {
        sum += nums[right];

        while (sum >= target)
        {
            int len = right - left + 1;

            if (len < minLen)
            {
                minLen = len;
            }

            sum -= nums[left];
            left++;
        }
    }

    if (minLen == 100000)
    {
        return 0;
    }

    return minLen;
}

int main()
{
    
    int n, target;

    printf("Enter size of array :");
    scanf("%d", &n);

    int nums[100000];

    printf("Enter elements :\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter nums[%d] :", i);
        scanf("%d", &nums[i]);
    }

    printf("Enter target :");
    scanf("%d", &target);

    int result = minSubArrayLen(target, nums, n);

    printf("Output : %d\n", result);

    return 0;
}