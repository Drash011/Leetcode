#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3;

    cout << "Enter string 1 : ";
    cin >> str1;

    cout << "Enter string 2 : ";
    cin >> str2;

    cout << "Enter string 3 : ";
    cin >> str3;

    string prefix = str1;

    while (str2.find(prefix) != 0 || str3.find(prefix) != 0)
    {
        prefix = prefix.substr(0, prefix.length() - 1);

        if (prefix == " ")
        {
            break;
        }
    }

    cout << "Longest Common Prefix : " << prefix;

    return 0;
}