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
        int r[n];
        int evenC = 0, oddC = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
            if (r[i] % 2 == 0)
            {
                evenC++;
            }
            else
            {
                oddC++;
            }
        }
        if (evenC == oddC)
        {
            cout << "0" << endl;
        }
        else
        {
            int dif = abs(evenC - oddC);
            if (dif % 2 == 0)
            {
                cout << dif / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
