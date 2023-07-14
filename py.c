//print star no space
#include<stdio.h>
int main()
{
    int i,j,k,g,n;
    scanf("%d",&n);
    printf("\n\n\n\n");
    for(i=n;i>=0;i--)
    {
        for(j=0;j<n-i;j++)
        {
            printf(" ");

        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        for(g=0;g<=i;g++)
        {
            printf("*");
        }
    printf("\n");
    }

}
