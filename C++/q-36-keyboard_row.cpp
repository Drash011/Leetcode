#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of words: ";
    cin >> n;

    string words[n];

    cout << "Enter words:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";

    cout << "\nWords that can be typed using one row:\n";

    for (int i = 0; i < n; i++)
    {

        string word = words[i];

        int row = 0;
        char ch = tolower(word[0]);

        if (row1.find(ch) != string::npos)
            row = 1;
        else if (row2.find(ch) != string::npos)
            row = 2;
        else
            row = 3;

        int ok = 1;

        for (char c : word)
        {

            c = tolower(c);

            if (row == 1 && row1.find(c) == string::npos)
            {
                ok = 0;
                break;
            }

            if (row == 2 && row2.find(c) == string::npos)
            {
                ok = 0;
                break;
            }

            if (row == 3 && row3.find(c) == string::npos)
            {
                ok = 0;
                break;
            }
        }

        if (ok)
            cout << word << endl;
    }

    return 0;
}