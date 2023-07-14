//find the sum and average of 10 numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
        avg=sum/n;
    printf ("here is the sum %d\n",sum);
    printf("here is the avg %.2f\n",avg);
}
