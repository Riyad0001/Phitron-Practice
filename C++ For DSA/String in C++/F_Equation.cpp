#include <bits/stdc++.h>
using namespace std;
long long int Faki(long long int x, long long int n)
{
    double sum = 0;
    for (long long int i = 2; i <= n; i += 2)
    {
        sum += pow(x * 1.0, i * 1.0);
    }
    return sum;
}
int main()
{
    long long int x, n;
    cin >> x >> n;
    long long int result = Faki(x, n);
    cout << result << endl;
    return 0;
}
