#include <iostream>
using namespace std;

int main()
{
    int size, n;

    cout << "Enter size of flowerbed: ";
    cin >> size;

    int flowerbed[size];

    cout << "Enter flowerbed elements (0 or 1): ";
    for (int i = 0; i < size; i++)
    {
        cin >> flowerbed[i];
    }

    cout << "Enter number of flowers to place: ";
    cin >> n;

    int count = 0;

    for (int i = 0; i < size; i++)
    {

        int left = (i == 0) ? 0 : flowerbed[i - 1];
        int right = (i == size - 1) ? 0 : flowerbed[i + 1];

        if (flowerbed[i] == 0 && left == 0 && right == 0)
        {
            flowerbed[i] = 1;
            count++;
        }
    }

    if (count >= n)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}