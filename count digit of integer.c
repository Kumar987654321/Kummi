#include<stdio.h>
int main()
{
    int n,i,l;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    while(n>0)
    {
      l=n%10;
      n=n/10;
      i++;

    }
    printf("%d",i);
}
