#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int r[n];
    for (int i = 0; i < n; i++)
        cin >> r[i];
    bool dup = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (r[i] == r[j])
            {
                dup = true;
                break;
            }
        }
        if (dup == true)
        {
            break;
        }
    }
    if (dup == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}