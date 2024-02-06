#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> lm;
    void push(int val)
    {
        lm.push_back(val);
    }
    void pop()
    {
        lm.pop_front();
    }
    int front()
    {
        return lm.front();
    }
    int size()
    {
        return size();
    }
    bool empty()
    {
        return lm.empty();
    }
};
int main()
{
    myQueue r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r.push(x);
    }
    while (!r.empty())
    {
        cout << r.front() << endl;
        r.pop();
    }

    return 0;
}