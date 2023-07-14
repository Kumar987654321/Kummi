#include<stdio.h>
int main()
{
int a[100];
int n,i,j;
printf("enter the number:");
scanf("%d",&n);
printf("enter upto 1 to %d \n",n);
for(i=1;i<=n;i++)
{
for(j=1;j<=10;j++)
{
printf("%d*%d=%d\n",i,j,i*j);

}
printf("\n");
}


}
