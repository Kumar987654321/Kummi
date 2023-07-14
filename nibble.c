#include<stdio.h>
int main()
{

    int n,a[11],i;
    printf("enter the number");
    scanf("%d",&n);
    for( i=0;i<8;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=7;i>=0;i--)
    {
        printf("%d",a[i]);
    }
     printf("\n");
    printf("Higher nibble\n");
     for(i=7;i>=4;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n");
     printf("lower nibble\n");
     for(i=3;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
