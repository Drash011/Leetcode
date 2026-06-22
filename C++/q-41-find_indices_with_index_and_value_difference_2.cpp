#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[100000];

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

    int minIdx = 0;
    int maxIdx = 0;

    int found = 0;

    for (int j = indexDifference; j < n; j++)
    {

        int i = j - indexDifference;

        if (nums[i] < nums[minIdx])
            minIdx = i;

        if (nums[i] > nums[maxIdx])
            maxIdx = i;

        if (nums[j] - nums[minIdx] >= valueDifference)
        {
            cout << "[" << minIdx << ", " << j << "]" << endl;
            found = 1;
            break;
        }

        if (nums[maxIdx] - nums[j] >= valueDifference)
        {
            cout << "[" << maxIdx << ", " << j << "]" << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "[-1, -1]" << endl;

    return 0;
}