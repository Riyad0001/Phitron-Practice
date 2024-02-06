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
    // int tot = math_marks + eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.eng_marks + a.math_marks > b.eng_marks + b.math_marks;
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