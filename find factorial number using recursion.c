#include<stdio.h>
int main()
{
    int n1,f;
    printf("enter the number");
    scanf("%d",&n1);
    f=fact(n1);
    printf("%d is %d",n1,f);
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}
