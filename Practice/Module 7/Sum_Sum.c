#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int ar[n];
    int sum1=0, sum2=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
           
        if (ar[i] > 0)
        {
            sum1 += ar[i];
        }
        else
        {

            sum2 += ar[i];
        }
    }
     
      
    printf("%d %d", sum1, sum2);

    return 0;
}