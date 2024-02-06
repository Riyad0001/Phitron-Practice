#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}
int main()
{
    int n;
    cin >> n;
    Student r[n];
    for (int i = 0; i < n; i++)
        cin >> r[i].name >> r[i].roll >> r[i].marks;
    sort(r, r + n, cmp);
    for (int i = 0; i < n; i++)
        cout << r[i].name << " " << r[i].roll << " " << r[i].marks << endl;
    return 0;
}