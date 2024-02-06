#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w[6] = {1, 2, 3, 4, 5, 6};
    vector<int> c = {10, 20, 30, 40, 50, 60};
    // list<int> myList2 = {10, 20, 30, 40, 50};
    // list<int> myList(myList2);
    // cout << myList.size();
    list<int> myList(c.begin(), c.end());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    //     cout << *it << " ";
    for (int v : myList)
        cout << v << " ";
    return 0;
}