#include<stdio.h>
int main()
{
int i,j,k,n;
printf("enter the number :\n");
scanf(" %d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
        printf(" ");
    }
    for(k=0;k<i;k++)
    {
        printf("* ");
    }


printf("\n");
}
for(i=n;i>=0;i--)
{
    for(j=0;j<n-i;j++)
    {
        printf(" ");
    }
    for(k=0;k<i;k++)
    {
        printf("* ");
    }
printf("\n");
}
}
