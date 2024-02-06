#include <stdio.h>
void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d", even, odd);
}

int main()
{
    odd_even();

    return 0;
}