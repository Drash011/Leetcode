#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of attacks: ";
    cin >> n;

    int timeSeries[n];

    cout << "Enter attack times: ";
    for (int i = 0; i < n; i++)
    {
        cin >> timeSeries[i];
    }

    int duration;

    cout << "Enter duration: ";
    cin >> duration;

    int total = duration;

    for (int i = 1; i < n; i++)
    {
        int gap = timeSeries[i] - timeSeries[i - 1];

        if (gap < duration)
            total += gap;
        else
            total += duration;
    }

    cout << "Total Poisoned Duration = " << total << endl;

    return 0;
}