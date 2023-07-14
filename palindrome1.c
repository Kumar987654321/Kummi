#include<stdio.h>
int main()
{
    int n1,l,n,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    if(n1==rev)
    {
        printf("yes");

    }
    else{
        printf("no");
    }
}
