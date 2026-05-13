#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++)
        {
            if (strs[j][i] == '\0' || strs[j][i] != ch)
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main()
{
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char **strs = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        strs[i] = (char *)malloc(100 * sizeof(char));
    }

    printf("\nEnter strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter strs[%d] :", i);
        scanf("%s", strs[i]);
    }

    char *result = longestCommonPrefix(strs, n);

    printf("\nLongest Common Prefix: %s\n", result);

    for (int i = 0; i < n; i++)
    {
        free(strs[i]);
    }
    free(strs);

    return 0;
}