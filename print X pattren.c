//Print X pattren
#include<stdio.h>
int main()
{
int i,j,n;
printf("enter the number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(i==j||i+j==n+1)
        {
            printf("*");

        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
}
