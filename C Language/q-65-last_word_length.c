#include <stdio.h>
#include <string.h>

// Example:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.

int lengthOfLastWord(char *s)
{
    int i = strlen(s) - 1;
    int length = 0;

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    while (i >= 0 && s[i] != ' ')
    {
        length++;
        i--;
    }

    return length;
}

int main()
{
    char s[200];

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
    }

    int result = lengthOfLastWord(s);

    printf("Length of last word: %d\n", result);

    return 0;
}