#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        char s[m + 1];
        scanf("%s", s);
        int ti = 0, pa = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == 'T')
            {
                ti++;
            }
            else if (s[j] == 'P')
            {
                pa++;
            }
        }
        if (ti > pa)
        {
            printf("Tiger\n");
        }
        else if (pa > ti)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}