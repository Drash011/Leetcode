#include <stdio.h>
#include <string.h>

// Pattern: Word Pattern
// Example:
// Input: pattern = "abba", s = "dog cat cat dog"
// Output: true
// Explanation:
// The bijection can be established as:
// 'a' maps to "dog".
// 'b' maps to "cat".

#define MAX 1000

int wordPattern(char *pattern, char *s)
{
    char *words[300];
    int wordCount = 0;

    char *token = strtok(s, " ");
    while (token != NULL)
    {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    if (strlen(pattern) != wordCount)
        return 0;

    char *map[256] = {0};

    for (int i = 0; i < wordCount; i++)
    {
        char c = pattern[i];
        char *w = words[i];

        if (map[c] == NULL)
        {
            for (int j = 0; j < 256; j++)
            {
                if (map[j] != NULL && strcmp(map[j], w) == 0)
                    return 0;
            }
            map[c] = w;
        }
        else
        {
            if (strcmp(map[c], w) != 0)
                return 0;
        }
    }

    return 1;
}

int main()
{
    char pattern[MAX];
    char str[MAX];

    printf("Enter pattern: ");
    scanf("%s", pattern);

    getchar();

    printf("Enter string: ");
    fgets(str, MAX, stdin);

    str[strcspn(str, "\n")] = '\0';

    if (wordPattern(pattern, str))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}