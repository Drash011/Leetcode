#include <iostream>
#include <vector>
using namespace std;

int smallestIndex(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        int num = nums[i];

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum == i)
            return i;
    }

    return -1;
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

    cout << "Answer = " << smallestIndex(nums);

    return 0;
}