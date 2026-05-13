#include <stdio.h>
#include <string.h>

// Program : Isomorphic Strings
// Example :
// Input: s = "egg", t = "add"
// Output: true
// Explanation:
// The strings s and t can be made identical by:
// Mapping 'e' to 'a'.
// Mapping 'g' to 'd'.

#define MAX 1000

int isIsomorphic(char *s, char *t)
{
    int mapST[256] = {0};
    int mapTS[256] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c1 = s[i];
        char c2 = t[i];

        if (mapST[c1] == 0 && mapTS[c2] == 0)
        {
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }
        else
        {
            if (mapST[c1] != c2 || mapTS[c2] != c1)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    char s[MAX], t[MAX];

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t))
    {
        printf("Output: false\n");
        return 0;
    }

    if (isIsomorphic(s, t))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}