#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter an positive Number:");
    scanf("%d",&n);
    n=n&1;
    for(i=1;i<=n;i++)
    {
        if(n=i*i)
        {
            printf("not power of 2");
        }
        else
        {
            printf("power of 2");
        }
    }
}
