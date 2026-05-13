// Program : Online Stock Span

// Example:
// Input
// ["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
// [[], [100], [80], [60], [70], [60], [75], [85]]
// Output
// [null, 1, 1, 1, 2, 1, 4, 6]

// Explanation
// StockSpanner stockSpanner = new StockSpanner();
// stockSpanner.next(100); // return 1
// stockSpanner.next(80);  // return 1
// stockSpanner.next(60);  // return 1
// stockSpanner.next(70);  // return 2
// stockSpanner.next(60);  // return 1
// stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
// stockSpanner.next(85);  // return 6

#include <iostream>
using namespace std;

class StockSpanner
{
public:
    int prices[1000];
    int top;

    StockSpanner()
    {
        top = -1;
    }

    int next(int price)
    {
        top++;
        prices[top] = price;

        int span = 1;

        for (int i = top - 1; i >= 0; i--)
        {
            if (prices[i] <= price)
            {
                span++;
            }
            else
            {
                break;
            }
        }

        return span;
    }
};

int main()
{
    StockSpanner obj;

    int n;

    cout << "Enter number of prices : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int price;

        cout << "Enter price : ";
        cin >> price;

        int result = obj.next(price);

        cout << "Span : " << result << endl;
    }

    return 0;
}