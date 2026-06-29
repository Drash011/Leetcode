#include <iostream>
#include <vector>
using namespace std;

int findLengthOfLCIS(vector<int> &nums)
{
    int maxLength = 1;
    int count = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > nums[i - 1])
            count++;
        else
            count = 1;

        if (count > maxLength)
            maxLength = count;
    }

    return maxLength;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Longest Continuous Increasing Subsequence Length = "
         << findLengthOfLCIS(nums);

    return 0;
}