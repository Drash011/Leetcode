#include <stdio.h>

main()
{
    char str[50];

    printf("Enter any String : ");
    scanf("%[^\n]", str);

    printf("This is String : %s", str);

    for (int i = 0; str[i] != 0; i++)
    {
        if (i == 0)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        else if (str[i - 1] == ' ')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        else
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
    }

    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; str[j] != 0; j++)
                str[j] = str[j + 1];
                
            i--; 
        }
    }

    printf("\n\nThis is Camel Case String : %s", str);
}