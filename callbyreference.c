#include<stdio.h>
int func(int *, int *);
void main()
{
    int x=3,y=4;
    func(&x,&y);
    printf("values of x and y is:%d %d",x,y);
}
int func(int *x, int *y)
{
    *x=30,*y=40;

}
