//Adding a two matrix
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
   printf("enter a matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
   printf("enter b matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    printf("sums of matrix\n ");
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);

        }
        printf("\n");
    }



}
