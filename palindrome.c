#include<stdio.h>
int main()
{
    int n,rev=0,n1,l;

    printf("enter your number");
    scanf("%d",&n);
    n1=n;
   while(n>0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    if(n1==n)
    {
    printf("yes");
    }
    else
        printf("no");

}
