#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[10000];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int product2 = nums[0] * nums[1] * nums[n - 1];

    int answer;

    if (product1 > product2)
        answer = product1;
    else
        answer = product2;

    cout << "\nMaximum Product = " << answer;

    return 0;
}