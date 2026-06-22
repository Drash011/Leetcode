#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int temp[], int size)
{

    cout << "[";

    for (int i = 0; i < size; i++)
    {

        cout << temp[i];

        if (i < size - 1)
            cout << ",";
    }

    cout << "]" << endl;
}

void solve(int arr[], int n, int index, int target,
           int temp[], int size)
{

    if (target == 0)
    {
        printArray(temp, size);
        return;
    }

    for (int i = index; i < n; i++)
    {

        if (i > index && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > target)
            break;

        temp[size] = arr[i];

        solve(arr, n, i + 1,
              target - arr[i],
              temp, size + 1);
    }
}

int main()
{

    int n;

    cout << "Enter number of candidates: ";
    cin >> n;

    int arr[n];

    cout << "Enter candidates: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    sortArray(arr, n);

    int temp[100];

    cout << "\nUnique Combinations:\n";

    solve(arr, n, 0, target, temp, 0);

    return 0;
}