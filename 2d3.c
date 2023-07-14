#include<stdio.h>
int main()
{
    float a[2][2];
    int i,j;
    printf("Enter the numbers");
    //scanf("%f",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%.2f ",a[i][j]);

        }
        printf("\n");
    }


}
