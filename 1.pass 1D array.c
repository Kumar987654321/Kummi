//1) How to pass a 1D array as a function argument in C.write and execute relevant C program

#include<stdio.h>
int num(int []);
int main()
{
    int a[5]={1,2,3,4,5};
    int n,i;
   // n=num(n);
    num(a);
}
int num(int n[])
{
    int sum=0,i;
    for(i=0;i<5;i++)
    {
        sum=sum+n[i];
    }
    printf("%d",sum);

}
