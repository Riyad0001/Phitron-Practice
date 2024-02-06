#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    long long int s = x + y;
    long long int m = x * y;
    long long int c = x - y;
    cout << x << " "
         << "+"
         << " " << y << " "
         << "="
         << " " << s << endl;
    cout << x << " "
         << "*"
         << " " << y << " "
         << "="
         << " " << m << endl;
    cout << x << " "
         << "-"
         << " " << y << " "
         << "="
         << " " << c << endl;

    return 0;
}