#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter array size: ";
    cin >> n;

    int nums[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        int freq = 0;

        for (int j = i; j < n; j++)
        {

            if (nums[j] == target)
                freq++;

            int len = j - i + 1;

            if (freq > len / 2)
                count++;
        }
    }

    cout << "Count = " << count << endl;

    return 0;
}