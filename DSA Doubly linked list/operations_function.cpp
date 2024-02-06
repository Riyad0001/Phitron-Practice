#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 10, 40, 100, 30, 100, 11};
    // myList.remove(50);
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int z : myList)
        cout << z << " ";
    return 0;
}