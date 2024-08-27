#include <bits/stdc++.h>
using namespace std;
int main()
{
    string w;
    cin >> w;
    if (w[0] >= 'a' && w[0] <= 'z')
        w[0] = w[0] - 'a' + 'A';
    cout << w << endl;
    return 0;
}