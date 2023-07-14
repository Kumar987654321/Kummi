#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d ",&n);
    printf("%d",natural(n));
}
int natural(int a)
{
    if(a>0)
        return a+natural(a-1);
    else
        return 0;
}
