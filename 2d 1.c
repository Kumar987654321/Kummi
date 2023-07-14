#include<stdio.h>
int main()
{
    int row,col;
    int a[row][col];
    printf("enter the row size");
    scanf("%d",&row);
    printf("enter the col size");
    scanf("%d",&col);
   array(a);


}
int array(int row,int col,int array[row][col])
{
    int i,j,a;
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
           printf("%d",a[i][j]);
       }
   }
}
