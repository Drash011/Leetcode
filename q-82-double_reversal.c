#include <stdio.h>

// Program: A Number After a Double Reversal
// Example:
// Input: num = 526
// Output: true
// Explanation: Reverse num to get 625, then reverse 625 to get 526, which equals num.

int isSameAfterReversals(int num)
{
    if (num == 0)
    {
        return 1;
    }

    if (num % 10 == 0)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter any Number :");
    scanf("%d", &num);

    int result = isSameAfterReversals(num);

    if (result == 1)
    {
        printf("Output : true\n");
    }
    else
    {
        printf("Output : false\n");
    }

    return 0;
}