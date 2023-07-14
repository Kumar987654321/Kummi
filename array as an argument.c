#include<stdio.h>
int avg(int[],int);

int main()
{
    int average;
    int marks[5]={10,20,30,40,50};
    average=avg(marks,5);
    printf("%d",average);
}
int avg(int marks[],int a)
{
    int sum=0,avg=0,i;
    for(i=0;i<a;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/a;
    return avg;
}
