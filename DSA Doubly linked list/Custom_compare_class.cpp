#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mrks;
    Student(string name, int roll, int mrks)
    {
        this->name = name;
        this->roll = roll;
        this->mrks = mrks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mrks > b.mrks)
            return true;
        else if (a.mrks < b.mrks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student ob(name, roll, marks);
        pq.push(ob);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mrks << endl;
        pq.pop();
    }

    return 0;
}