#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<int> s;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        s.clear();
    }

    return 0;
}