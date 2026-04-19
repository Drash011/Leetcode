#include <stdio.h>


// Program: Excel Sheet Column Number
// Converts it into corresponding number
// Example:
// Input: columnTitle = "AB"
// Output: 28


int titleToNumber(char columnTitle[]) {
    int result = 0;
    int i = 0;

    while (columnTitle[i] != '\0') {
        result = result * 26 + (columnTitle[i] - 'A' + 1);
        i++;
    }

    return result;
}

int main() {
    char columnTitle[50];

    printf("Enter column title: ");
    scanf("%s", columnTitle);

    int ans = titleToNumber(columnTitle);

    printf("Column Number: %d\n", ans);

    return 0;
}