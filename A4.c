#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
       // printf("%d",a[i]);
    }
        //printf("%d",sum);

        printf("%d ",sum);



}
