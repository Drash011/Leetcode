#include <stdio.h>

// Example:
// Input: n = 5
// Output: [-7,-1,1,3,4]
// Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int k = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        arr[k++] = -i;
        arr[k++] = i;
    }

    if (n % 2 != 0)
    {
        arr[k++] = 0;
    }

    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");

    return 0;
}