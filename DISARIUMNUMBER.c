#include<stdio.h>
int main()
{
    int n,l1,b,j,i,c,l;
    printf("enter your number :");
    scanf("%d",&n);
    c=n;
    for(i=1;i<n;i++)
    {
       int i1=i;
        int rev=0 ,sum=0;
        while(i1>0)
        {

        l=i1%10;
        rev=rev*10+l;
        i1=i1/10;
        }

    for(j=1;rev>0;j++)
    {
        l1=rev%10;
        b=pow(l1,j);
        sum=sum+b;
        rev=rev/10;
    }
    if(i==sum)
    {
        printf("%d\n",i);

    }
    }
}





