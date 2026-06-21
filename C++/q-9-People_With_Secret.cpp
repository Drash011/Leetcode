// Program : Find All People With Secret
// Example:
// Input: n = 6, meetings = [[1,2,5],[2,3,8],[1,5,10]], firstPerson = 1
// Output: [0,1,2,3,5]
// Explanation:
// At time 0, person 0 shares the secret with person 1.
// At time 5, person 1 shares the secret with person 2.
// At time 8, person 2 shares the secret with person 3.
// At time 10, person 1 shares the secret with person 5.​​​​
// Thus, people 0, 1, 2, 3, and 5 know the secret after all the meetings.

#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of people : ";
    cin >> n;

    cout << "Enter number of meetings : ";
    cin >> m;

    int meetings[m][3];

    for (int i = 0; i < m; i++)
    {
        cout << "Enter person1, person2 and time : ";

        for (int j = 0; j < 3; j++)
        {
            cin >> meetings[i][j];
        }
    }

    int firstPerson;

    cout << "Enter firstPerson : ";
    cin >> firstPerson;

    bool secret[n];

    for (int i = 0; i < n; i++)
    {
        secret[i] = false;
    }

    secret[0] = true;
    secret[firstPerson] = true;

    for (int i = 0; i < m; i++)
    {
        int x = meetings[i][0];
        int y = meetings[i][1];

        if (secret[x] == true || secret[y] == true)
        {
            secret[x] = true;
            secret[y] = true;
        }
    }

    cout << "People who know the secret : ";

    for (int i = 0; i < n; i++)
    {
        if (secret[i] == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}