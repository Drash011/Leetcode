#include <stdio.h>
#define MAX 100

// Program:  Valid Parentheses
// Example:
// Input: s = "([])"
// Output: Valid Expression
// Example:
// Input: s = "([)]"
// Output: Invalid Expression

int main()
{
    char expr[MAX];
    char stack[MAX];
    int top = -1;
    int i = 0;
    int valid = 1;

    printf("Enter Expression :");
    scanf("%s", &expr);

    while (expr[i] != '\0')
    {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            top++;
            stack[top] = expr[i];
        }
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            if ((expr[i] == ')' && stack[top] != '(') ||
                (expr[i] == '}' && stack[top] != '{') ||
                (expr[i] == ']' && stack[top] != '['))
            {
                valid = 0;
                break;
            }
            top--;
        }
        i++;
    }

    if (top != -1)
        valid = 0;

    if (valid == 1)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}
