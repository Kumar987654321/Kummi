//n odd numbers and their sum
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum=sum+2*i-1;
    }
    printf("%d is %d\n",n,sum);
}
