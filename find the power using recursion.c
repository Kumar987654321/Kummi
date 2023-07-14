#include<stdio.h>
int pow(int ,int );
int main()
{
int b,p,r;
printf("enter the base");
scanf("%d",&b);
printf("enter the power");
scanf("%d",&p);
r=pow(b,p);
printf("the power is %d",r);


}
int pow(int b,int p)
{
    if(p==0)
        return 1;
    else
        return b*pow(b,p-1);
}
