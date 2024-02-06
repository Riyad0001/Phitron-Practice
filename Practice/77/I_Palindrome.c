#include <stdio.h>
#include <string.h>
int main()
{

    char r[1000];
    scanf("%s", r);
    int i = 0, j = strlen(r) - 1;
    int isPalindrome = 1;
    while (i < j)
    {
        if (r[i] != r[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}