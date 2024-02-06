#include <bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *s = new int[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n, greater<int>());
    return s;
}
int main()
{
    int n;
    cin >> n;
    int *sortee = sort_it(n);
    for (int i = 0; i < n; i++)
        cout << sortee[i] << " ";
    delete[] sortee;
    return 0;
}