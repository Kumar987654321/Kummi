//24)program to display all disarium numbers
#include<stdio.h>
int main()
{
int n,c,b,l;
printf("enter your number :");
scanf("%d",&n);
c=n;
while(n>0)
{l=n%10;
}
b=l*l;
n=n/10;
c=b+n;
printf("the disarium number is :",c);
 }
