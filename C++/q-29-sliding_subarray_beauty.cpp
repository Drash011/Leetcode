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

    int k, x;

    cout << "Enter k: ";
    cin >> k;

    cout << "Enter x: ";
    cin >> x;

    cout << "Beauties: ";

    for (int i = 0; i <= n - k; i++)
    {

        int neg[100];
        int size = 0;

        for (int j = i; j < i + k; j++)
        {

            if (nums[j] < 0)
                neg[size++] = nums[j];
        }

        for (int a = 0; a < size - 1; a++)
        {
            for (int b = a + 1; b < size; b++)
            {

                if (neg[a] > neg[b])
                {

                    int temp = neg[a];
                    neg[a] = neg[b];
                    neg[b] = temp;
                }
            }
        }

        if (size < x)
            cout << 0 << " ";
        else
            cout << neg[x - 1] << " ";
    }

    cout << endl;

    return 0;
}