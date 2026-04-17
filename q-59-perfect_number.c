#include <stdio.h>
#include <stdbool.h>

// Example :
// Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.

bool checkPerfectNumber(int num)
{
    if (num <= 1)
        return false;

    int sum = 1;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;

            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }

    return sum == num;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (checkPerfectNumber(num))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}