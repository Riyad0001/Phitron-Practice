#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student r[n];
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].nm >> r[i].cls >> r[i].sec >> r[i].id;
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(r[i].sec, r[n - 1 - i].sec);
    }
    for (int i = 0; i < n; i++)
    {
        cout << r[i].nm << " " << r[i].cls << " " << r[i].sec << " " << r[i].id << endl;
    }
    return 0;
}