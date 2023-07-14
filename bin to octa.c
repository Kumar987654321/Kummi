
#include<stdio.h>
int main()
{
    int n,l,oct=0,oct1=0,i;
    printf("enter binary number");
    scanf("%d",&n);
    while(n>0)
    {
       int sum=0,oct=0;
        for(i=0;i<3;i++)
        {
            l=n%10;
            sum=sum+l*pow(2,i);
            n=n/10;
        }
        oct=oct+sum;
        oct1=oct1*10+oct;
          }
        printf("%d",oct1);
    }
