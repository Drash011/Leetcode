#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of intervals: ";
    cin >> n;

    int intervals[n][2];

    cout << "Enter intervals (start end):\n";

    for (int i = 0; i < n; i++)
    {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (intervals[i][0] > intervals[j][0])
            {

                int t1 = intervals[i][0];
                int t2 = intervals[i][1];

                intervals[i][0] = intervals[j][0];
                intervals[i][1] = intervals[j][1];

                intervals[j][0] = t1;
                intervals[j][1] = t2;
            }
        }
    }

    int result[n][2];
    int k = 0;

    result[k][0] = intervals[0][0];
    result[k][1] = intervals[0][1];

    for (int i = 1; i < n; i++)
    {

        if (intervals[i][0] <= result[k][1])
        {

            if (intervals[i][1] > result[k][1])
                result[k][1] = intervals[i][1];
        }
        else
        {

            k++;

            result[k][0] = intervals[i][0];
            result[k][1] = intervals[i][1];
        }
    }

    cout << "\nMerged Intervals:\n";

    for (int i = 0; i <= k; i++)
    {
        cout << "[" << result[i][0] << "," << result[i][1] << "] ";
    }

    cout << endl;

    return 0;
}