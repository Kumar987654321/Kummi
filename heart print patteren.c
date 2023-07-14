#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<9;j++)
        {
            if((j==0)&&(i==4))
            {
                printf("#");
            }
            else if((j==1)&&(i==3||i==4||i==5))
            {
                printf("#");
            }
            else if((j==2)&&(i==2||i==3||i==4||i==5||i==6))
            {
                printf("#");
            }
            else if((j==3)&&(i==1||i==2||i==3||i==4||i==5||i==6))
            {
                printf("#");
            }
            else if((j==4)&&(i==0i==1||i==2||i==3||i==4||i==5||i==6))
            {
                printf("#");
            }
        }
                printf("\n");
    }
}
