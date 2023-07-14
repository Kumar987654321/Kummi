//print number provide the number
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("here the out put is %d",sum);
}
