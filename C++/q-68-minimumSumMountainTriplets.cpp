#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minimumSum(vector<int> &nums)
{
    int n = nums.size();
    int ans = INT_MAX;

    for (int j = 1; j < n - 1; j++)
    {
        int leftMin = INT_MAX;
        int rightMin = INT_MAX;

        for (int i = 0; i < j; i++)
        {
            if (nums[i] < nums[j])
                leftMin = min(leftMin, nums[i]);
        }

        for (int k = j + 1; k < n; k++)
        {
            if (nums[k] < nums[j])
                rightMin = min(rightMin, nums[k]);
        }

        if (leftMin != INT_MAX && rightMin != INT_MAX)
            ans = min(ans, leftMin + nums[j] + rightMin);
    }

    if (ans == INT_MAX)
        return -1;

    return ans;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Answer = " << minimumSum(nums);

    return 0;
}