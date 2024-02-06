#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    // if (s < t)
    // {
    //     cout << "Min " << s;
    // }
    // else
    // {
    //     cout << "Min " << t;
    // }
    int c = min({s, t, u, v});
    int d = max({s, t, u, v});
    cout << c << " " << d;

    return 0;
}