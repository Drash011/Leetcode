#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size: ";
    cin >> n;

    int nums[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int ans[n];

    for (int i = 0; i < n; i++)
    {

        ans[i] = -1;

        for (int j = 1; j < n; j++)
        {

            int idx = (i + j) % n;

            if (nums[idx] > nums[i])
            {
                ans[i] = nums[idx];
                break;
            }
        }
    }

    cout << "Answer: ";

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}