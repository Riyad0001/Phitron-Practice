#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int q;
    cin >> q;

    while (q--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (com == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (com == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout
                        << pq.top() << endl;
                }
                else
                    cout << "Empty" << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}