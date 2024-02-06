#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 40, 50};
    // myList.clear();
    myList.resize(3);
    myList.resize(5, 40);
    cout << myList.size() << endl;
    for (int c : myList)
        cout << c << " ";
    return 0;
}