#include <iostream>
#include <vector>
using namespace std;

int unequalTriplets(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] != nums[j] &&
                    nums[i] != nums[k] &&
                    nums[j] != nums[k])
                {
                    count++;
                }
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

    cout << "Answer = " << unequalTriplets(nums);

    return 0;
}