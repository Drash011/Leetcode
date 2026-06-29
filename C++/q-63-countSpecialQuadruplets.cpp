#include <iostream>
#include <vector>
using namespace std;

int countQuadruplets(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int a = 0; a < n - 3; a++)
    {
        for (int b = a + 1; b < n - 2; b++)
        {
            for (int c = b + 1; c < n - 1; c++)
            {
                for (int d = c + 1; d < n; d++)
                {
                    if (nums[a] + nums[b] + nums[c] == nums[d])
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

    cout << "Answer = " << countQuadruplets(nums);

    return 0;
}