#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream dd(s);
    string word;
    bool space = false;
    while (dd >> word)
    {

        reverse(word.begin(), word.end());
        if (space)
        {
            cout << " ";
        }
        space = true;
        cout << word;
    }
    cout << endl;
    return 0;
}