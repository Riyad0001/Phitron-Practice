#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    else if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    else
    {
        return a.id < b.id;
    }
}
int main()
{
    int n;
    cin >> n;
    Student z[n];
    for (int i = 0; i < n; i++)
    {
        cin >> z[i].nm >> z[i].cls >> z[i].sec >> z[i].id >> z[i].math_marks >> z[i].eng_marks;
    }
    sort(z, z + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << z[i].nm << " " << z[i].cls << " " << z[i].sec << " " << z[i].id << " " << z[i].math_marks << " " << z[i].eng_marks << endl;
    }

    return 0;
}