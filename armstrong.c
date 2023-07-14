#include<stdio.h>
int main()
{
int n,c=0,l,l1,p,sum=0,n1,n3;
printf("enter the number:");
scanf("%d",&n);

n3=n;
n1=n;
while(n>0)
{
    l=n%10;
    n=n/10;
    c++;
}


while(n1>0)
{
l1=n1%10;
p=pow(l1,c);
sum=sum+p;
n1=n1/10;
}

//printf("%d",sum);

if(sum==n3)
{
    printf("the number is true");
}
else{
     printf("the number is flase");
}
}
