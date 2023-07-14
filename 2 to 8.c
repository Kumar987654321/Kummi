#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,c=0,p,i,dec=0,r1,a1,dec1,r2[3],q;
    printf("binary value:");
    scanf("%d",&a);
    r1=r;
    a1=a;
    //r2=dec;
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
    printf("decimal value:%d\n",dec);
//    for(i=3;i>0;i--)
//    {
//        r2[i]=dec%8;
//        dec=dec/8;
//        //q=(dec*10)+dec;
//
//
//        printf("octal value:%d",r2[i]);
//
//   }
for(i=0;i<3;i++)
    {
        r2[i]=dec%8;
        dec=dec/8;
        q=(dec*10)+dec;

    }
     printf("octal value :");
    for(i=3-1;i>=0;i--)
    {
        printf("%d",r2[i]);

    }
}
