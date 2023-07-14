#include<stdio.h>
void sum(int[]);

int main()
{
    int n;
    int a[40]={1,2,3,4};
    num(a);
}
void num(int n[])
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+n[i];
    }
    printf("%d",sum);
}
