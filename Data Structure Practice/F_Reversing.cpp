#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    reverse(p.begin(), p.end());
    for (int u : p)
        cout << u << " ";

    return 0;
}