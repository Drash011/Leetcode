#include <iostream>
#include <string>
using namespace std;

int numSub(string s)
{
    const int MOD = 1000000007;

    long long ans = 0;
    long long count = 0;

    for (char c : s)
    {
        if (c == '1')
        {
            count++;
            ans = (ans + count) % MOD;
        }
        else
        {
            count = 0;
        }
    }

    return ans;
}

int main()
{
    string s;

    cout << "Enter binary string: ";
    cin >> s;

    cout << "Answer = " << numSub(s);

    return 0;
}