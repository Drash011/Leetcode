#include <iostream>
using namespace std;

int main()
{

    int size;

    cout << "Enter size of array :";
    cin >> size;

    int nums[size];

    cout << endl
         << endl;
    cout << "Enter array elements :";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter array[" << i << "] : ";
        cin >> nums[i];
    }

    int target;

    cout << "Enter target :";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "Index : " << i << " " << j;
            }
        }
    }

    return 0;
}