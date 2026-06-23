#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int img[200][200];
    int ans[200][200];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> img[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int sum = 0;
            int count = 0;

            for (int r = i - 1; r <= i + 1; r++)
            {
                for (int c = j - 1; c <= j + 1; c++)
                {

                    if (r >= 0 && r < m && c >= 0 && c < n)
                    {
                        sum += img[r][c];
                        count++;
                    }
                }
            }

            ans[i][j] = sum / count;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}