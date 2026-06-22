#include <iostream>
#include <string>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    string s = to_string(n);

    int i = s.size() - 2;

    while (i >= 0 && s[i] >= s[i + 1])
        i--;

    if (i < 0)
    {
        cout << -1;
        return 0;
    }

    int j = s.size() - 1;

    while (s[j] <= s[i])
        j--;

    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    int left = i + 1;
    int right = s.size() - 1;

    while (left < right)
    {
        char t = s[left];
        s[left] = s[right];
        s[right] = t;
        left++;
        right--;
    }

    long long ans = stoll(s);

    if (ans > 2147483647)
        cout << -1;
    else
        cout << ans;

    return 0;
}