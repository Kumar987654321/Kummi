//decimal to binary
#include<stdio.h>
int main()
{
    int a[8];
    int i,n,b;
    printf("enter the number ");
    scanf("%d",&n);

     for(i=0;i<7;i++)
     {
         a[i]=n%8;
         n=n/8;
     }
     for(i=i-1;i>=0;i--)
     {
         printf("%d",a[i]);
     }
}
