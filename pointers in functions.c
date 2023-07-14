#include<stdio.h>
int main()
{
   int num1=5;
   int num2=6;
   printf(" Before swapping %d %d\n ",num1,num2);
   swap(&num1,&num2);
   printf(" After swapping %d %d",num1,num2);
}
void swap(int *num1,int *num2)
{
    int temp=0;
    temp=*num1;
    *num1=*num2;
    *num2=temp;


}
