#include<stdio.h>
int main()
{
    int i,j;
    printf("\t");
      for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if((i==0&&j==0)||(i==0&&j==4))
                {
                    printf("*");
                }
            }
                printf("#");
        }
        printf("\n");

         for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if((i==1&&j==1)||(i==1&&j==3))
                {
                    printf("*");
                }
            }
                printf("#");
        }


printf("\n");
}
