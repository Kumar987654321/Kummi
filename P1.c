#include<stdio.h>
int main()
{
    int n,n1,l,n2,l1,p;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    for(int i=1;i<=n;i++)
        {
            int sum=0,c=0;
  int  i1=i;
   int  i2=i;
    while(i2>0)
    {
        l=i2%10;
        i2=i2/10;
        c++;
    }
    //printf("%d\n",c);
   while(i1>0)
   {
       l1=i1%10;
       p=pow(l1,c);
       sum=sum+p;
       i1=i1/10;
   }
  // printf("%d",sum);
   if(sum==i)
   {
      printf("%d\n",i);
   }


}}

