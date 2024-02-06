#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin >> n;
    char s;
    int alp[26] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        val = s - 'a';
        alp[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] != 0)
        {
            while (alp[i]--)
            {
                cout << char(i + 97);
            }
        }
    }

    return 0;
}