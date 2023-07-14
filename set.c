#include<stdio.h>
int main()
{
    int n,k;
    printf(" enter your number :");
    scanf("%d",&n);
    printf("enter the position");
    scanf("%d",&k);
    n=n|(1<<k);
    printf("%d",n);


}
