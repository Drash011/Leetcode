#include <stdio.h>

int main()
{
    char e_input[50], p_input[50];
    char email[] = "admin@gmail.com";
    char psw[] = "123456";

    int i, compare = 0;

    printf("Enter your email: ");
    scanf("%s", &e_input);

    printf("Enter your password: ");
    scanf("%s", &p_input);

    for (i = 0; email[i] != '\0' || email[i] != '\0'; i++)
    {
        if (e_input[i] != email[i])
            compare = 1;
    }

    if (compare == 0)
    {
        for (i = 0; psw[i] != '\0' || psw[i] != '\0'; i++)
        {
            if (p_input[i] != psw[i])
                compare = 1;
        }
    }

    printf("\n\n");

    if (compare == 0)
        printf("Login Successful...");
    else
        printf("Login Failed. Invalid Credentials.");

}