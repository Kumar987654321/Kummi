//print numbers in reverse in numbers
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the numbers ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
