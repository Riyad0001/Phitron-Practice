#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char p, q;
    cin >> a >> p >> b >> q >> c;
    if (p == '+' && a + b == c || p == '-' && a - b == c || p == '*' && a * b == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << (p == '+' ? a + b : (p == '-' ? a - b : a * b)) << endl;
    }

    return 0;
}