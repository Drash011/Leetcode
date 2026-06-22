#include <iostream>
using namespace std;

int main()
{

    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;

    int nums1[n1];

    cout << "Enter nums1 elements: ";

    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter size of nums2: ";
    cin >> n2;

    int nums2[n2];

    cout << "Enter nums2 elements: ";

    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    cout << "Answer: ";

    for (int i = 0; i < n1; i++)
    {

        int pos = -1;

        for (int j = 0; j < n2; j++)
        {

            if (nums2[j] == nums1[i])
            {
                pos = j;
                break;
            }
        }

        int nextGreater = -1;

        for (int j = pos + 1; j < n2; j++)
        {

            if (nums2[j] > nums1[i])
            {
                nextGreater = nums2[j];
                break;
            }
        }

        cout << nextGreater << " ";
    }

    return 0;
}