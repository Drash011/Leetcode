#include <stdio.h>

// Example:
// Input: n = 34, k = 6
// Output: 9
// Explanation: 34 (base 10) expressed in base 6 is 54. 5 + 4 = 9.

int sumBase(int n, int k)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % k;
        n /= k;
    }

    return sum;
}

int main()
{
    int n, k;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter base k: ");
    scanf("%d", &k);

    int result = sumBase(n, k);

    printf("Sum of digits in base %d: %d\n", k, result);

    return 0;
}