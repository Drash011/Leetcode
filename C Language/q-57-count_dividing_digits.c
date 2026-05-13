#include <stdio.h>

// Example:
// Input: num = 1248
// Output: 4
// Explanation: 1248 is divisible by all of its digits, hence the answer is 4.

int countDigits(int num)
{
    int count = 0;
    int n = num;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit != 0 && num % digit == 0)
        {
            count++;
        }

        n /= 10;
    }

    return count;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int result = countDigits(num);

    printf("Count: %d\n", result);

    return 0;
}