//strong number
#include<stdio.h>
int main()
{
    int n,c,sum=0,l,i;
    printf("enter your number : ");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
       int fact=1;
        l=n%10;
        for(i=1;i<=l;i++)
        {
            fact=fact*i;

        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==c)
    {
        printf("strong");
    }
    else{
        printf("Not a strong");
    }
}
