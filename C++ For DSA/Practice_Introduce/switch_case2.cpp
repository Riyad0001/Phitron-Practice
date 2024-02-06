#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    switch (y % 2)
    {

    case 0:
        cout << "Even";
        break;
    case 1:
        cout << "odd";
        break;
    }

    return 0;
}