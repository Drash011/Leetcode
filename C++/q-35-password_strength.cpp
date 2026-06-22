#include <iostream>
#include <string>
using namespace std;

int main()
{

    string password;

    cout << "Enter password: ";
    cin >> password;

    int score = 0;

    int lower[26] = {0};
    int upper[26] = {0};
    int digit[10] = {0};

    int ex = 0, at = 0, hash = 0, dollar = 0;

    for (char ch : password)
    {

        if (ch >= 'a' && ch <= 'z')
        {

            if (lower[ch - 'a'] == 0)
            {
                score += 1;
                lower[ch - 'a'] = 1;
            }
        }
        else if (ch >= 'A' && ch <= 'Z')
        {

            if (upper[ch - 'A'] == 0)
            {
                score += 2;
                upper[ch - 'A'] = 1;
            }
        }
        else if (ch >= '0' && ch <= '9')
        {

            if (digit[ch - '0'] == 0)
            {
                score += 3;
                digit[ch - '0'] = 1;
            }
        }
        else if (ch == '!')
        {

            if (ex == 0)
            {
                score += 5;
                ex = 1;
            }
        }
        else if (ch == '@')
        {

            if (at == 0)
            {
                score += 5;
                at = 1;
            }
        }
        else if (ch == '#')
        {

            if (hash == 0)
            {
                score += 5;
                hash = 1;
            }
        }
        else if (ch == '$')
        {

            if (dollar == 0)
            {
                score += 5;
                dollar = 1;
            }
        }
    }

    cout << "Password Strength = " << score << endl;

    return 0;
}