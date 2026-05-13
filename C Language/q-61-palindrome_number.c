#include <stdio.h>

int isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return 0;

    int rev = 0;

    while (x > rev)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    if (x == rev || x == rev / 10)
        return 1;
    else
        return 0;
}

int main()
{
    int x;

    printf("Enter number: ");
    scanf("%d", &x);

    if (isPalindrome(x))
        printf("This number is Palindrome\n");
    else
        printf("This number is Not Palindrome\n");

    return 0;
}