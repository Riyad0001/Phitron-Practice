#include <bits/stdc++.h>
using namespace std;
class riyad
{
public:
    int roll;
    int fight;
    double cg;
    riyad(int roll, int fight, double cg)
    {
        this->roll = roll;
        this->fight = fight;
        this->cg = cg;
    }
};
int main()
{
    riyad *kari = new riyad(33, 678, 3.69);
    cout << kari->roll << " " << kari->fight << " " << kari->cg << endl;
    return 0;
}