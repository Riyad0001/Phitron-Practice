#include <bits/stdc++.h>
using namespace std;
class Profesor
{
public:
    int roll;
    int batch;
    int phn;
    Profesor(int a, int b, int c)
    {
        roll = a;
        batch = b;
        phn = c;
    }
};
int main()
{
    Profesor karim(12, 44, 54565);
    Profesor karim(12, 44, 54565);
    cout << karim.roll << " " << karim.batch << " " << karim.phn << endl;
    return 0;
}