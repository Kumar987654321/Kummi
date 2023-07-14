//write a program for searching an array for a particular number and show its index
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,pos,n;
    printf("enter the numbers :");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          scanf("%d",a[i][j]);
      }
    }
    printf("enter your position :");
    scanf("%d",&pos);
    a[pos-1];
    {
        for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          {
              printf("%d",a[pos-1]);

          }
        }
    }
}
