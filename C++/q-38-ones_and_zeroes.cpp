#include <iostream>
#include <string>
using namespace std;

int main()
{

    int size;

    cout << "Enter number of strings: ";
    cin >> size;

    string strs[size];

    cout << "Enter binary strings:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> strs[i];
    }

    int m, n;

    cout << "Enter m (zeros): ";
    cin >> m;

    cout << "Enter n (ones): ";
    cin >> n;

    int dp[101][101] = {0};

    for (int k = 0; k < size; k++)
    {

        int zeros = 0;
        int ones = 0;

        for (char c : strs[k])
        {

            if (c == '0')
                zeros++;
            else
                ones++;
        }

        for (int i = m; i >= zeros; i--)
        {

            for (int j = n; j >= ones; j--)
            {

                int take = dp[i - zeros][j - ones] + 1;

                if (take > dp[i][j])
                    dp[i][j] = take;
            }
        }
    }

    cout << "Maximum Subset Size = " << dp[m][n] << endl;

    return 0;
}