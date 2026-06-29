#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSubsequence(string word, string s)
{
    int i = 0;
    int j = 0;

    while (i < word.length() && j < s.length())
    {
        if (word[i] == s[j])
        {
            i++;
        }
        j++;
    }

    return i == word.length();
}

int numMatchingSubseq(string s, vector<string> &words)
{
    int count = 0;

    for (int i = 0; i < words.size(); i++)
    {
        if (isSubsequence(words[i], s))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    int n;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter number of words: ";
    cin >> n;

    vector<string> words(n);

    cout << "Enter words:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    cout << "Matching Subsequences = "
         << numMatchingSubseq(s, words);

    return 0;
}