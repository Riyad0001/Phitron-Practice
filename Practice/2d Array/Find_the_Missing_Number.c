#include <stdio.h>
int main()
{

    int long long n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int s, a, b, c;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        long long int ms = s / (a * b * c);
        if (s == 0)
        {
            printf("0\n");
        }
        else if (ms * a * b * c == s)
        {
            printf("%lld\n", ms);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}