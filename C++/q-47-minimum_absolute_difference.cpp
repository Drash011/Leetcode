#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[100000];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int x;

    cout << "Enter x: ";
    cin >> x;

    int ans = 2147483647;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + x; j < n; j++)
        {

            int diff = nums[i] - nums[j];

            if (diff < 0)
                diff = -diff;

            if (diff < ans)
                ans = diff;
        }
    }

    cout << "\nMinimum Absolute Difference = " << ans;

    return 0;
}