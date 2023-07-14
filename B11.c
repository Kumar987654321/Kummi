//palindrome
#include<stdio.h>
int main()
{
int n,i,a;
int rem,rev=0;
printf("enter the number ");
scanf("%d",&n);
a=n;
for( i=0;n>0;i++)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}

if(rev==a)
{
    printf("the number is palindrome");

}
else{
    printf("the number is  not a palindrome");

}
}
