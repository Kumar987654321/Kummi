//print the number in revers order
#include<stdio.h>
int main()
{
    int a[40],i,n;
    printf("enter the number ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   {
      for(i=0;i<n;i++)
        printf("%d\t",a[i]);
   }
   {
       for(i=n-1;i>=0;i--)

       {
           printf("%d\t",a[i]);
       }
   }
}
