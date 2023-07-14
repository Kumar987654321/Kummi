#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,r,i,r1,a1,dec=0,p,r2[3],q;
    printf("enter the number:");
    scanf("%d",&a);
    a1=a;
    r1=r;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c++;
    }
    //printf("%d",c);
    for(i=0;i<c;i++)
    {
        r1=a1%10;
        a1=a1/10;
        p=pow(2,i)*r1;
        dec=dec+p;
    }
    printf("%d\n",dec);
    for(i=0;i<3;i++)
    {
        r2[i]=dec%8;
        dec=dec/8;
        q=(dec*10)+r2;
    }
    for(i=3-1;i>=0;i--)
    {

    printf("%d",r2[i]);
    }
}
