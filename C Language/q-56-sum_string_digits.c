#include <stdio.h>
#include <string.h>

// Example:
// Input: s = "leetcode", k = 2
// Output: 6
// Explanation:
// The operations are as follows:
// - Convert: "leetcode" ➝ "(12)(5)(5)(20)(3)(15)(4)(5)" ➝ "12552031545" ➝ 12552031545
// - Transform #1: 12552031545 ➝ 1 + 2 + 5 + 5 + 2 + 0 + 3 + 1 + 5 + 4 + 5 ➝ 33
// - Transform #2: 33 ➝ 3 + 3 ➝ 6
// - Thus the resulting integer is 6.

int getLucky(char s[], int k)
{
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        int val = s[i] - 'a' + 1;

        while (val > 0)
        {
            sum += val % 10;
            val /= 10;
        }
    }

    for (int i = 1; i < k; i++)
    {
        int newSum = 0;

        while (sum > 0)
        {
            newSum += sum % 10;
            sum /= 10;
        }

        sum = newSum;
    }

    return sum;
}

int main()
{
    char s[100];
    int k;

    printf("Enter string: ");
    scanf("%s", s);

    printf("Enter k : ");
    scanf("%d", &k);

    int result = getLucky(s, k);

    printf("Result: %d\n", result);

    return 0;
}