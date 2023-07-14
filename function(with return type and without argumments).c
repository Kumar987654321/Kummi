//with return type and without arguments//
#include<stdio.h>
int main()
{ int result;
    printf("enter the two numbers");
   result=sum();
   printf("%d",result);
}
int sum()
{
    int a,b;
    printf("enter the two numbers ");
    scanf("%d %d",&a,&b);
    return a+b;

}
