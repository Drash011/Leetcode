#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[1000];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int key, k;

    cout << "Enter key: ";
    cin >> key;

    cout << "Enter k: ";
    cin >> k;

    cout << "K-Distant Indices: ";

    for (int i = 0; i < n; i++)
    {

        bool found = false;

        for (int j = 0; j < n; j++)
        {

            int diff = i - j;
            if (diff < 0)
                diff = -diff;

            if (nums[j] == key && diff <= k)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << i << " ";
    }

    return 0;
}