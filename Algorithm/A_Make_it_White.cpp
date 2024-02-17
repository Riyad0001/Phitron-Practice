#include <iostream>
#include <string>

using namespace std;

// Function to find the minimum length of the segment needed to be painted white
int minSegmentLength(int n, const string &s)
{
    int firstBlack = s.find('B'); // Find the index of the first black cell
    int lastBlack = s.rfind('B'); // Find the index of the last black cell
    if (firstBlack == -1)         // If there are no black cells
        return 1;
    return lastBlack - firstBlack + 1;
}

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n; // Read the length of the strip

        string s;
        cin >> s; // Read the strip itself

        // Calculate and print the minimum length of the segment needed to be painted white
        cout << minSegmentLength(n, s) << endl;
    }

    return 0;
}
