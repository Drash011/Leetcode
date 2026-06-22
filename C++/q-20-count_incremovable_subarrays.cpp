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

    int count = 0;

    for (int l = 0; l < n; l++)
    {

        for (int r = l; r < n; r++)
        {

            int temp[n];
            int k = 0;

            for (int i = 0; i < l; i++)
                temp[k++] = nums[i];

            for (int i = r + 1; i < n; i++)
                temp[k++] = nums[i];

            int ok = 1;

            for (int i = 1; i < k; i++)
            {

                if (temp[i] <= temp[i - 1])
                {
                    ok = 0;
                    break;
                }
            }

            if (ok)
                count++;
        }
    }

    cout << "Count = " << count << endl;

    return 0;
}