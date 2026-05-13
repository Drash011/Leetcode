#include <stdio.h>

// Program : Reverse Bits
// Example:
// Input: n = 43261596
// Output: 964176192
// Explanation:
// Integer	   =    Binary
// 43261596   =	00000010100101000001111010011100
// 964176192  =	00111001011110000010100101000000

int reverseBits(int n)
{
    int result = 0;

    for (int i = 0; i < 32; i++)
    {
        result = result << 1;
        result = result | (n & 1);
        n = n >> 1;
    }

    return result;
}

int main()
{
    int n;

    printf("Enter any NUmber :");
    scanf("%d", &n);

    int result = reverseBits(n);

    printf("Reversed Bits : %d\n", result);

    return 0;
}