#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{

    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
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

    int i = n - 2;

    while (i >= 0 && arr[i] >= arr[i + 1])
        i--;

    if (i >= 0)
    {

        int j = n - 1;

        while (arr[j] <= arr[i])
            j--;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    reverseArray(arr, i + 1, n - 1);

    cout << "Next Permutation: ";

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    cout << endl;

    return 0;
}