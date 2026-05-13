#include <stdio.h>


// Program: Excel Sheet Column Title
// Example:
// Input: columnNumber = 701
// Output: "ZY"


char *convertToTitle(int columnNumber)
{
    static char result[50];
    int i = 0;

    while (columnNumber > 0)
    {
        columnNumber--;
        result[i++] = (columnNumber % 26) + 'A';
        columnNumber /= 26;
    }

    result[i] = '\0';

    int left = 0, right = i - 1;
    while (left < right)
    {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    return result;
}

int main()
{
    int n;

    printf("Enter column number: ");
    scanf("%d", &n);

    char *ans = convertToTitle(n);

    printf("Excel Column Title: %s\n", ans);

    return 0;
}