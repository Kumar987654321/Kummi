#include<stdio.h>
int i,n,n1=0,n2=1,n3;
int main()
{

    printf("enter the number :-");
    scanf("%d",&n);
    printf("%d %d ",n1,n2);
    fib(n);

}
int fib(int n)
{
    for(i=1;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d  ",n3);
    }

}
