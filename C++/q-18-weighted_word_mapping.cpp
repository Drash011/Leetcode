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

    int weights[26];

    cout << "Enter 26 weights:\n";

    for (int i = 0; i < 26; i++)
    {
        cin >> weights[i];
    }

    string result = "";

    for (int i = 0; i < n; i++)
    {

        int sum = 0;

        for (int j = 0; j < words[i].size(); j++)
        {
            sum += weights[words[i][j] - 'a'];
        }

        int rem = sum % 26;

        char ch = 'z' - rem;

        result += ch;
    }

    cout << "\nMapped String = " << result << endl;

    return 0;
}