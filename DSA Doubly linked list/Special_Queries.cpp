#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> nam;
    while (q--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string name;
            cin >> name;
            nam.push(name);
        }
        else if (n == 1)
        {
            if (!nam.empty())
            {
                cout << nam.front() << endl;
                nam.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
