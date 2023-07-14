#include<stdio.h>
int main()
{
int a[8],n,i,c0=0,c1=0,l;
printf("enter the number :");
scanf("%d",&n);
for(i=0;n>0;i++)
{
  a[i]=n%2;
  n=n/2;
  if(a[i]==0)
  {


  c0++;
  }
  else{
  c1++;
  }
}
printf("%d\n %d\n ",c0,c1);
}
