#include<stdio.h>
int main()
{int n;
printf("enter the numbers:");
scanf("%d",&n);
printf("%d",sum(n));

}
int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;

}
