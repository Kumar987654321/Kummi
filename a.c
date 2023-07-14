#include<stdio.h>
int rec(int );
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",rec(n));

}
int rec(int n)
{
    if(n>=1)
        return n*rec(n-1);
    else
        return 1;

}
