#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[3] = {1, 2, 0};
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << a[x];
        for (int j = 1; j <= (n - i) * 2 - 1; j++)
        {
            cout << " ";
        }
        if (i != n)
        {
            cout << a[x];
        }
        x++;
        if (x == 3)
        {
            x = 0;
        }
        cout << '\n';
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << a[x];
        for (int j = 1; j <= (n - i) * 2 - 1; j++)
        {
            cout << " ";
        }
        cout << a[x];
        cout << '\n';
        x++;
        if (x == 3)
        {
            x = 0;
        }
    }

    return 0;
}