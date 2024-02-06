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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (find(p.begin(), p.end(), p[i] + 1) != p.end())
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}