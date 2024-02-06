#include <bits/stdc++.h>
using namespace std;
class Profesor
{
public:
    int roll;
    int batch;
    int phn;
    Profesor(int roll, int batch, int phn)
    {
        this->roll = roll;
        (*this).batch = phn;
        this->phn = batch;
    }
};
int main()
{
    Profesor karim(12, 424, 54565);
    Profesor parim(556, 44, 54565);
    cout << karim.roll << " " << karim.batch << " " << karim.phn << endl;
    cout << parim.roll << " " << parim.batch << " " << parim.phn << endl;
    return 0;
}