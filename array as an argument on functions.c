#include<stdio.h>
int avg(int [],int );
int main()
{
    int average,size;
    int marks[5]={10,20,30,40,50};
    size=sizeof(marks)/sizeof(marks[0]);
    average=avg(marks,size);
    printf("%d",average);
    printf("inside a array is %d in bytes\n",sizeof(marks));

}
int avg(int marks[],int size)
{
    int sum=0,average=0,i;
    for(i=0;i<size;i++)
    {
        sum=sum+marks[i];
    }
    average=sum/size;
    printf("inside a average is %d in bytes\n",sizeof(marks));
    return average;
}
