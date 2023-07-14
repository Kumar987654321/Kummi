
#include<stdio.h>
int main()
{
    int n,c=0,a[8],i;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
    a[i]=n%2;
    n=n/2;
    c++;
    }
    for(i=c-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    printf("\n");
    printf("%d\n",a[0]);
    printf("%d\n",a[c-1]);

}
