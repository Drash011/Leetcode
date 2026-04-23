#include <stdio.h>

// Program : Reverse Integer
// Example:
// Input: x = 123
// Output: 321

int reverse(int x)
{
    int rev = 0;

    while (x != 0)
    {
        int digit = x % 10;
        x = x / 10;

        if (rev > 214748364 || rev < -214748364)
        {
            return 0;
        }

        rev = rev * 10 + digit;
    }

    return rev;
}

int main()
{
    int x;

    printf("Enter integer :");
    scanf("%d", &x);

    int result = reverse(x);

    printf("Reversed : %d\n", result);

    return 0;
}