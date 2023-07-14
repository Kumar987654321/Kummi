#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    int s=0;
    int(*ptr)(int a,int b)=&sum;
     s=(*ptr)(a,b);
     printf("%d",s);


}
int sum(int a,int b)
{
    int c;
    c=a+b;
}
ji
