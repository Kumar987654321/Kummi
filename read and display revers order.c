#include<stdio.h>
int main()
{
    int i,n;
    int a[100];
    printf("enter the elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("these numbers are correct order %d\n ",a[i]);
       // printf("-------------------------------------------\n");
    }
    for(i=n-1;i>=0;i--)
    {
       printf("these numbers are revers order %d\n ",a[i]);
    }
}
