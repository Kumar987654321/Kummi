#include<stdio.h>
int main()
{
    int n,l,sum=0,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        l=n%10;
        sum=sum+(l*l);
        n=n/10;

    }
    if(temp==sum)
    {
        printf("it's Arm strong number");

    }
    else{
        printf("It's not a Arm strong number");
    }
}
