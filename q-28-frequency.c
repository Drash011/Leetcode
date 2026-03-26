#include <stdio.h>

main()
{
    char str[50];
    int count;
    int str2[50] = {0};

    printf("Enter any String :");
    scanf("%[^\n]", &str);

    printf("This is String : %s", str);

    printf("\n\nFrequency of each letter : \n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str2[i] == 1)
        {
            continue;
        }
        count = 1;
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str2[j] = 1;
            }
        }
        printf("%c => %d\n", str[i], count);
    }
}