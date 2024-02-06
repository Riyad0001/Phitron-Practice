#include <bits/stdc++.h>
using namespace std;
int *get_array(int N)
{
    int *arr = new int[N];

    cout << "Enter " << N << " integers for the array:" << endl;
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i]; // Take input for each element
    }

    return arr;
}

int main()
{
    int N;
    cin >> N;
    int *myArray = get_array(N);
    for (int i = 0; i < N; ++i)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray;

    return 0;
}
