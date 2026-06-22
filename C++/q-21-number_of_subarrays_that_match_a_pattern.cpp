#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of nums: ";
    cin >> n;

    int nums[n];

    cout << "Enter nums elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int m;

    cout << "Enter size of pattern: ";
    cin >> m;

    int pattern[m];

    cout << "Enter pattern elements (-1, 0, 1): ";

    for (int i = 0; i < m; i++)
    {
        cin >> pattern[i];
    }

    int count = 0;

    for (int i = 0; i <= n - m - 1; i++)
    {

        int ok = 1;

        for (int j = 0; j < m; j++)
        {

            if (pattern[j] == 1)
            {

                if (!(nums[i + j + 1] > nums[i + j]))
                {
                    ok = 0;
                    break;
                }
            }
            else if (pattern[j] == 0)
            {

                if (!(nums[i + j + 1] == nums[i + j]))
                {
                    ok = 0;
                    break;
                }
            }
            else
            {

                if (!(nums[i + j + 1] < nums[i + j]))
                {
                    ok = 0;
                    break;
                }
            }
        }

        if (ok)
            count++;
    }

    cout << "Count = " << count << endl;

    return 0;
}