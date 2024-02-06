#include <bits/stdc++.h>
using namespace std;
class Teacher
{

public:
    char name[99];
    int phn;
    double cgpa;
};
int main()
{
    Teacher a, b;
    cin.getline(a.name, 99);
    cin >> a.phn >> a.cgpa;
    getchar();
    cin.getline(b.name, 99);
    cin >> b.phn >> b.cgpa;
    cout << a.name << endl
         << a.phn << " " << a.cgpa << endl
         << endl
         << b.name << " " << b.phn << " " << b.cgpa << endl;
    return 0;
}