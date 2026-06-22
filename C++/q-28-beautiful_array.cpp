#include <iostream>
using namespace std;

void build(int n, int arr[], int &size)
{

    if (n == 1)
    {
        arr[size++] = 1;
        return;
    }

    int temp[1000];
    int tempSize = 0;

    build((n + 1) / 2, temp, tempSize);

    for (int i = 0; i < tempSize; i++)
    {

        int val = 2 * temp[i] - 1;

        if (val <= n)
            arr[size++] = val;
    }

    for (int i = 0; i < tempSize; i++)
    {

        int val = 2 * temp[i];

        if (val <= n)
            arr[size++] = val;
    }
}

int main()
{

    int n;

    cout << "Enter n: ";
    cin >> n;

    int result[1000];
    int size = 0;

    build(n, result, size);

    cout << "Beautiful Array: ";

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}