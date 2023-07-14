#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,t,p,dec=0,n1;
    printf("enter binary no.");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }

    for(int i=0;i<c;i++)
    {
        t=n1%10;
        n1=n1/10;
        p=pow(2,i)*t;
        dec=dec+p;
    }
    printf("%d",dec);
}
