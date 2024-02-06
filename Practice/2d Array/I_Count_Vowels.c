#include <stdio.h>
int gi(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int ans = gi(s, i + 1);
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] = s[i] - 32;
    }
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{

    char s[201];
    fgets(s, 201, stdin);
    int cnt = gi(s, 0);
    printf("%d", cnt);

    return 0;
}