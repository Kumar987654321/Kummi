#include<stdio.h>
int main()
{

int a[10];
int i;
printf("enter the elements\n");
for(i=0;i<10;i++)
{
    printf("element %d=",i);
scanf("%d\n",&a[i]);
}
printf("the elements are here");
for(i=0;i<10;i++)
{
    printf("%d ",a[i]);
}
}
