#include <bits/stdc++.h>
using namespace std;
class PornStar
{
public:
    string name;
    int cls;
    int rate;
};
int main()
{
    int n;
    cin >> n;
    PornStar r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].name >> r[i].cls >> r[i].rate;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (r[i].rate > r[j].rate)
            {
                swap(r[i], r[j]);
            }
            if (r[i].rate == r[j].rate)
            {
                if (r[i].cls > r[j].cls)
                {
                    swap(r[i], r[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << r[i].name << " " << r[i].cls << " " << r[i].rate << endl;
    }

    return 0;
}