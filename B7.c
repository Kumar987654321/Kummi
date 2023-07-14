#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter your three number :");
    scanf("%d %d %d",&a,&b,&c);
    if((a<b&&a<c)||(a>c&&a<b))
    {
        printf(" a is 2nd greater ");
    }
    if((b>a&&b<c)||(b<a&&b>c))
    {
        printf(" b is 2nd greater ");
    }
    if((c>a&&c<b)||(c>b&&c<a))
    {
        printf(" c is 2nd greater");
    }
   /* else
    {
        printf("invalid numbers");
    }*/
}
