#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *Riyad = new Person("Ryaan Hasan", 22);
    Person *Fuwad = new Person("Ryaan gv Rabby", 25);
    // Riyad->name = Fuwad->name;
    // Riyad->age = Fuwad->age;
    *Riyad = *Fuwad;
    delete Fuwad;
    cout << Riyad->name << " " << Riyad->age << endl;
    return 0;
}