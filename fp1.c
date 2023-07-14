#include<stdio.h>
int add(int ,int );
int main()
{
    int a,b,s=0;
    printf("enter your numbers");
    scanf("%d %d",&a,&b);
    int (*ptr)(int , int );
    ptr=&add;
   s=(*ptr)(a,b);
    printf("%d",s);
}
int add(int x,int y)
{
    int w=x+y;
    return w;
}
