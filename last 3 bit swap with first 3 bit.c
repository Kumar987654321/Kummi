#include<stdio.h>
int main()
{
int n,i,a[8],b,l,c,a1;

scanf("%d",&n);
for(i=0;i<8;i++)
{
    a[i]=n%2;
    n=n/2;

}
for(i=7;i>=0;i--)
    {
//printf("%d",a[i]);
    }

a1=a[i];
printf("%d",a);
/*b=n&(1>>5);

for(i=7;i<0;i--){
c=a|b;
printf("%d",c);
}*/

}
