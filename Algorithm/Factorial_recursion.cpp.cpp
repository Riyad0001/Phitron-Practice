#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int chotofact = fact(n - 1);
    return chotofact * n;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}