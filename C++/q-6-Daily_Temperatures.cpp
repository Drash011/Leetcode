#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size : ";
    cin >> size;

    int temperatures[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter temperatures[" << i << "] : ";
        cin >> temperatures[i];
    }

    int answer[size];

    for (int i = 0; i < size; i++)
    {
        answer[i] = 0;

        for (int j = i + 1; j < size; j++)
        {
            if (temperatures[j] > temperatures[i])
            {
                answer[i] = j - i;
                break;
            }
        }
    }

    cout << "Answer : ";

    for (int i = 0; i < size; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}