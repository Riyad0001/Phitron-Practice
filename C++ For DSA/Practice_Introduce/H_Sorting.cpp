#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
                swap(x[i], x[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";

    return 0;
}