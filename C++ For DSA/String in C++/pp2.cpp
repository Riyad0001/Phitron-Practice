#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student r[n];
    for (int i = 0; i < n; i++)
        cin >> r[i].name >> r[i].roll >> r[i].marks;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << r[i].name << " " << r[i].roll << " " << r[i].marks << endl;
    }

    return 0;
}