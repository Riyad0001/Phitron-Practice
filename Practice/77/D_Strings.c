#include <stdio.h>
#include <string.h>
int main()
{
    char s[10];
    char n[10];
    scanf("%s %s", s, n);
    printf("%d %d\n", strlen(s), strlen(n));
    printf("%s%s\n", s, n);
    if (strlen(s) > 0 && strlen(n) > 0)
    {

        char temp = s[0];
        s[0] = n[0];
        n[0] = temp;
    }
    printf("%s %s", s, n);
    return 0;
}