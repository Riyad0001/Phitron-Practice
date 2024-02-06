#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentance;
    getline(cin, sentance);
    string word;
    stringstream ss(sentance);
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    for (auto fuck = mp.begin(); fuck != mp.end(); fuck++)
        cout << fuck->first << " " << fuck->second << endl;
    // cout << mp["riyad"] << " ";

    return 0;
}