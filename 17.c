#include <stdio.h>
 int main()
 {

     int a[50],n,i,k;
     printf("enter the numbers");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("enter the position ");
            scanf("%d",&k);
            i=0;
            while(i!=k-1)
                i++;

           for(i=0;i<n;i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");

 }
