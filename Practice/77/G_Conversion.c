#include <stdio.h>
#include <string.h>
int main()
{

    char r[100001];
    scanf("%s", r);
    int i;
    int st = strlen(r);
    for (int i = 0; i < st; i++)
    {
        if (r[i] == ',')
        {

            printf(" ");
        }
        else if (r[i] >= 'a' && r[i] <= 'z')
        {

            printf("%c", r[i] - 32);
        }
        else if (r[i] >= 'A' && r[i] <= 'Z')
        {

            printf("%c", r[i] + 32);
        }
    }

    return 0;
}