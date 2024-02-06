#include <bits/stdc++.h>
using namespace std;
void print_normal(const list<int> Ml)
{
    cout << "L ->"
         << " ";
    for (int val : Ml)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "R ->"
         << " ";
    for (auto it = Ml.rbegin(); it != Ml.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> Ml;
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            Ml.push_front(val);
        }
        else if (pos == 1)
        {
            Ml.push_back(val);
        }
        else if (pos == 2)
        {
            if (val >= 0 && val < Ml.size())
            {
                Ml.erase(next(Ml.begin(), val));
            }
        }
        print_normal(Ml);
    }

    return 0;
}
