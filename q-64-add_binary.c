#include <stdio.h>
#include <string.h>

// Example:
// Input: a = "1010", b = "1011"
// Output: "10101"

int main()
{
    char a[1000], b[1000];
    char result[2000];

    printf("Enter first binary string: ");
    scanf("%s", &a);

    printf("Enter second binary string: ");
    scanf("%s", &b);

    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    result[k] = '\0';

    for (int l = 0, r = k - 1; l < r; l++, r--)
    {
        char temp = result[l];
        result[l] = result[r];
        result[r] = temp;
    }

    printf("Sum: %s\n", result);

    return 0;
}