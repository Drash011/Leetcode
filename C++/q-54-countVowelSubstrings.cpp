#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u';
}

int countVowelSubstrings(string word)
{
    int count = 0;

    for (int i = 0; i < word.size(); i++)
    {
        int freq[5] = {0};
        int distinct = 0;

        for (int j = i; j < word.size(); j++)
        {
            if (!isVowel(word[j]))
                break;

            if (word[j] == 'a')
            {
                if (freq[0] == 0)
                    distinct++;
                freq[0]++;
            }
            else if (word[j] == 'e')
            {
                if (freq[1] == 0)
                    distinct++;
                freq[1]++;
            }
            else if (word[j] == 'i')
            {
                if (freq[2] == 0)
                    distinct++;
                freq[2]++;
            }
            else if (word[j] == 'o')
            {
                if (freq[3] == 0)
                    distinct++;
                freq[3]++;
            }
            else
            {
                if (freq[4] == 0)
                    distinct++;
                freq[4]++;
            }

            if (distinct == 5)
                count++;
        }
    }

    return count;
}

int main()
{
    string word;

    cout << "Enter word: ";
    cin >> word;

    cout << "Answer = " << countVowelSubstrings(word);

    return 0;
}