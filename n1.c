#include<stdio.h>
int main()
{
    int a[4]={1,3,4,2},n=0,i;
    for(i=0;i<4;i++)
    {
        n=n*10+a[i];
    }
    printf("%d",n);
}
