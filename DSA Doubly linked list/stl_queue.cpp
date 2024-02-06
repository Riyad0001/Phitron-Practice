#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> lm;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lm.push(x);
    }
    cout << lm.size() << endl;
    while (!lm.empty())
    {
        cout << lm.front() << " ";
        lm.pop();
    }

    return 0;
}