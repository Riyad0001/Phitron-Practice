#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n + 1];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int y;
        cin >> y;
        if (v[y].size() == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(v[y].begin(), v[y].end(), greater<int>());
            for (int child : v[y])
            {
                cout << child << " ";
            }
            cout << endl;
        }
    }

    return 0;
}