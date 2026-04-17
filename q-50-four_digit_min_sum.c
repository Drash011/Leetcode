#include <stdio.h>

int main()
{
    int num;
    int d[4];

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Extract digits
    for (int i = 0; i < 4; i++)
    {
        d[i] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (d[i] > d[j])
            {
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    int new1 = d[0] * 10 + d[2];
    int new2 = d[1] * 10 + d[3];

    int result = new1 + new2;

    printf("Minimum sum: %d\n", result);

    return 0;
}