#include <stdio.h>

int alternateDigitSum(int n)
{
    int digits[10], size = 0;

    while (n > 0)
    {
        digits[size++] = n % 10;
        n /= 10;
    }

    int sum = 0;
    int sign = 1;

    for (int i = size - 1; i >= 0; i--)
    {
        sum += sign * digits[i];
        sign *= -1;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int result = alternateDigitSum(n);

    printf("Alternating Digit Sum: %d\n", result);

    return 0;
}