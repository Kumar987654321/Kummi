#include<stdio.h>
int main()
{
    int a[8];
    int i,n,b;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i;i>=0;i--)
    {


    printf("%d",a[i]);
}
}
