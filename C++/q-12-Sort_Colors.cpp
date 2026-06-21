// Prpogram : Sort Colors
// Example :
// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size : ";
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter nums[" << i << "] : ";
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    cout << "Sorted Colors : ";

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}