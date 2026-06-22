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

    int result = 0;

    for (int i = 0; i < 32; i++)
    {

        int sum = 0;

        for (int j = 0; j < n; j++)
        {

            if ((nums[j] >> i) & 1)
                sum++;
        }

        if (sum % 3)
            result |= (1 << i);
    }

    cout << "Single Number = " << result << endl;

    return 0;
}