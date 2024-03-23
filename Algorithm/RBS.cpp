#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int opn = 0, cls = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                opn++;
            }
            else
            {
                cls++;
            }
        }
        if (opn == cls)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}