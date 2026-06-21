#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter number of cars: ";
    cin >> n;

    int nums[n][2];

    cout << "Enter start and end points:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i][0] >> nums[i][1];
    }

    int points[101] = {0};

    for (int i = 0; i < n; i++)
    {

        for (int j = nums[i][0]; j <= nums[i][1]; j++)
        {
            points[j] = 1;
        }
    }

    int count = 0;

    for (int i = 1; i <= 100; i++)
    {
        count += points[i];
    }

    cout << "\nNumber of Points Covered = " << count << endl;

    return 0;
}