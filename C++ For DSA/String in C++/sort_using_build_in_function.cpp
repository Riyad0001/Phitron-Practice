#include <bits/stdc++.h>
using namespace std;
class PornStar
{
public:
    string name;
    int cls;
    int rate;
};
bool cmp(PornStar a, PornStar b)
{
    // if (a.rate <= b.rate)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    // // return a.rate <= b.rate;
    if (a.rate == b.rate)
    {
        return a.cls < b.cls;
    }
    else
    {
        return a.rate < b.rate;
    }
}
int main()
{
    int n;
    cin >> n;
    PornStar r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].name >> r[i].cls >> r[i].rate;
    }
    sort(r, r + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << r[i].name << " " << r[i].cls << " " << r[i].rate << endl;
    }

    return 0;
}