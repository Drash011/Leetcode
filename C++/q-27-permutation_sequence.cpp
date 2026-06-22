#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, k;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter k: ";
    cin >> k;

    int nums[10];
    int size = 0;

    int fact = 1;

    for (int i = 1; i < n; i++)
    {
        fact *= i;
        nums[size++] = i;
    }

    nums[size++] = n;

    k--;

    string ans = "";

    while (size > 0)
    {

        int index = k / fact;

        ans += char(nums[index] + '0');

        for (int i = index; i < size - 1; i++)
        {
            nums[i] = nums[i + 1];
        }

        size--;

        if (size == 0)
            break;

        k %= fact;

        fact /= size;
    }

    cout << "Permutation Sequence = " << ans << endl;

    return 0;
}