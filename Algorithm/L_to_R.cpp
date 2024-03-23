#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    // Precompute prefix array
    vector<int> prefix(N + 1, 1);
    for (int i = 1; i <= N; ++i)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    int Q;
    cin >> Q;

    for (int q = 0; q < Q; ++q)
    {
        int L, R;
        cin >> L >> R;
        cout << prefix[R] / prefix[L - 1] << "\n";
    }

    return 0;
}
