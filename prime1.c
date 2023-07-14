#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("It's a Prime number");
    }
    else{
        printf("Not a prime number");
    }
}
