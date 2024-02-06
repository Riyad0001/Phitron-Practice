#include <bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *s = new int[n];
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    return s;
}
int main()
{
    int n;
    cin >> n;
    int *r = get_array(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];
    cout << endl;
    delete[] r;
    return 0;
}