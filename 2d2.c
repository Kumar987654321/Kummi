#include<stdio.h>
    int row,col,i,j;
int main()
{
    printf("enter the row size :-");
    scanf("%d",&row);
    printf("enter the col size :-");
    scanf("%d",&col);
    int a[row][col];
    printf("enter the elements :-");


    print(a);
}
void print(int a[][col])
{

  for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
     {
         scanf("%d",&a[i][j]);
     }
    }
   for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++)
     {
         printf("%d ",a[i][j]);
     }
     printf("\n");
    }
}
