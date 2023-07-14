#include<stdio.h>
int main()
{
int a[100];
int i,j,n;
printf(" enter the elements :");
scanf("%d ",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
   int temp=0;
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<n;i++)
    {

printf("%d ",a[i]);
    }
}

