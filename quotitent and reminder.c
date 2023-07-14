#include<stdio.h>
int main()
{
    int q,r,divinded,divisor;
    printf("enter your divended");
    scanf("%d",&divinded);
    printf("enter the divisor");
    scanf("%d",&divisor);
    q=divinded/divisor;
    r=divinded%divisor;
    printf("%d %d ",q,r);
}
