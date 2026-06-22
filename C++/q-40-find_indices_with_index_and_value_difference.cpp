#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int indexDifference, valueDifference;

    cout << "Enter indexDifference: ";
    cin >> indexDifference;

    cout << "Enter valueDifference: ";
    cin >> valueDifference;

    int found = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            int indexDiff = i > j ? i - j : j - i;
            int valueDiff = nums[i] > nums[j]
                                ? nums[i] - nums[j]
                                : nums[j] - nums[i];

            if (indexDiff >= indexDifference &&
                valueDiff >= valueDifference)
            {

                cout << "[" << i << ", " << j << "]" << endl;
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        cout << "[-1, -1]" << endl;

    return 0;
}