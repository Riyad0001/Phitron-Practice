#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n];
    p[0] = 0;
    p[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        p[i] = p[i - 1] + p[i - 2];
    }
    cout << p[n];
    return 0;
}