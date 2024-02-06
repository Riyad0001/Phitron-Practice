#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool word_inside = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (word_inside == false)
            {

                cnt++;
            }
            word_inside = true;
        }
        else
        {
            word_inside = false;
        }
    }
    cout << cnt << endl;
    return 0;
}