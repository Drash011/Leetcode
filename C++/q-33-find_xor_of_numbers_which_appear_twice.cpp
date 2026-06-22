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

    int freq[51] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[nums[i]]++;
    }

    int ans = 0;

    for (int i = 1; i <= 50; i++)
    {

        if (freq[i] == 2)
            ans ^= i;
    }

    cout << "XOR = " << ans << endl;

    return 0;
}