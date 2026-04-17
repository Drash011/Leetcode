#include <stdio.h>

// Input: num = 30
// Output: 14
// Explanation:
// The 14 integers less than or equal to 30 whose digit sums are even are 2, 4, 6, 8, 11, 13, 15, 17, 19, 20, 22, 24, 26, and 28.

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int countEven(int num)
{
    int count = 0;

    for (int i = 1; i <= num; i++)
    {
        if (digitSum(i) % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int result = countEven(num);

    printf("Count: %d\n", result);

    return 0;
}