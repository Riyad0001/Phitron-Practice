#include<stdio.h>
int main()
{


   int a,last,fast;
   scanf("%d",&a);

   last=a%10;
   fast=a/10;
if(last%fast==0 || fast%last==0)
{
    printf("YES");
}
else{
    printf("NO");
}
   

    return 0;
}