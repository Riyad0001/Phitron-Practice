#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "oNDIA";
    Cricketer *Virat = new Cricketer;
    Virat->jersey_no = 77;
    Virat->country = "INDIA";
    *Virat = *dhoni;
    delete dhoni;
    cout << Virat->jersey_no << endl
         << Virat->country << endl;
    delete Virat;

    return 0;
}