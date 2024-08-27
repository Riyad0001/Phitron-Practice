#include <iostream>
using namespace std;

int main()
{
    // Input number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    while (t--)
    {
        // Input value of x
        int x;
        cin >> x;

        // Choose y such that gcd(x, y) + y is maximum possible
        int y = x / 2;

        // Output y for the current test case
        cout << y << endl;
    }

    return 0;
}
