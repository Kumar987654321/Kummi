//sortting an array.
#include<stdio.h>
int main()
{
    int a[5];
    int temp=0,i,j;
    printf("enter the numbers:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
              if( a[i]>a[j])
              {


               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
              }
        }


    }
    // for(i=0;i<5;i++)
        printf(" largest number is %d\t",a[0]);

}
