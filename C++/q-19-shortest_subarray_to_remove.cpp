#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0;

    while (left + 1 < n && arr[left] <= arr[left + 1])
        left++;

    if (left == n - 1)
    {
        cout << "0" << endl;
        return 0;
    }

    int right = n - 1;

    while (right > 0 && arr[right - 1] <= arr[right])
        right--;

    int ans;

    if (n - left - 1 < right)
        ans = n - left - 1;
    else
        ans = right;

    int i = 0;
    int j = right;

    while (i <= left && j < n)
    {

        if (arr[i] <= arr[j])
        {

            if (j - i - 1 < ans)
                ans = j - i - 1;

            i++;
        }
        else
        {
            j++;
        }
    }

    cout << "Shortest Subarray Length = " << ans << endl;

    return 0;
}