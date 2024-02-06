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
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        bool ik = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (h[i] > h[j])
                {
                    ik = false;
                    break;
                }
            }
        }
        if (ik)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}