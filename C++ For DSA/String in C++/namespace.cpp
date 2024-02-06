#include <bits/stdc++.h>
using namespace std;
namespace riyad
{

    int n = 45;
    void lol()
    {
        cout << "Riyad namespace" << endl;
    }
}
namespace giyad
{

    int n = 4555;
    void lol()
    {
        cout << "giyad namespace" << endl;
    }
}
using namespace riyad;
int main()
{
    cout << giyad::n << endl;
    lol();
    giyad::lol();
    return 0;
}