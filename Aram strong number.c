#include<stdio.h>
int main()
{
int n1,n,i,i1,a[8],i2,p,l,c;
printf("enter your number :");
scanf("%d",&n);
n1=n;
for(i=1;i<=n;i++)
    {
        i1=i;
        i2=i;
        int c=0,sum=0;
 while(i1>0)
 {

    i1=i1/10;
    c++;
  }
 //printf("%d\n",c);

 while(i2>0)
 {

     l=i2%10;
     p=pow(l,c);
     sum=sum+p;
     i2=i2/10;

 }
 //printf("%d\n",sum);
 if(sum==i)
 {
     printf("%d\n",i);
 }
}

}
