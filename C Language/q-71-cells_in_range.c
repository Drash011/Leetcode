#include <stdio.h>


//Program: Cells in Excel Range
// Example:
// Input: s = "K1:L2"
// Output: ["K1","K2","L1","L2"]
// Explanation:
// The above diagram shows the cells which should be present in the list.
// The red arrows denote the order in which the cells should be presented.

int main() {
    char s[50];

    printf("Enter range (e.g., A1:C3): ");
    scanf("%s", s);

    char c1 = s[0], r1 = s[1];
    char c2 = s[3], r2 = s[4];

    char result[100][3]; 
    int k = 0;

    for (char c = c1; c <= c2; c++) {
        for (char r = r1; r <= r2; r++) {
            result[k][0] = c;
            result[k][1] = r;
            result[k][2] = '\0';
            k++;
        }
    }

    printf("Cells in range:\n");
    for (int i = 0; i < k; i++) {
        printf("%s ", result[i]);
    }

    printf("\n");

    return 0;
}