#include <stdio.h>
long long int fca(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int ans = fca(n - 1);
    return ans * n;
}
int main()
{

    long long int n;
    scanf("%lld", &n);
    long long int ans = fca(n);
    printf("%lld", ans);
    return 0;
}