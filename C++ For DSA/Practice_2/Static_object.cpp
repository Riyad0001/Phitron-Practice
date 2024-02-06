#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;
    Student(string name, int roll, char section, double math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student s1("ROUF", 5, 'A', 95, 10);
    Student s2("RAKI", 12, 'B', 95.6, 10);
    Student s3("MIAkhalifa", 2, 'C', 97, 10);
    Student First = s1;
    if (s2.math_marks > First.math_marks)
    {
        First = s2;
    }
    if (s3.math_marks > First.math_marks)
    {
        First = s3;
    }
    cout << First.name << endl;
    return 0;
}