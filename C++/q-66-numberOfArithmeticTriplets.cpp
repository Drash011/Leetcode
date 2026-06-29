#include <iostream>
#include <vector>
using namespace std;

int arithmeticTriplets(vector<int> &nums, int diff)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (nums[j] - nums[i] != diff)
                continue;

            for (int k = j + 1; k < n; k++)
            {
                if (nums[k] - nums[j] == diff)
                    count++;
            }
        }
    }

    return count;
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

    int diff;

    cout << "Enter difference: ";
    cin >> diff;

    cout << "Answer = " << arithmeticTriplets(nums, diff);

    return 0;
}