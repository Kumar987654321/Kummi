#include<stdio.h>
  int  count(int n);
int main()
{
    int n,r,i;
    printf("enter the number");
    scanf("%d",&n);
    r=count(n);
    printf("%d",r);
}
int count(int n)
{
   static int r=0;
    if(n!=0)
    {
        //l=n%10;
        r++;
        count(n/10);
    }
    //printf("%d",i);
    return r;
}
