#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(l=0;l<1;l++)
    {
         for(j=0;j<6-i;j++)
    {
        printf(" ");
    }
    printf(" *");
    }
    printf("\n");
for(i=0;i<6;i++)
{
    for(j=0;j<6-i;j++)
    {
        printf(" ");
    }
    printf("* ");
    for(k=0;k<i;k++)
    {
        printf("  ");
    }
     printf("*");
    printf("\n");
}

}
