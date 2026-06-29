#include <iostream>
using namespace std;

bool divisorGame(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (divisorGame(n))
        cout << "Alice Wins";
    else
        cout << "Bob Wins";

    return 0;
}