#include <iostream>
#include <string>
using namespace std;

int maxPower(string s)
{
    int maxCount = 1;
    int count = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;
        else
            count = 1;

        if (count > maxCount)
            maxCount = count;
    }

    return maxCount;
}

int main()
{
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Maximum Power = " << maxPower(s);

    return 0;
}