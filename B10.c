//strong number
#include<stdio.h>
int main()
{

int n,i,l,sum=0,mul=1;
printf("enter the number :");
scanf("%d",&n);
for(i=0;n>0;i++)
{
    l=n%10;
    sum=sum+l;
    mul=mul*l;
    n=n/10;
}
if(sum==mul)
{
    printf(" the number is strong ");
}
else{
    printf(" the number is not strong");
}
}
