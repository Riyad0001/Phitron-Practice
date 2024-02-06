#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {70, 20, 30, 70, 50, 70, 90};
    list<int> il = {10, 11, 30, 40};
    // list<int> newL;
    // newL = myList;
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 0), il.begin(), il.end());
    // myList.erase(next(myList.begin(), 3), next(myList.begin(), 6));
    // replace(myList.begin(), myList.end(), 70, 99);
    // for (int y : myList)
    //     cout
    //         << y << " ";
    auto it = find(myList.begin(), myList.end(), 70);
    if (it == myList.end())
        cout << "Not Founf";
    else
        cout << "Foyn";
    return 0;
}