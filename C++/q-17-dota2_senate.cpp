#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{

    string senate;

    cout << "Enter senate string (R and D): ";
    cin >> senate;

    queue<int> radiant;
    queue<int> dire;

    int n = senate.size();

    for (int i = 0; i < n; i++)
    {
        if (senate[i] == 'R')
            radiant.push(i);
        else
            dire.push(i);
    }

    while (!radiant.empty() && !dire.empty())
    {

        int r = radiant.front();
        int d = dire.front();

        radiant.pop();
        dire.pop();

        if (r < d)
            radiant.push(r + n);
        else
            dire.push(d + n);
    }

    if (radiant.empty())
        cout << "Dire" << endl;
    else
        cout << "Radiant" << endl;

    return 0;
}