#include <bits/stdc++.h>
using namespace std;
int *fun()
{

    int *s = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    return s;
}
int main()
{
    int *s = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << s[i] << " ";
    }
}