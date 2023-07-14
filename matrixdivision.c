#include<stdio.h>
int main()
{
    int n,m,k;
    float a[n][m],b[n][m],c[n][m];
    for(n=0;n<2;n++)
    {
        for(m=0;m<2;m++)
        {
            scanf("%f",&a[n][m]);
        }
    }
    for(n=0;n<2;n++)
    {
        for(m=0;m<2;m++)
        {
            scanf("%f",&b[n][m]);
        }
    }
    for(n=0;n<2;n++)
    {
        for(m=0;m<2;m++)
        {
           c[n][m]=a[n][m] / b[n][m];
           printf("%.2f ",c[n][m]);
        }
        printf("\n");
    }

}
