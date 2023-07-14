#include<stdio.h>
int main()
{
    int n=1;
    //printf("enter the number ");
    //scanf("%d",&n);
    printf("%d ",natural(n));
}
int natural(int a)
{
    if(a<50)
    {
        printf("%d ",a);
        natural(a+1);
    }
}
