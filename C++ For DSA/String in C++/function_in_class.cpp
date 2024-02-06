#include <bits/stdc++.h>
using namespace std;
class Employ
{
public:
    string name;
    int id;
    char section;
    int mark1;
    int mark2;
    Employ(string nm, int idl, char sec, int m1, int m2)
    {
        name = nm;
        id = idl;
        section = sec;
        mark1 = m1;
        mark2 = m2;
    }
    void hello()
    {
        cout << name << " " << id << " " << section << endl;
    }
    int total_marks()
    {
        return mark1 + mark2;
    }
};
int main()
{

    Employ rab("Masud Sarkar", 12, 'A', 47, 47);
    // cout << rab.name << " " << rab.id << " " << rab.section << endl;
    rab.hello();
    cout << rab.total_marks() << endl;
    return 0;
}