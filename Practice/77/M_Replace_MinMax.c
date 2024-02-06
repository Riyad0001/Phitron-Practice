#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max_pos=0;
    int min_min=0;
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_pos=i;
        }
        if (min > a[i])
        {
            min = a[i];
            min_min=i;
        }
    }
    a[max_pos]=min;
    a[min_min]=max;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    return 0;
}