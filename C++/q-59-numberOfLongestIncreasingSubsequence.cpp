#include <iostream>
#include <vector>
using namespace std;

int findNumberOfLIS(vector<int> &nums)
{
    int n = nums.size();

    vector<int> length(n, 1);
    vector<int> count(n, 1);

    int maxLength = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i])
            {
                if (length[j] + 1 > length[i])
                {
                    length[i] = length[j] + 1;
                    count[i] = count[j];
                }
                else if (length[j] + 1 == length[i])
                {
                    count[i] += count[j];
                }
            }
        }

        if (length[i] > maxLength)
            maxLength = length[i];
    }

    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if (length[i] == maxLength)
            answer += count[i];
    }

    return answer;
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

    cout << "Number of Longest Increasing Subsequences = "
         << findNumberOfLIS(nums);

    return 0;
}