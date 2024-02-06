#include <bits/stdc++.h>
using namespace std;
void print(stringstream &rr)
{
    string word;
    if (rr >> word)
    {
        print(rr);
        cout << word << endl;
        }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream rr(s);
    // string word;
    // while (rr >> word)
    // {
    //     cout << word << endl;
    // }
    print(rr);
    return 0;
}