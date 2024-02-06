#include <stdio.h>
#include <string.h>
int main()
{

    char r[100];
    scanf("%s", r);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(r); i++)
    {
        int val = r[i] - 'a';
        cnt[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}