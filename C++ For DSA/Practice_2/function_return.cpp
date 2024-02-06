#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int batch;
    double cg;
    Student(int roll, int batch, double cg)
    {

        this->roll = roll;
        this->batch = batch;
        this->cg = cg;
    }
};
Student *fun()
{

    Student *rahum = new Student(45, 65, 3.99);
    return rahum;
}

int main()
{
    Student *an = fun();
    cout << an->roll << " " << an->batch << " " << an->cg << endl;
    delete an;
    return 0;
}