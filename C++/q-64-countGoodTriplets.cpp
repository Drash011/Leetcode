#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int countGoodTriplets(vector<int> &arr, int a, int b, int c)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (abs(arr[i] - arr[j]) > a)
                continue;

            for (int k = j + 1; k < n; k++)
            {
                if (abs(arr[j] - arr[k]) <= b &&
                    abs(arr[i] - arr[k]) <= c)
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a, b, c;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    cout << "Answer = " << countGoodTriplets(arr, a, b, c);

    return 0;
}