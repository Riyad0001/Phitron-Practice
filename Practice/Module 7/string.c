#include<stdio.h>
int main()
{
char a[]="Riyad\0";
int sz=sizeof(a)/sizeof(char);
printf("%s\n",a);
printf("%d",sz);
   
    return 0;
}