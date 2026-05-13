#include <iostream>
using namespace std;

int main()
{
    int size1, size2;

    cout << "Enter size of nums1 : ";
    cin >> size1;

    int nums1[size1];

    for (int i = 0; i < size1; i++)
    {
        cout << "Enter nums1[" << i << "] : ";
        cin >> nums1[i];
    }

    cout << "Enter size of nums2 : ";
    cin >> size2;

    int nums2[size2];

    for (int i = 0; i < size2; i++)
    {
        cout << "Enter nums2[" << i << "] : ";
        cin >> nums2[i];
    }

    int ans[size1];

    for (int i = 0; i < size1; i++)
    {
        ans[i] = -1;

        for (int j = 0; j < size2; j++)
        {
            if (nums1[i] == nums2[j])
            {
                for (int k = j + 1; k < size2; k++)
                {
                    if (nums2[k] > nums2[j])
                    {
                        ans[i] = nums2[k];
                        break;
                    }
                }
            }
        }
    }

    cout << "Answer : ";

    for (int i = 0; i < size1; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}