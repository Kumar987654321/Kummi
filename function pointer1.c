#include<stdio.h>
int add(int ,int );
int main()
{
    int r1,r2,r3;
    int (*ptr) (int,int);
    ptr=&add;
    r3=ptr(30,50);
    printf("%d",r3);

}
int add(int x,int y)
{
    int w=x+y;
    return w;
}
