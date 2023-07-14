#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,r,p,c=0,r1,a1,dec=0;
    printf("Enter the Binary number:");
    scanf("%d",&a);
    a1=a;
    r1=r;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        r1=a1%10;
        a1=a1/10;
        p=pow(2,i)*r1;
        dec=dec+p;

    }
    printf("Decimal value  is:%d",dec);
}
