#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    vector<int> v;
    while (q--)
    {
        int com, value;
        cin >> com;
        if (com == 1)
        {
            cin >> value;
            v.push_back(value);
        }
        else if (com == 2)
        {
            int maxv = INT_MIN;
            if (!v.empty())
            {
                for (int i = 0; i < v.size(); i++)
                {
                    maxv = max(maxv, v[i]);
                }
                cout << maxv << '\n';
                v.erase(remove(v.begin(), v.end(), maxv), v.end());
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }

    return 0;
}
