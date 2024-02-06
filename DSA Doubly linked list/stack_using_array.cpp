#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;

        else
            return false;
    }
};
int main()
{
    myStack sd;
    // sd.push(10);
    // sd.push(20);
    // cout << sd.top() << endl;
    // sd.pop();
    // cout << sd.top() << endl;
    // sd.pop();
    // if (sd.empty() == false)
    // {
    //     cout << sd.top() << endl;
    // }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sd.push(x);
    }
    while (!sd.empty())
    {
        cout << sd.top() << endl;
        sd.pop();
    }

    return 0;
}