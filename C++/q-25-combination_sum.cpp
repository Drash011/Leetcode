#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "[";

    for (int i = 0; i < size; i++)
    {

        cout << arr[i];

        if (i < size - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

void solve(int candidates[], int n, int index, int target,
           int temp[], int size)
{

    if (target == 0)
    {
        printArray(temp, size);
        return;
    }

    if (index == n || target < 0)
        return;

    temp[size] = candidates[index];

    solve(candidates, n, index,
          target - candidates[index],
          temp, size + 1);

    solve(candidates, n, index + 1,
          target,
          temp, size);
}

int main()
{

    int n;

    cout << "Enter number of candidates: ";
    cin >> n;

    int candidates[n];

    cout << "Enter candidates: ";

    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    int temp[100];

    cout << "\nCombinations:\n";

    solve(candidates, n, 0, target, temp, 0);

    return 0;
}