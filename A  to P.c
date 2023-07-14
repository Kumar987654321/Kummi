//Array to pointer
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *p;
    p=&a[4];
    printf("%d",*p);
}
