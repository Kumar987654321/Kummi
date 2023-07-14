#include<stdio.h>
int main()
{
int n;
printf("enter your number");
scanf("%d",&n);
if((n&(1<<0))==0)
    //if((n&1)==0)
{
printf(" the number is even");
}
else {
printf(" the number is odd");
}}
