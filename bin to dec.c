#include<stdio.h>
int main()
{
    int n,i,l,dec=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i>0;i++)
    {
    l=n%10;
    dec=dec+l*pow(2,i);
    n=n/10;
}
printf("%d",dec);
}
