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
    for (int i = 0; i < n; i++)
    {
        if (p[i] > 0)
        {
            p[i] = 1;
        }
        else if (p[i] < 0)
        {
            p[i] = 2;
        }
    }
    for (int t : p)
        cout << t << " ";

    return 0;
}