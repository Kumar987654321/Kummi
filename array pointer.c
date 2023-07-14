#include<stdio.h>
int main()
{
    int a[]={1,2,3,45,99,78};
    int *p=&a[3];
    p++;
    printf("%d",*p);

}
