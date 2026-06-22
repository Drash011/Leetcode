#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    cout << "[";

    for (int i = 0; i < n; i++)
    {

        cout << arr[i];

        if (i < n - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

void permute(int arr[], int start, int n)
{

    if (start == n)
    {
        printArray(arr, n);
        return;
    }

    for (int i = start; i < n; i++)
    {

        int temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;

        permute(arr, start + 1, n);

        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nAll Permutations:\n";

    permute(arr, 0, n);

    return 0;
}