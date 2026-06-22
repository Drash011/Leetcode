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

    int xr = 0;

    for (int i = 0; i < n; i++)
    {
        xr ^= nums[i];
    }

    int diff = xr & (-xr);

    int a = 0;
    int b = 0;

    for (int i = 0; i < n; i++)
    {

        if (nums[i] & diff)
            a ^= nums[i];
        else
            b ^= nums[i];
    }

    cout << "Single Numbers: " << a << " " << b << endl;

    return 0;
}