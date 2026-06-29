#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int racecar(int target)
{
    vector<int> dp(target + 1, 0);

    for (int i = 1; i <= target; i++)
    {
        dp[i] = 1000000;

        int m = 1;
        int j = 1;

        while (j < i)
        {
            for (int q = 0, p = 1; p < j; q++, p = (1 << q) - 1)
            {
                dp[i] = min(dp[i], m + 1 + q + 1 + dp[i - (j - p)]);
            }

            m++;
            j = (1 << m) - 1;
        }

        if (j == i)
            dp[i] = m;
        else
            dp[i] = min(dp[i], m + 1 + dp[j - i]);
    }

    return dp[target];
}

int main()
{
    int target;

    cout << "Enter target: ";
    cin >> target;

    cout << "Minimum Instructions = " << racecar(target);

    return 0;
}