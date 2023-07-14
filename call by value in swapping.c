#include<stdio.h>
int swap(int ,int );
int main()
{
    int a,b;
    printf("enter the values");
    scanf("%d %d",&a,&b);
    printf("before the swapping the number \n");
    swap(a,b);
   // printf("after swapping the numbers \n");

}
int swap(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("after the swapping %d and %d is",a,b);
}
