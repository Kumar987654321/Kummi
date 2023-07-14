//program to modula division without using % operator
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter your number ");
scanf("%d %d",&a,&b);
c=a-(a/b)*b;
printf("%d",c);
}
