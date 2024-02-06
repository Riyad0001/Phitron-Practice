#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"Ryaan Riyad", 69});
    // mp.insert({"Fatema Akter", 60});
    // mp.insert({"lovev loo", 99});
    // mp.insert({"Ryaan", 0});
    // alternative
    mp["Sakib"] = 10;
    mp["akib"] = 90;
    mp["Nowfel"] = 80;
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // cout << mp["Ryaan"] << endl;
    if (mp.count("akib"))
        cout << "Ace";
    else
        cout << " Nai";
    return 0;
}