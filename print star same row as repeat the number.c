//print star same row as repeat the number

#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("%d ",k++);

        }
        printf("\n");
    }
}
