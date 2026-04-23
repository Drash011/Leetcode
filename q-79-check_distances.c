#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int distance[26];

    printf("Enter String :");
    scanf("%s", s);

    printf("Enter 26 distance values : \n");
    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &distance[i]);
    }

    int first[26];

    for (int i = 0; i < 26; i++)
    {
        first[i] = -1;
    }

    for (int i = 0; s[i] != '\0'; i++)
    {
        int idx = s[i] - 'a';

        if (first[idx] == -1)
        {
            first[idx] = i;
        }
        else
        {
            int dist = i - first[idx] - 1;

            if (dist != distance[idx])
            {
                printf("Output : false\n");
                return 0;
            }
        }
    }

    printf("Output : true\n");
    return 0;
}