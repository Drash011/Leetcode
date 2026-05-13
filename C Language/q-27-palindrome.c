#include <stdio.h>

int main()
{
    char str[50], rev[50];
    int palin = 0;

    printf("Enter any String : ");
    scanf("%[^\n]", str);

    printf("This is String : %s", str);

    int i, j;

    for (i = 0; str[i] != '\0'; i++);
    i--;

    for (j = 0; i >= 0; i--, j++)
        rev[j] = str[i];

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != rev[i])
        {
            palin = 1;
            break;
        }
    }

    printf("\n\n");

    if (palin == 0)
        printf("The given String is a Palindrome.");
    else
        printf("The given String is not Palindrome.");
}