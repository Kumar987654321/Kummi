#include<stdio.h>
int main()
{
    int n,l,i,rev=0;
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
        l=n%10;
        //rev=rev*10+l;
        n=n/10;
        i++;
    }
    printf("number of digits in your number is %d",i);
}
