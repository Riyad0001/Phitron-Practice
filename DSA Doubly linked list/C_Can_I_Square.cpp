#include <bits/stdc++.h>
using namespace std;
bool canBuildSquare(const vector<int> &buckets)
{
    int totalArea = 0;
    for (int squares : buckets)
    {
        totalArea += squares * squares;
    }

    // Find the largest square side length that is less than or equal to totalArea
    int sideLength = 1;
    while (sideLength * sideLength < totalArea)
    {
        sideLength++;
    }

    return sideLength * sideLength == totalArea;
}

int main()
{
    int n;
    cin >> n;

    vector<int> buckets(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> buckets[i];
    }

    if (canBuildSquare(buckets))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
