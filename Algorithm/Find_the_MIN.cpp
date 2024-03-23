#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<int> v;
    while (q--)
    {
        int com, value;
        cin >> com;
        if (com == 1)
        {
            cin >> value;
            v.insert(value);
        }
        else if (com == 2)
        {
            if (!v.empty())
            {
                int minv = *v.begin();
                cout << minv << '\n';
                v.erase(v.begin());
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }

    return 0;
}
