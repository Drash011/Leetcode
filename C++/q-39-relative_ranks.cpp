#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of athletes: ";
    cin >> n;

    int score[10000];

    cout << "Enter scores: ";

    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }

    int scoresCopy[10000];
    int index[10000];

    for (int i = 0; i < n; i++)
    {
        scoresCopy[i] = score[i];
        index[i] = i;
    }

    // Bubble Sort Descending
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (scoresCopy[j] < scoresCopy[j + 1])
            {

                int tempScore = scoresCopy[j];
                scoresCopy[j] = scoresCopy[j + 1];
                scoresCopy[j + 1] = tempScore;

                int tempIndex = index[j];
                index[j] = index[j + 1];
                index[j + 1] = tempIndex;
            }
        }
    }

    string rank[10000];

    for (int i = 0; i < n; i++)
    {

        if (i == 0)
            rank[index[i]] = "Gold Medal";
        else if (i == 1)
            rank[index[i]] = "Silver Medal";
        else if (i == 2)
            rank[index[i]] = "Bronze Medal";
        else
            rank[index[i]] = to_string(i + 1);
    }

    cout << "\nRanks:\n";

    for (int i = 0; i < n; i++)
    {
        cout << rank[i] << endl;
    }

    return 0;
}