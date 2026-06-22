#include <iostream>
using namespace std;

void printCombination(int arr[], int k)
{

    cout << "[";

    for (int i = 0; i < k; i++)
    {

        cout << arr[i];

        if (i < k - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

void combine(int start, int n, int k, int arr[], int index)
{

    if (index == k)
    {
        printCombination(arr, k);
        return;
    }

    for (int i = start; i <= n; i++)
    {

        arr[index] = i;

        combine(i + 1, n, k, arr, index + 1);
    }
}

int main()
{

    int n, k;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    int arr[k];

    cout << "\nAll Combinations:\n";

    combine(1, n, k, arr, 0);

    return 0;
}