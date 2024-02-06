#include <stdio.h>
int main()
{

    char s[100], t[100];
    scanf("%s %s", s, t);
    int i = 0;
    while (1)
    {

        if (s[i] == '\0' && t[i] == '\0')
        {
            printf("Same\n");
            break;
        }

        else if (s[i] == '\0')
        {
            printf("S Choto");
            break;
        }

        else if (t[i] == '\0')
        {
            printf("T Choto");
            break;
        }
        if (s[i] == t[i])
        {
            i++;
        }
        else if (s[i] < t[i])
        {
            printf("S choto");
            break;
        }
        else
        {
            printf("T choto");
            break;
        }
    }
    return 0;
}