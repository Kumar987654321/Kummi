//#include<stdio.h>
//int main()
//{
//    int n,n1=0,n2=1,n3,i;
//    printf("enter the number");
//    scanf("%d",&n);
//    printf("%d %d ",n1,n2);
//    for(i=2;i<n;i++)
//    {
//        n3=n1+n2;
//        printf("%d ",n3);
//        n1=n2;
//        n2=n3;
//
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n,n1,n2;
    printf("enter the number");
    scanf("%d",&n);
    fibo(n1,n2);
    printf("\n\n");

}
int fibo(int n1,int n2)
{
   int i,n,n3;
    if(i==n)
        return 0;
    else
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        i++;
        fibo(n1,n2);


    }
        return(0);
}
