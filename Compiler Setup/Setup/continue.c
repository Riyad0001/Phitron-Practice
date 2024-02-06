#include <stdio.h>
int main()
{

    int i,n;
    for (i = 1; i<=10; i++)
    {
        
        if (i == 8)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}