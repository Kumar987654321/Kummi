#include<stdio.h>
int main()
{
    int n,i;
    printf("enter your number ");
    scanf("%d",&n);
    printf("printing the all the even number\n");
    for(i=0;i<=n;i+=2)
    {
        printf("%d\n",i);
    }
}
