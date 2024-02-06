
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int totalMrk;
};
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        Student std[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> std[i].id >> std[i].name >> std[i].section >> std[i].totalMrk;
        }
        Student htm = std[0];
        for (int i = 1; i < 3; i++)
        {
            if (std[i].totalMrk > htm.totalMrk)
            {
                htm = std[i];
            }
            else if (std[i].totalMrk == htm.totalMrk && std[i].id < htm.id)
            {
                htm = std[i];
            }
        }
        cout << htm.id << " " << htm.name << " " << htm.section << " " << htm.totalMrk << endl;
    }

    return 0;
}