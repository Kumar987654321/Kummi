//print the following patteren
#include<stdio.h>
int main()
{
    int i,j;
    printf("\n\n\n\n");
    for(i=1;i<=7;i++)
    {
       printf("\t");
        for(j=1;j<=9;j++)
        {
            if((i==1)&&(j==2||j==3||j==7||j==8))
                {
          printf("#");
                }
                else if((i==2)&&(j==1||j==2||j==3||j==4||j==6||j==7||j==8||j==9))
                {
          printf("#");
                }
                 else if((i==3)&&(j==1||j==2||j==3||j==4||j==6||j==7||j==8||j==9||j==5))
                {
          printf("#");
                }
                 else if((i==4)&&(j==2||j==3||j==4||j==5||j==6||j==7||j==8))
                {
          printf("#");
                }
                else if((i==5)&&(j==3||j==4||j==5||j==6||j==7))
                {
          printf("#");
                }
                 else if((i==6)&&(j==4||j==5||j==6))
                {
          printf("#");
                }
                else if((i==7)&&(j==5))
                {
          printf("#");
                }
                else
                    printf(" ");
        }
        printf("\n");
    }
}
