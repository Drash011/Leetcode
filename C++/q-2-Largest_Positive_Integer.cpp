#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    int nums[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter nums[" << i << "] : ";
        cin >> nums[i];
    }

    int max = -1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (nums[i] == -nums[j])
            {
                if (nums[i] > max)
                {
                    max = nums[i];
                }
            }
        }
    }

    cout << "Largest Positive Integer : " << max;

    return 0;
}