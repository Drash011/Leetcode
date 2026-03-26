#include <stdio.h>

main ()
{
    char str[50];

    printf("Enter any String :");
    scanf("%[^\n]", &str);

    printf("This is String : %s", str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }      
    }

    printf("\n\n");
    printf("This is Uppercase String : %s", str);
    
}