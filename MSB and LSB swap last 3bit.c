#include<stdio.h>
int main()
{
    int a[8],i,l,b;
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
   // for(i=7;i>=0;i--)


    b=a[4];
    a[4]=a[3];
    a[3]=b;
     for(i=0;i<8;i++)
     {
          printf("%d",a[i]);
     }

}

