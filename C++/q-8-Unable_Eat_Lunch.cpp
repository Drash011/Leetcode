#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students : ";
    cin >> n;

    int students[n];
    int sandwiches[n];

    cout << "Enter students array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> students[i];
    }

    cout << "Enter sandwiches array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> sandwiches[i];
    }

    int count = 0;
    int sandwichIndex = 0;

    while (count < n)
    {
        if (students[0] == sandwiches[sandwichIndex])
        {
            for (int i = 0; i < n - 1; i++)
            {
                students[i] = students[i + 1];
            }

            n--;
            sandwichIndex++;
            count = 0;
        }
        else
        {
            int temp = students[0];

            for (int i = 0; i < n - 1; i++)
            {
                students[i] = students[i + 1];
            }

            students[n - 1] = temp;

            count++;
        }
    }

    cout << "Students unable to eat : " << n;

    return 0;
}