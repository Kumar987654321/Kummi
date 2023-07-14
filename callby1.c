#include<stdio.h>
int main()
{
    int a=10,b=20;
    //printf("enter the values:");
    //scanf("%d %d",&a,&b);
    call(&a,&b);
printf("%d %d",a,b);
}
int call(int *a,int *b)
{
    *a=1,*b=2;

}
