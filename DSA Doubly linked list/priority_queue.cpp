#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; Greater Heap Sort
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (com == 1)
        {
            pq.pop();
        }
        else if (com == 2)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}