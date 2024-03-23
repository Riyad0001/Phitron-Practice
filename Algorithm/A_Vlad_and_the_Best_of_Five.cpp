#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string t;
        cin >> t;
        int a = 0;
        int b = 0;
        for (char c : t)
        {
            if (c == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a > b)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}