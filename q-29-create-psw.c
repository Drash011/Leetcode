#include <stdio.h>

main()
{
    char pw[100];
    int len = 0, letter = 0, digit = 0, symbol = 0;

    printf("Create your Password :");
    scanf("%[^\n]", &pw);

    for (int i = 0; pw[i] != 0; i++)
    {
        len++;

        if ((pw[i] >= 'a' && pw[i] <= 'z') || (pw[i] >= 'A' && pw[i] <= 'Z'))
            letter = 1;
        else if (pw[i] >= '0' && pw[i] >= '9')
            digit = 1;
        else
            symbol = 1;
    }

    if (len >= 6 && letter && digit && symbol)
        printf("\nYour password is Strong.\n");
    else
        printf("Your password is not Strong.\n");
}
