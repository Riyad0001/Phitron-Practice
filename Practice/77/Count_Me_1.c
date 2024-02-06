#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int cnt1 = 0, cnt2 = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            cnt1++;
        }
        else if (num % 3 == 0)
        {
            cnt2++;
        }
        else if (num % 2 == 0 & num % 3 == 0)
        {
            cnt1++;
        }
    }
    printf("%d %d", cnt1, cnt2);
    return 0;
}