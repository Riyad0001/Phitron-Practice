#include <iostream>
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

    // Input for the first teacher
    cin.getline(a.name, 99);
    cin >> a.phn >> a.cgpa;
    cin.ignore(); // Clear the newline character from the buffer

    // Input for the second teacher
    cin.getline(b.name, 99);
    cin >> b.phn >> b.cgpa;

    // Output the information
    cout << a.name << endl
         << a.phn << " " << a.cgpa << endl
         << endl
         << b.name << " " << b.phn << " " << b.cgpa << endl;

    return 0;
}
