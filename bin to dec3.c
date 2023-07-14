//binary to decimal
#include<stdio.h>
int main()
{
    int n,dec=0,b,i;
    printf("enter the number :-");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        b=n%8;
        dec=dec+b*pow(8,i);
        n=n/8;
    }
    printf("%d",dec);
}
