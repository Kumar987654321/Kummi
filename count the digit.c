#include<stdio.h>
int main()
{
    int n,i,c=0,l;
    int a[80];
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        l=n%10;
        n=n/10;
        c++;
    }
    printf("%d ",c);
}
