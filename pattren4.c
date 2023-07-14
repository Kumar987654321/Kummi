#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    printf("\n\n\n")
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=' ';
        }
    }
    a[0][0]='*';
     a[0][2]='*';
      a[1][1]='*';
       a[2][0]='*';
        a[2][2]='*';

         for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%c\t",a[i][j]);
        }
        printf("\n");
    }

}
