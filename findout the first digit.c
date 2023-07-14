#include<stdio.h>
int main()
{
    int n,l,l1,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    l1=rev%10;
    printf("%d",l1);
}
