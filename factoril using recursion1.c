#include<stdio.h>
int main()
{
    int n,f;
    printf("enter the number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);

}
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
