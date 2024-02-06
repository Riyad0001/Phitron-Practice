#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, c;
        cin >> a >> c;
        mat[a].push_back(c);
        mat[c].push_back(a);
    }
    // for (int v : mat[0])
    // {
    //     cout << v << " ";
    // }
    for (int i = 0; i < mat[3].size(); i++)
    {
        cout << mat[3][i] << " ";
    }

    return 0;
}