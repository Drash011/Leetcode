#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size : ";
    cin >> size;

    int nums[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter nums[" << i << "] : ";
        cin >> nums[i];
    }

    int sum = nums[0];

    for (int i = 1; i < size; i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            sum = sum + nums[i];
        }
        else
        {
            break;
        }
    }

    int x = sum;
    bool found = true;

    while (found)
    {
        found = false;

        for (int i = 0; i < size; i++)
        {
            if (nums[i] == x)
            {
                found = true;
                x++;
                break;
            }
        }
    }

    cout << "Smallest Missing Integer : " << x;

    return 0;
}