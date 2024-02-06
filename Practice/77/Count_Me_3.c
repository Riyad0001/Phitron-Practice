#include <stdio.h>
#include <string.h>
int main()
{
    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        char s[10001];
        scanf("%s", &s);

        int c_cap = 0, c_sml = 0, c_dig = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c_cap++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                c_sml++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                c_dig++;
            }
        }
        printf("%d %d %d\n", c_cap, c_sml, c_dig);
    }
    return 0;
}