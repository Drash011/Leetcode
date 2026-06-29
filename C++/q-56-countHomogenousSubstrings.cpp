#include <iostream>
#include <string>
using namespace std;

int countHomogenous(string s)
{
    const int MOD = 1000000007;

    long long ans = 0;
    long long count = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;

        ans = (ans + count) % MOD;
    }

    return (ans + 1) % MOD;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Answer = " << countHomogenous(s);

    return 0;
}