#include <stdio.h>
#include <string.h>
int main()
{

    char r[10000000];
    scanf("%s", r);
    int cnt[26] = {0};
    int len = strlen(r);
    for (int i = 0; i < len; i++)
    {
        int val = r[i] - 'a';
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c : %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}