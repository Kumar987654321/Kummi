//to find the number in power of number
//#include<stdio.h>
//int main()
//{
//    int n,i,j;
//    printf("enter the number");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//
//
//    printf("number is %d %d is %d\n",i,i,i*i*i);
//}
//}

#include<stdio.h>
int main()
{
    int i,n,j,p;
    printf("enter the number ");
    scanf("%d",&n);
    printf("enter the power ");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {


    j=pow(n,p);
    printf("%d ",j);
    }
}
