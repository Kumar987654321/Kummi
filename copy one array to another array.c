#include<stdio.h>
int main()
{
    int i,n,j;
    int a1[25],a2[25];
    printf("enter the elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);

    }
    for(i=0;i<n;i++)
    {

       printf("%d\n",a1[i]);
    }

     for(i=0;i<n;i++)
    {

     a2[i]=a1[i];
    }
     for(i=0;i<n;i++)
    {
       printf("%d\n",a1[i]);
    }
    for(i=0;i<n;i++)
    {
       printf("%d\n",a2[i]);
    }
    printf("\n");
}
