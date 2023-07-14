//print pyramid
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<i-n;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
1
    }
}
