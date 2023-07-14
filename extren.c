#include<stdio.h>
int main()
{
int x=3;
extern int y;
printf("x=%d\n",x);
printf("y=%d",y);
}
y=10;
