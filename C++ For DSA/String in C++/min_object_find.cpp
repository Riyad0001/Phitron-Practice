#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    int roll;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].roll;
    }
    Student mx;
    // mn.roll = INT_MAX;
    mx.roll = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].roll > mx.roll)
        {
            mx = a[i];
        }
    }
    // cout << mn.name << " " << mn.cls << " " << mn.roll << endl;
    cout << mx.name << " " << mx.cls << " " << mx.roll << endl;
    return 0;
}