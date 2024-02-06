#include <stdio.h>
long long int si(long long int k[], int n, int i)
{
    if (i == n)
        return 0;
    long long int result = si(k, n, i + 1);
    return result + k[i];
}
int main()
{

    int n;
    int i = 0;
    scanf("%d", &n);
    long long int k[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &k[i]);
    }
    long long int result = si(k, n, i);
    printf("%lld", result);

    return 0;
}