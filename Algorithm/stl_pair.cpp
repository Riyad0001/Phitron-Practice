#include <bits/stdc++.h>
using namespace std;
class Pair
{
public:
    int first;
    int second;
    void make_pair(int a, int b)
    {
        first = a;
        second = b;
    }
};
int main()
{
    // pair<int, string> p;
    // p = make_pair(10, "ucdqi");
    Pair p;
    p.make_pair(272, 290);
    // p.first = 10;
    // p.second = 1000;
    cout
        << p.first << " " << p.second;
    return 0;
}