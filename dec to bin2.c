#include<stdio.h>
int main()
{
    int a[8],n,i,k,g,j;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    a[i]==j;
    printf("\n");
    printf("enter the bit");
    scanf("%d",&k);
    a[i]=a[i]|(1<<k);
    g=a[i]+j;
    printf("%d",g);


}
