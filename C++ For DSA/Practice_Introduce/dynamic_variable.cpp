#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *s = new int;
    *s = 100;
    cout << "Fun :" << s << endl;
    return s;
}
int main()
{
    int *p = fun();
    cout << "Main :" << *p;

    return 0;
}