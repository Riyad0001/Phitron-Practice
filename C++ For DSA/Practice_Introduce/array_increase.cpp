#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *s = new int[3];
    int *t = new int[3];
    s = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
        t[i] = s[i];
    }
    delete[] s;
    s = new int[5];
    for (int i = 0; i < 5; i++)
    {
        s[i] = t[i];
    }
    delete[] t;
    s[3] = 89;
    s[4] = 55;
    for (int i = 0; i < 5; i++)
        cout << s[i] << " ";

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << s[i] << " ";
    // }
    // cout << endl;
    // delete[] s;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << s[i] << " ";
    // }
    // for (int i = 0; i < 3; i++)
    // {
    // }

    return 0;
}