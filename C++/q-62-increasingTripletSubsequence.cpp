#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    int first = INT_MAX;
    int second = INT_MAX;

    for (int num : nums)
    {
        if (num <= first)
        {
            first = num;
        }
        else if (num <= second)
        {
            second = num;
        }
        else
        {
            return true;
        }
    }

    return false;
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

    if (increasingTriplet(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}   