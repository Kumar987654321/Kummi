#include<stdio.h>
int main()
{
    int i,j,k;
    int c[2][2];
int a[2][2],b[2][2];
printf("enter A values \n: ");
for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
   {
       scanf("%d",&a[i][j]);
   }
 }
 printf("enter B values\n : ");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
   {
       scanf("%d",&b[i][j]);
   }
 }
 printf("multiplication  values \n: ");
 for(i=0;i<2;i++)
 {
     for(j=0;j<2;j++)
     {
          c[i][j]=0;
         for(k=0;k<2;k++)
         {
             c[i][j]+=a[i][k]*b[k][j];
         }
            // sum=sum+c[i][j];
       printf("%d\t",c[i][j]);

     }

printf("\n");
 }}
//     printf("%d\t",c[i][j]);

//  for(i=0;i<2;i++)
// {
//   for(j=0;j<2;j++)
//   {
//   }
// }
//
//
//}
